// Arithmetic operator 2 (a++, a--, ++a, --a)
// Comparison operator (==, !=, <=, >=, <, >)
// Logical operator ( &&_and, ||_or, !_not )
// output will be in boolean i.e 0_false and true_1
/* +=, -=, *=, /=, arithmetic operator */
 
 #include<iostream>

 using namespace std;

 int main()
 {
    int a=5, b=9;
    cout<<"Following are the types of ALgebric operators 2 in C++"<<endl;

    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;

 

    // Comparison operators
    cout<<"Following are the comparison operators in C++"<<endl;
    
     
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl; 

    // Logical operators
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 

     return 0;
 }
