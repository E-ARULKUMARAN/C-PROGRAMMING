#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int **arr=input_2darray(n,n);
    for(int row=0;row<n;row++){
        int max=arr[row][0],min=arr[row][0];
        for(int col=0;col<n;col++){
            if(max<arr[row][col])
            max=arr[row][col];
            if(min>arr[row][col])
            min=arr[row][col];
        }
        printf("min %d = %d max %d = %d\n",row +1,min,row+1,max);
    }
}
