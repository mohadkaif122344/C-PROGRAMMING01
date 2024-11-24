#include<stdio.h>

int main()
{
    int i,n,rev=0;

    printf("enter number :");
    scanf("%d",&n);

    i = n;

    while(i>0)
    {
        rev = (rev*10)+i%10;
        i = i / 10;

    }
    if(rev == n)
    {
    printf("number is palindrome");
    }
    
    else
    {
    printf("not palindrome");
    }
    return 0;
}