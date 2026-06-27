#include "library.h"

int main(){
    int n,k;
    scanf("%d",&n);
    int *arr=input_array(n);
    scanf("%d",&k);
    int l=0,max=INT_MIN;
    for(int r=k-1;r<n;r++){
        if((r-l+1)==k){
            max=find_array_max(arr,l,r);
            printf("%d ",arr[max]);
            l++;
        }
    }
    return 0;
}
// Description

// Find the maximum element in every window of size K.

// Sample Input
// 8
// 1 3 -1 -3 5 3 6 7
// 3
// Sample Output
// 3 3 5 5 6 7
// Explanation

// Each value is the maximum of a window of size 3.