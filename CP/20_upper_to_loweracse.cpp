#include <iostream>
#include <string>
using namespace std;
int main()
{
     string sentence;
     getline(cin, sentence);
     for (int i = 0; i < sentence.length(); i++)
     {
          if (sentence[i] == ' ')
          {
               cout << endl;
          }
          else
          {
               int t;
               t = sentence[i];
               if ((t >= 97) && (t <= 122))
               {
                    t = t - 32;
               }
               char c = t;
               cout << c;
          }
     }

     return 0;
}