#include <stdio.h>
#include <limits.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=1;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",(n*(n+1)/2)-sum);
    return 0;
}
// Description
// An array contains numbers from 1 to N with one number missing. Find the missing number.

// Input Format
// N
// N-1 space-separated integers
// Sample Input
// 5
// 1 2 3 5
// Sample Output
// 4
// Explanation
// Numbers from 1 to 5 should be present. Number 4 is missing.