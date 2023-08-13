#include<stdio.h>

int sum(int a , int b)
{
    return a+b ;
}

int main()
{
    int a , b ;
    scanf("%d %d",&a ,&b);

    int summation = sum(a , b);
    printf("%d\n", summation);
}
