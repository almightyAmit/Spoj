#include<iostream>
#include<stdio.h>

using namespace std;
#define MAX 500
//method for multiplication
int multiply(int n, int result[], int result_size)
{
    int carry = 0;

    for(int i=0; i<result_size; i++)
    {
        int product = result[i]*n + carry;
        result[i] = product%10;
        carry = product/10;
    }
    while(carry>0)
    {
        result[result_size] = carry%10;
        carry = carry/10;
        result_size++;
    }
    return result_size;
}

void fact(int q)   //factorial method
{

    int result[MAX];  //array for storing the result but in reverse order

    // Initialize result
    result[0] = 1;
    int result_size = 1;  //size of the storing array that has result;

    //factorial from 2*3*4*5.....*n
    for(int i=2; i<=q; i++)
     {
         result_size = multiply(i,result,result_size);  //method for multiplication in elementary style

     }

     for(int j=result_size-1; j>=0; j--)
        printf("%d",result[j]);
        printf("\n");
}



int main()
{
    int t,x=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        fact(x);
    }
    return 0;
}
