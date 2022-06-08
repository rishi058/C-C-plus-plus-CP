// control structure -- 3 types 
// 1.sequence str.
// 2.selection str.
// 3.loop str.
// if else + if else ladder + switch statement

#include<iostream>

using namespace std;

int main()
{
    int age;
    
    //**************if-else****************
    //  cout<<"Tell Me your age?"<<endl;
    //  cin>>age;
    //  if (age==18) cout<<"You are ready now.";
    //  else cout<<"you are not ready";

   
    // *************IF--ELSE--LADDER*****************
    cout<<"Tell me your age."<<endl;
    cin>>age;
    if (age<18) {cout<<"You are a noob.";}
    else if ((age==19) && (age<30)) {cout<<"you are a beginner";}
    else if ((age==30) && (age<40)) {cout<<"you are a expert";}
    else if ((age>40)) {cout<<"you are a pro"<<endl;}

    //**********SWITCH CASE***************
    // cout<<"Tell me your age"<<endl;
    // cin>>age;
    // switch (age)
    // {
    // case(18): cout<<"You are 18";
    // break;

    // case(25): cout<<"You are 25";
    // break;

    // case(40): cout<<"You are 40";
    
    // default: cout<<"No special cases.";
    // break;
    // }

    return 0;
}