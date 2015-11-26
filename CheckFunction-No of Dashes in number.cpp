#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main()
{
  int a=0,d=0;
  string s;
  cin>>s;
  a = s.length();
  for(int i = 0; i < a; i++){
    if (s[i]=='0')
    d+=6;
    else if (s[i]=='1')
    d+=2;
    else if (s[i]=='2')
    d+=5;
    else if (s[i]=='3')
    d+=5;
    else if (s[i]=='4')
    d+=4;
    else if (s[i]=='5')
    d+=5;
    else if (s[i]=='6')
    d+=6;
    else if (s[i]=='7')
    d+=3;
    else if (s[i]=='8')
    d+=7;
    else if (s[i]=='9')
    d+=5;
    else
    d=0;

  }
   printf("%d",d);
}
