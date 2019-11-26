#include <iostream>
#include <vector>

using namespace std;


int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

vector<int> gv={ 1, 2, 4, 8, 16, 32, 64, 128, 256, 512};

void f(vector<int> v){
    vector<int> lv(10);
    for(int i=0;i<10;++i){
        lv[i]=gv[i];
    }
    
    for(int i=0;i<10;++i){
        cout<<lv[i]<<endl;
    }

    vector<int> lv2=v;

    for(int i=0;i<10;++i){
        cout<<lv2[i]<<endl;
    }
}

int main(){
    f(gv);

    vector<int> vv(10);

    for(int i=0;i<10;++i){
        vv[i]=factorial(i+1);
    }

    f(vv);
}