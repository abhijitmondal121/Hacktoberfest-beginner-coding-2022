#include<stdio.h>
int Fact(int n)
{
    if(n==0 || n==1)
    return n;
    else
    return (n*Fact(n-1));
}
int main()
{
    int num,Factorial;
    printf("Enter a number : ");
    scanf("%d",&num);
    Factorial=Fact(num);
    printf("Factorial of %d is %d",num,Factorial);
}