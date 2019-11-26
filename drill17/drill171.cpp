#include <iostream>
#include <vector>

using namespace std;

void print_array10(ostream& os, int*a){
    for(int i=0;i<10;++i) {
        os<<a[i]<<endl;
        if(i==9){os<<endl;}
    }
}

void print_array(ostream& os,int*a,int n){
    for(int i=0;i<n;++i) {
        os<<a[i]<<endl;
        if(i==n-1){os<<endl;}
    }
}

void print_vector(ostream& os,const vector<int> &v){
    for(int i=0;i<v.size();++i) {
        os<<v[i]<<endl;
        if(i==(v.size()-1)){os<<endl;}
    }
}

int main() {
    int *arr = new int[10];

    delete[] arr;

    int *arr10 = new int[10]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109};
    int *arr11 = new int[11]{100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110};
    int *arr20 = new int[20];

    for (int i = 0; i < 20; ++i) {
        arr20[i] = 100 + i;
    }

    print_array10(cout, arr);
    print_array10(cout, arr10);
    print_array(cout, arr11, 11);
    print_array(cout, arr20, 20);


    delete[] arr10;
    delete[] arr11;
    delete[] arr20;

//

    vector<int>* vec10=new vector<int>{100,101,102,103,104,105,106,107,108,109};
    vector<int>* vec11=new vector<int>{100,101,102,103,104,105,106,107,108,109,110};
    vector<int>* vec20=new vector<int>(20);

    for (int i=0;i<20;++i){
        (*vec20)[i]=100+i;
    }

    vector<int> &vr=*vec20;
    vector<int> &vr1=*vec10;
    vector<int> &vr2=*vec11;

    print_vector(cout,vr1);
    print_vector(cout,vr2);
    print_vector(cout,vr);
}

