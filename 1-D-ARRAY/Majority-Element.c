#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size;
    int* freq=frequency(arr,n,&size);
    for(int i=0;i<size;i++){
        if(freq[i]>n/2)
        printf("%d --> %d ",i,freq[i]);
    }
    free(freq);
    return 0;
}
// Description
// Find the element appearing more than N/2 times.

// Sample Input
// 7
// 2 2 1 2 3 2 2
// Sample Output
// 2
// Explanation
// 2 appears 5 times, which is more than 7/2.