#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int max_sum=arr[0],current_sum=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i]+current_sum)
        current_sum=arr[i];
        else
        current_sum=arr[i]+current_sum;
        if(current_sum>max_sum)
        max_sum=current_sum;
    }
    printf("%d",max_sum);
    return 0;
}
// Description
// Find the contiguous subarray with the maximum sum.

// Sample Input
// 9
// -2 1 -3 4 -1 2 1 -5 4
// Sample Output
// 6
// Explanation
// Subarray [4, -1, 2, 1] has maximum sum 6.