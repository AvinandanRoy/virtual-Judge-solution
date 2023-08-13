//link --> https://vjudge.net/problem/UVA-713

#include<stdio.h>

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int main()
{
    int testCase , num1 , num2 ,i,renum1 , renum2,sum, resum;

    scanf("%d",&testCase);
        for(i = 1 ; i <= testCase ; i++){
            scanf("%d%d",&num1 ,&num2 );

            renum1 = reverseDigits(num1);
            renum2 = reverseDigits(num2);

            sum = renum1 + renum2;

            resum = reverseDigits(sum);
            printf("%d\n", resum);
        }

}
