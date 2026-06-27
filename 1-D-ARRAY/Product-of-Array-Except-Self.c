#include <stdio.h>
int main(){
    int n,prod=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        prod*=arr[i];
    }
    printf("RESULT : ");
    for(int i=0;i<n;i++){
        printf("%d ",prod/arr[i]);
    }
    return 0;
}
// Description
// For every index, find the product of all elements except itself.

// Sample Input
// 4
// 1 2 3 4
// Sample Output
// 24 12 8 6
// Explanation
// For index 0: 2×3×4 = 24

// For index 1: 1×3×4 = 12

// and so on.