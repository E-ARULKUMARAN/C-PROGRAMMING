#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int **arr=input_2darray(n,n);
    int sum=0;
    for(int col=0;col<n;col++){
        sum=0;
        for(int row=0;row<n;row++){
            sum+=arr[row][col];
        }
        printf("SUM OF COL %d = %d\n",col +1,sum);
    }
}
