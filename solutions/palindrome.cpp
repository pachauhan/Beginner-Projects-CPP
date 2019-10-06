#include<iostream>
using namespace std;
int main(){
string ch;
 int n,m;
  cout<<"enter the string:\n";
  cin>>ch;
  n=ch.length()-1; m=0;
  while(m!=n)                               // untile both the ends are not the same
  {  if(ch[n]==ch[m])                       // check if the char from start index is equal to the char for equivallent index from the back,
       { cout<<"pelindrom:\n";
         break; 
       }
       m++;n--;                             // increasing the left index and decreasing the right by one.
  }
return 0;
}