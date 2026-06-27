#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<n-1;i++){
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        printf("%d ",arr[i]);
    }
    return 0;
}
// Description

// Find an element greater than its adjacent elements.

// Sample Input
// 6
// 1 3 20 4 1 0
// Sample Output
// 20
// Explanation

// 20 is greater than both 3 and 4.
