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
        if(freq[arr[i]]>0){
            printf("%d",arr[i]);
            break;
        }
    }
    return 0;
}
// Description

// Find the first element that appears more than once.

// Sample Input
// 7
// 10 5 3 4 3 5 6
// Sample Output
// 5
// Explanation

// 5 is the first element whose repetition occurs earliest.