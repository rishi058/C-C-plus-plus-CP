#include <bits/stdc++.h>
using namespace std;

// Stacks --->   LIFO-- Last in first out.  ||  vertical one end open pipe.
//Queue  ---->  FIFO-- First In First Out.  ||  Horizontal one end open pipe.

int main()
{
   stack<int> s;
   s.push(2);
   s.push(3);       //first output is last element inserted
   s.push(4);
   s.push(5);
   while(!s.empty()){
       cout<<s.top()<<endl;
       s.pop();
   }

    queue<string> str;
   str.push("abcd1");
   str.push("abcd2");
   str.push("abcd3");      //first output is first element inserted
   str.push("abcd4");
   while(!str.empty()){
       cout<<str.front()<<endl;
       str.pop();
   }

}