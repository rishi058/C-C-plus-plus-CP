// Input and output function
// algebric operation 1 i.e (=, -, *, /, % )
// "<<" is insertion operator
// ">>" is a extraction operator

#include<iostream>

using namespace std;

int main()
{
    int num1, num2;

    cout<<"Enter the value of num1 : \n";
    cin>>num1;

    cout << "Enter the value of num2 : \n";
    cin>>num2;

    cout << "The sum of num1 and num2 is : "<<num1+num2<<"\nThe diffrence of num1 and num2 is : "<<num1-num2<<"\nThe product of num1 and and num2 is : "<<num1*num2<<"\nThe remainder of num1 and num2 is : "<<num1%num2<<"\nThe division of num1 and num2 is : "<<num1/num2;
    
    
    return 0;

}