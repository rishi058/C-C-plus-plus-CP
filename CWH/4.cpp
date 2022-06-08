//********************DATA-----TYPES************************

// Int-> Int is used to store integer data e.g (-1, 2, 5,-9, 3, 100).
// Float-> Float is used to store decimal numbers e.g (0.5, 1.05, 3.5, 10.5)
// Char-> Char is used to store a single character e.g. ('a', 'b',' c', 'd')
// Boolean-> Boolean is used to store "true" or "false."
// Double-> Double is also used to store decimal numbers but has more precision than float, e.g. (10.5895758440339...)
// long long int 

// "/n" is used to print a new line

#include<iostream>

using namespace std;

int main()
{
    int age = 20, height = 6;
    long long int phn = 7255976477;
    float pi =  3.14;
    char sci_grade = 'a';
    double exact_pi = 3.1456902;

cout << "My age is "<<age<<". My current height is "<<height<<". My phone number is "<<phn;
cout << "\nThe value of pie is "<<pi; 
cout << "\nMy science grade is "<<sci_grade; 
cout << "\nThe value of pi upto seven decimal places is "<<exact_pi;

return 0;


}