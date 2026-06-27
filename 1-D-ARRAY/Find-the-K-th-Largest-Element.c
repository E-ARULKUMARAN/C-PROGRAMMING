#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int k;
    scanf("%d",&k);
    qsort(arr,n,sizeof(int),compare);
    printf("%d",arr[n-k]);
    return 0;
}
// Description

// Find the K-th largest element in the array.

// Sample Input
// 6
// 7 10 4 3 20 15
// 3
// Sample Output
// 10
// Explanation

// Sorted descending: 20,15,10,7,4,3.

// 3rd largest element is 10.
