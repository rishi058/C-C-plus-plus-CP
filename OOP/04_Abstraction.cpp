#include <bits/stdc++.h>
using namespace std;

// Abstraction is 

class AbstractEmployee{
    virtual void askforprom()=0;
};

                //abstract class
class Employee : AbstractEmployee{
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

    virtual void askforprom(){
        if(age>=30){cout<<name<<" got promoted"<<endl;}
        else {cout<<name<<" got no promotion"<<endl;}

    }

    void ask(){
        if(age>=20){cout<<name<<" got promoted"<<endl;}
        else {cout<<name<<" got no promotion"<<endl;} 
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

    emp2.askforprom();
    emp1.askforprom();

    emp1.ask();
    emp2.ask();
}