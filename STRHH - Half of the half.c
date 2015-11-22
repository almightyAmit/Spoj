#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int test_case,a,i;
     char array[202];
    scanf("%d",&test_case);
    while(test_case){
        scanf("%s",&array);
        a=strlen(array);
        if(a==1){
            a=1;
        }
        else{
        a = a/2;}
        for(i=0;i<a;i++){
            if(i%2==0)
            printf("%c",array[i]);
        }
        printf("\n");
        test_case--;

    }
    return 0;
}
