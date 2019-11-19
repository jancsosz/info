#include "std_lib_facilities.h"

void swap_v(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void swap_r(int& a,int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

//swap_cr doesn't compile

/*
void swap_cr(const int& a,const int& b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}
*/
int main(){
    int x=7;
    int y=9;

    const int cx=7;
    const int cy=9;

    double dx=7.7;
    double dy=9.9;

    swap_v(x,y);
    cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    swap_r(x,y);
    cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    swap_v(7,9);
    cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
    //swap_r(7,9);

    swap_v(cx,cy);
    cout<<"cx: "<<cx<<" "<<"cy: "<<cy;
    //swap_r(cx,cy);
    //swap_v(7.7,9.9);
    //swap_r(7.7,9.9);

    //swap_v(dx,dy);
    //swap_r(dx,dy);
    //swap_v(7.7,9.9);
    //swap_r(7.7,9.9);
}

