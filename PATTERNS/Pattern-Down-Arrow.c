#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==round(n/2) || j==(n-i+(n/2 -1)) || i==(n+j-(n/2 +1)))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}
// 7
//       *       
//       *       
//       *       
// *     *     * 
//   *   *   *   
//     * * *     
//       *   