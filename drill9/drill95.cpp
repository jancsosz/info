#include <iostream>
using namespace std;

enum class Month{
    jan=1,fev,mar,apr,may,jun,jul,sep,oct,nov,dec
};

class Year{
    static const int min=1800;
    static const int max=2200;
public:
    class Invalid{};
    Year(int x) : y(x) {if(x<min || max<=x) throw Invalid{};}

    int year() const {return y;}

    void plus_year() {y=++y;}
private:
    int y;
};

class Date{
public:
    Date(Year yy,Month mm,int dd);

    void add_day(int n);

    int year() const { return y.year();}
    int month() const {return int(m);}
    int day() const {return d;}

private:
    Year y;
    Month m;
    int d;
};

Date::Date(Year yy,Month mm,int dd) : y{yy}, m{mm}, d{dd}
{

}

Month operator++(Month& m){
    m = (m == Month::dec) ? Month::jan : Month(int(m)+1);
    return m;
}

ostream& operator<<(ostream& os,const  Date& dd){
    return os<<'('<<dd.year()<<','<<dd.month()<<','<<dd.day()<<')';
}

void Date::add_day(int n) {
    if ((d + n) > 30) {
        ++m;
        d = (d + n) - 30;
    } else if (((d + n) > 30) && (m == Month::dec)) {
        Date::m=Month::jan;
        y.plus_year();
        d = (d + n) - 30;
    } else d += n;
}

void f(){
    const Date today(Year{1978},Month::jun,25);
    Date tomorrow=today;
    tomorrow.add_day(1);
    cout<<today<<tomorrow;
}


int main(){
    f();
}