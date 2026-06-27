#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int size;
    int *freq=frequency(arr,n,&size);
    for(int i=0;i<size;i++){
        if(freq[i]>1){
            printf("%d ",i);
        }
    }
    return 0;
}
// Description

// Print all elements that appear more than once.

// Sample Input
// 8
// 1 2 3 1 2 4 5 2
// Sample Output
// 1 2
// Explanation

// Elements 1 and 2 occur multiple times.