#include "library.h"
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0,res=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            count++;
        else
        count=0;
        res=max(res,count);
    }
    printf("%d",res);
    return 0;
}
// Description

// Find the maximum number of consecutive 1s in a binary array.

// Sample Input
// 8
// 1 1 0 1 1 1 0 1
// Sample Output
// 3
// Explanation

// The longest sequence of consecutive 1s has length 3.