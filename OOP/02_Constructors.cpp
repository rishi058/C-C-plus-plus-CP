#include <bits/stdc++.h>
using namespace std;

// Constructors is used to construct a class object..

class Employee{
    public:
    string name;
    long long phn_no;
    int age;

    void intro(){
        cout<<"Name - "<<name<<"\nPhone No. - "<<phn_no<<"\nAge - "<<age;
    }

    //Constructor-->


    Employee(string NAME , long long PHONE, int AGE){
        name = NAME;
        phn_no = PHONE;
        age = AGE;
    }

};

int main()
{
    Employee emp1 = Employee("Rishi", 7255976477, 20);
    emp1.intro();

    cout<<endl;

    Employee emp2 = Employee("Vaibhav", 9988776543, 21);
    emp2.intro();
}