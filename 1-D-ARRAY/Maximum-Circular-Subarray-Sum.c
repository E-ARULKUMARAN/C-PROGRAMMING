#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int curr_max=arr[0],max_so_far=arr[0],curr_min=arr[0],min_so_far=arr[0],total=arr[0];
    for(int i=1;i<n;i++){
        total+=arr[i];
        curr_max=max(arr[i],curr_max+arr[i]);
        max_so_far=max(max_so_far,curr_max);
        curr_min=min(arr[i],arr[i]+curr_min);
        min_so_far=min(min_so_far,curr_min);
    }
    if(max_so_far<0){
            printf("%d",max_so_far);
            return 0;
        }
    printf("%d",max(max_so_far,total-min_so_far));    

    return 0;
}
// Description

// Find the maximum subarray sum considering the array as circular.

// Sample Input
// 5
// 8 -8 9 -9 10
// Sample Output
// 19
// Explanation

// Circular subarray [10, 8, -8, 9] gives sum 19.