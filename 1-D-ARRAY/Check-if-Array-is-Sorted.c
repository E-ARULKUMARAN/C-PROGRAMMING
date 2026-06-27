#include <stdio.h>
#include <limits.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            flag=1;
        }
    }
    if(flag){
        printf("NO");
    }
    else
    printf("YES");
    return 0;
}
// Description
// Determine whether the array is sorted in ascending order.

// Input Format
// N
// N space-separated integers
// Output Format
// Print YES if sorted, otherwise NO.

// Sample Input
// 5
// 2 4 6 8 10
// Sample Output
// YES
// Explanation
// Every element is greater than or equal to the previous element.