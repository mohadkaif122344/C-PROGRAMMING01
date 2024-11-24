#include<stdio.h>

int main()
{
    int i, reverse = 0;

    printf("Enter the value of reverse no :");
    scanf("%d",&i);

    while(i!= 0)
    {
        reverse = (reverse*10)+i%10;
        i = i  / 10;
    }

    printf("reverse number is : %d\n",reverse);
    return 0;
}