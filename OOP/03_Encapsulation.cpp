#include <bits/stdc++.h>
using namespace std;

//  ENCAPSULATION is used to acess(read)/edit(update) a data to a created class object

class Employee{
    private:
    string name;
    long long phn_no;
    int age;

    public:

    void set_name(string Name){         //setter
        name = Name;
    }
    string getName(){
        return name;
    }

    void set_phn_no(long long Phn){
        phn_no = Phn;
    }

    long long get_phn_no(){
        return phn_no;
    }

    void set_age(int Age){
        if(age>=18){                //conditions...
        age = Age;
        }
    }

    int get_age(){
        return age;
    }


    void intro(){
        cout<<"Name - "<<name<<"\nPhone No. - "<<phn_no<<"\nAge - "<<age;
    }

    //Constructor-->
    Employee(string Name, long long Phn, int Age){
        name = Name;
        phn_no = Phn;
        age = Age;
    }

};

int main()
{
    Employee emp1 = Employee("Rishi", 7255976477, 20);
    emp1.intro();

    cout<<endl;

    Employee emp2 = Employee("Vaibhav", 9988776543, 21);
    emp2.intro();

    cout<<endl;

    emp2.set_age(50);
    emp2.intro();
}