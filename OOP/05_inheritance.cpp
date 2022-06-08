#include <bits/stdc++.h>
using namespace std;

/*
Inheritance is used to make a sub class of a class, e.g --> 
All employee != All are teacher , some are servants ,etc
A teacher can all be Lab assistant,  
but all lab assistanve arent teacher
*/

class AbstractEmployee{
    virtual void askforprom()=0;
};

                //abstract class
class Employee : AbstractEmployee{
private:

    //string name;
    long long phn_no;
    int age;

protected:
    string name;

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


}; 
//Inheritance--->>

    //child_class which inherit from employee..
class Developer : public Employee {
public :
    string lang;
    Developer(string name, long long phn_no, int age, string langg)
    : Employee(name, phn_no, age)
    {
        lang = langg;
    }

    void fixbug(){
        //cout<<getName()<<" fixed bug using "<<lang<<endl;
        cout<<name<<" fixed bug using "<<lang<<endl;
        
    }

};

class Teacher: public Employee
{
public: 
    string subject;
    void teach(){
        cout<<name<<" teaches "<<subject<<endl;
    }

    Teacher(string name, long long phn_no, int age, string Sub)
        : Employee(name, phn_no, age){
            subject = Sub;
    }
};
int main()
{
    Developer d = Developer("Rishi", 7255976477, 21, "c++");
    d.fixbug();
    d.fixbug();
    d.askforprom();

    Teacher t = Teacher("Vaibhav", 765409835, 21, "Maths");
    t.teach();
}