#include <iostream>
using namespace std;

class Date{
public:
    Date(int yy,int mm,int dd);

    void add_day(int n);

    int month() const {return m;}
    int day() const {return d;}
    int year() const {return y;}

private:
    int y,m,d;
};

Date::Date(int yy,int mm,int dd){
    if(mm>12 || mm<1 || dd<1 || dd>30 || yy<0){
        cout<<"invalid date"<<endl;
    } else{
        y = yy;
        m = mm;
        d = dd;
    }
}

void Date::add_day(int n){
    if((d+n)>30){
        m+=1;
        d=(d+n)-30;
    } else if(((d+n)>30) && (m==12)) {
        y += 1;
        m = 1;
        d = (d + n) - 30;
    } else d+=n;
}

ostream& operator<<(ostream& os, const Date& dd){
    return os<<'('<<dd.year()<<','<<dd.month()<<','<<dd.day()<<')';
}

void f(){
    Date today(1978,6,25);
    Date tomorrow=today;
    tomorrow.add_day(1);
    cout<<today<<tomorrow;
}


int main(){
    f();
}