#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0){
            sum+=i;
            printf("i=%d sum=%d \n",i,sum);
        }
    }
    if(n==sum)
    printf("perfect number");
    else if(sum>n)
    printf("abundant number");
    else
    printf("deficient number");
    return 0;
}