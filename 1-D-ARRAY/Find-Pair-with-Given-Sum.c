#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    qsort(arr,n,sizeof(int),compare);
    int l=0,r=n-1,sum;
    while(l<r){
        sum=arr[r]+arr[l];
        if(target==sum)
        break;
        else if(target<sum){
            r--;
        }
        else
        l++;
    }
    if(target==sum)
    printf("YES");
    else
    printf("NO");
}
// Description
// Check whether any pair of elements adds up to a given target.

// Input Format
// N
// N space-separated integers
// Target
// Sample Input
// 5
// 2 7 11 15 3
// 9
// Sample Output
// YES
// Explanation
// 2 + 7 = 9.
