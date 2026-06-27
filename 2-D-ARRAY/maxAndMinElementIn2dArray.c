#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int **arr=input_2darray(n,n);
    int max=arr[0][0],min=arr[0][0];
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(max<arr[row][col])
            max=arr[row][col];
            if(min>arr[row][col])
            min=arr[row][col];
        }
    }
    printf("min = %d max = %d",min,max);
}
