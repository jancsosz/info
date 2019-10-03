#include <iostream>

using namespace std;

int main()
{
    //1.feladat
    string first_name;

    cout<<"Please enter your first name!: "<<endl;
    cin>>first_name;

    cout<<"Hello "<<first_name<<endl;

    cout<<"Enter the name of the person you want to write to: "<<endl;
    cin>>first_name;

    cout<<"Dear "<<first_name<<","<<endl;
    //2.feladat
    cout<<"How are you? I am fine. I miss you."<<endl;

    //3.feladat
    string friend_name;

    cout<<"Enter the friend name you'd like to know about: "<<endl;
    cin>>friend_name;

    //4.feladat
    char friend_sex=0;

    cout<<"Enter the gender of the friend (m-male, f-female)"<<endl;
    cin>>friend_sex;

    if (friend_sex=='m') {cout<<"If you see "<<friend_name<<" please ask him to call me."<<endl;}
        else {cout<<"If you see "<<friend_name<<" please ask her to call me."<<endl;}

    //5.feladat
    int age;
    cout<<"Enter your friend's age: "<<endl;
    cin>>age;

    //6.feladat
    if (age<=0 || age>=110) {cout<<"you're kidding!"<<endl;}
        else if (age<=12) {cout<<"Next year you will be "<<age+1<<endl;}
        else if (age==17) {cout<<"Next year you will be able to vote"<<endl;}
        else if (age>=70) {cout<<"I hope you are enjoying retirement. "<<endl;}

    //7.feladat
    cout<<"Yours sincerely,"<<endl<<endl<<endl<<"Jancsi";
}
