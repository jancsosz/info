#include <iostream>

using namespace std;


int* ga=new int[10]{ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

/* for(int i=0;i<10;++i){
    ga[i]=pow(2.0,i);
}*/

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void f(int*a,int n){
    int* la=new int[10];
    for(int i=0;i<n;++i){
        la[i]=ga[i];
    }

    for(int i=0;i<n;++i){
        cout<<la[i]<<endl;
    }
    int* p=new int[n];

    for(int i=0;i<n;++i){
        p[i]=a[i];
    }

    for(int i=0;i<n;++i){
        cout<<p[i]<<endl;
    }

    delete[] p;

}

int main(){
    f(ga,10);

    int* aa=new int[10];

    for(int i=0;i<10;++i){
        aa[i]=factorial(i+1);
    }

    f(aa,10);
}