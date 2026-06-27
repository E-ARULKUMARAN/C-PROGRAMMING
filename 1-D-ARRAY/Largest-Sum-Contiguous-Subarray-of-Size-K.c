#include "library.h"
#include <limits.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int l=0,sum=0,ans=INT_MIN;
    for(int r=0;r<n;r++){
        sum+=arr[r];
        while(r-l+1==k){
            ans=max(ans,sum);
            sum-=arr[l];
            l++;
        }
    }
    printf("%d",ans);
    return 0;
}
// Description

// Find the maximum sum among all subarrays of size K.
// Sample Input
// 6
// 2 1 5 1 3 2
// 3
// Sample Output
// 9
// Explanation

// Subarray [5,1,3] has sum 9.