#include "library.h"
#include <stdbool.h>
bool findtarget(int **arr,int n,int m,int target){
    for(int row=0;row<n;row++){
        for(int col=0;col<n;col++){
            if(target==arr[row][col])
            return true;
        }
    }
    return false;
}
int main(){
    int n;
    scanf("%d",&n);
    int **arr=input_2darray(n,n);
    int target;
    scanf("%d",&target);
    if(findtarget(arr,n,n,target))
    printf("ELEMENT %d IS FOUND",target);
    else
    printf("ELEMENT %d IS NOT FOUND",target);
}
