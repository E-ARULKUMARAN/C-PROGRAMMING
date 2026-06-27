#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int current_prod=arr[0],max_prod=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>current_prod*arr[i])
        current_prod=arr[i];
        else
        current_prod=arr[i]*current_prod;
        if(max_prod<current_prod)
        max_prod=current_prod;
    }
    printf("%d",max_prod);
    return 0;
}
// Description
// Find the contiguous subarray having the maximum product.

// Sample Input
// 4
// 2 3 -2 4
// Sample Output
// 6
// Explanation
// Subarray [2,3] gives the maximum product 6.