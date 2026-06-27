#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int **arr=input_2darray(n,n);
    for(int col=0;col<n;col++){
        int max=arr[0][col],min=arr[0][col];
        for(int row=0;row<n;row++){
            if(max<arr[row][col])
            max=arr[row][col];
            if(min>arr[row][col])
            min=arr[row][col];
        }
        printf("min %d = %d max %d = %d\n",col +1,min,col+1,max);
    }
    
}
