#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int target;
    scanf("%d",&target);
    int l=0,sum=0;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        while(sum>target){
            sum-=arr[l];
            l++;
        }
        if(sum==target){
            printf("%d %d",l,r);
        }
    }
    return 0;
}
// Description

// Find the starting and ending indices of a subarray whose sum equals K.

// Sample Input
// 5
// 1 4 20 3 10
// 33
// Sample Output
// 2 4
// Explanation

// 20 + 3 + 10 = 33.