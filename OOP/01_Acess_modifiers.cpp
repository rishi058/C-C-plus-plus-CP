#include <bits/stdc++.h>
using namespace std;

class Employee{
    public:
    string name;
    long long phn_no;
    int age;

    void intro(){
        cout<<"Name - "<<name<<"\nPhone No. - "<<phn_no<<"\nAge - "<<age;
    }

};

int main()
{
    Employee emp1;
    emp1.name = "Rishi";
    emp1.phn_no = 7255976477;
    emp1.age = 20;
    emp1.intro();
    
    cout<<endl;

    Employee emp2;
    emp2.name = "Vaibhav";
    emp1.phn_no = 9988776543;
    emp2.age = 21;
    emp2.intro();
}