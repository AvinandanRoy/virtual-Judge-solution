//link ---> https://vjudge.net/problem/UVA-11727

#include<stdio.h>
int main()
{
    int testCase , salary1, salary2, salary3 , avg ,i;

    while(scanf("%d", &testCase)==1){
        for(i = 1 ; i <= testCase ; i++){
            scanf("%d%d%d",&salary1 ,&salary2 ,&salary3);
            if((salary1 > salary2 && salary1 < salary3) || (salary1 > salary3 && salary1 < salary2) ){
                avg = salary1 ;
            }
            else if ((salary2 > salary1 && salary2 < salary3) || (salary2 > salary3 && salary2 < salary1)){
                avg = salary2 ;
            }
            else
                avg = salary3 ;

            printf("Case %d: %d\n",i , avg);
        }
    }
}
