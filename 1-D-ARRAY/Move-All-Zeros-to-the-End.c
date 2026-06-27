#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int r=1,l=0;
    while(r!=n-1){
        if(arr[r]!=0){
            int temp=arr[r];
            arr[r]=arr[l];
            arr[l]=temp;
            l++;
        }
        r++;
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Description
// Move all zero elements to the end while maintaining the order of non-zero elements.

// Input Format
// N
// N space-separated integers
// Output Format
// Print the modified array.

// Sample Input
// 7
// 0 1 0 3 12 0 5
// Sample Output
// 1 3 12 5 0 0 0
// Explanation
// All non-zero elements retain their order, and zeros are moved to the end.
