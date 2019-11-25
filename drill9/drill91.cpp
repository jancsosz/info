#include <iostream>
using namespace std;

struct Date{
    int y,m,d;
};

void init_day(Date& dd, int y, int m, int d){
    if(m>12 || m<1 || d<1 || d>31 || y<0){
        cout<<"invalid date"<<endl;
    } else{
        dd.y = y;
        dd.m = m;
        dd.d = d;
    }
}

void add_day(Date& dd, int n){
    if((dd.d+n)>30){
        dd.m+=1;
        dd.d=(dd.d+n)-30;
    } else if(((dd.d+n)>30) && dd.m=12) {
        dd.y += 1;
        dd.m = 1;
        dd.d = (dd.d + n) - 30;
    } else dd.d+=n;
}

ostream& operator<<(ostream& os, const Date& dd){
    return os<<'('<<dd.y<<','<<dd.m<<','<<dd.d<<')';
}

void f(){
    Date today;
    Date tomorrow;
    init_day(today,1978,6,45);
    tomorrow=today;
    add_day(tomorrow,1);
    cout<<today<<tomorrow;
}


int main(){
    f();
}