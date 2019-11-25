#include <iostream>
using namespace std;

struct Date{

    int y,m,d;

    Date(int y,int m,int d){
        if(m>12 || m<1 || d<1 || d>30 || y<0){
            cout<<"invalid date"<<endl;
        } else{
            this ->   y = y;
            this ->   m = m;
            this ->   d = d;
        }
    }

    void add_day(int n){
        if((d+n)>30){
            m+=1;
            d=(d+n)-30;
        } else if(((d+n)>30) && (m==12)) {
            y += 1;
            m = 1;
            d = (d + n) - 30;
        } else d+=n;
    }
};

ostream& operator<<(ostream& os, const Date& dd){
    return os<<'('<<dd.y<<','<<dd.m<<','<<dd.d<<')';
}

void f(){
    Date today(1978,6,25);
    Date tomorrow=today;
    tomorrow.add_day(10);
    cout<<today<<tomorrow;
}


int main(){
    f();
}