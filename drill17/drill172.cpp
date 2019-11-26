#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void print_vector(ostream& os,const vector<int> &v){
    for(int i=0;i<v.size();++i) {
        os<<v[i]<<endl;
        if(i==v.size()-1){os<<endl;}
    }
}

void print_array(ostream& os,int*a,int n){
    for(int i=0;i<n;++i) {
        os<<a[i]<<endl;
        if(i==n-1){os<<endl;}
    }
}

int main() {
    int *p1 = new int{7};
    cout << p1 << endl;
    print_array(cout, p1, 1);

    int *p2 = new int[7];

    for (int i = 0; i < 7; ++i) {
        p2[i] = pow(2.0, i);
    }
    cout << p2 << endl;
    print_array(cout, p2, 7);

    int *p3 = p2;
    p1 = p2;
    p3 = p2;

    cout << p1 << endl;
    print_array(cout, p1, 7);

    cout << p2 << endl;
    print_array(cout, p2, 7);

    delete[] p1;
    delete[] p2;
    delete[] p3;

    //----------

    p1=new int[10];
    for (int i = 0; i < 7; ++i) {
        p1[i] = pow(2.0, i);
    }

    p2=new int[10];

    for (int i = 0; i < 7; ++i) {
        p2[i] = p1[i];
    }
    //----------
    vector<int>* v1=new vector<int>(10);
    vector<int>* v2=new vector<int>(10);

    vector<int> &vr1=*v1;
    vector<int> &vr2=*v2;

    for(int i=0;i<10;++i){
        vr1[i]=pow(2.0,i);
    }

    vr2=vr1;

    print_vector(cout,vr1);
    print_vector(cout,vr2);
}