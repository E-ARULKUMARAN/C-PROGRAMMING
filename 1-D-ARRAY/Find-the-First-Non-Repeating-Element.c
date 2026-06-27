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
    for(int i=0;i<n;i++){
        if(freq[arr[i]]==1){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
// Description

// Find the first element that occurs exactly once.

// Sample Input
// 6
// 9 4 9 6 7 4
// Sample Output
// 6
// Explanation

// 6 is the first element with frequency 1.