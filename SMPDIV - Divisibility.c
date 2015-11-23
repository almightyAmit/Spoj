#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,x,y,t,i;
    scanf("%d",&t);
    while(t){
    scanf("%d",&n);
    scanf("%d",&x);
    scanf("%d",&y);
    for(i = 0; i < n; i++)
    {
        if(i%x==0&&i%y!=0)
            printf("%d ",i);
    }
    t--;
    }
}
