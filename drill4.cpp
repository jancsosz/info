#include <iostream>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int db,i;
    double small,large,x,sum;
    string mert_egys;
    vector<double> v,met;



    i=1;
    sum=0.0;

    while (cin>>x>>mert_egys){
        if (mert_egys!="cm" && mert_egys!="m" && mert_egys!="ft" && mert_egys!="in") {
            cout<<"hibas mertekegyseg"<<endl;
            break;
        }

        if (mert_egys=="m") x=x;
        else if (mert_egys=="cm") x=x/100;
        else if (mert_egys=="in") x=(x*2.54/100);
        else if (mert_egys=="ft") x=(x*12*2.54/100);

        if (i=1) {
            small=x;
            large=x;
        }
        if (x>large && i!=1){
            cout<<"largest so far."<<endl;
            large=x;
            }
        else if (x<small && i!=1){
            cout<<"smallest so far."<<endl;
            small=x;
        }
        v.push_back(x);

        sum += x;

        met.push_back(x);

        ++i;
    }

    cout<<"vektor elemeinek szama: "<<met.size()<<endl<<"elemek osszege: "<<sum<<endl;

    sort(met.begin(),met.end());
    for(int i=0; i<met.size(); ++i) cout<<met[i]<<endl;
}