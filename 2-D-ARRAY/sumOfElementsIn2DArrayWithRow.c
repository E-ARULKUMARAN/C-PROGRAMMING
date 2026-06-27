#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int **arr=input_2darray(n,n);
    int sum=0;
    for(int row=0;row<n;row++){
        sum=0;
        for(int col=0;col<n;col++){
            sum+=arr[row][col];
        }
        printf("SUM OF ROW %d = %d\n",row +1,sum);
    }
}
