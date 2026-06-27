#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if((i==n-j-1) || i==j || i==0 || i==n-1 || j==0 || j==n-1){
                if(j==n-1)
                    printf("*");
                else         
                printf("* ");
                
            }
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}
// 7
// * * * * * * *
// * *       * *
// *   *   *   *
// *     *     *
// *   *   *   *
// * *       * *
// * * * * * * *