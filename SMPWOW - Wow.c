#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n,i;
  char s[50];
  s[0] = '\0';
  scanf("%d",&n);
  for(i=0;i<n;i++){
   strcat(s,"o");
  }
  printf("W%sw",s);


}
