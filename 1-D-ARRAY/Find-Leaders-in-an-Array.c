#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=arr[n-1],l=1;
    int result[n];
    result[0]=max;
    for(int i=n-2;i>=0;i--){
        if(max<arr[i]){
        result[l]=arr[i];
        max=arr[i];
        l++;
        }
    }
    printf("RESULT : ");
    for(int i=l-1;i>=0;i--){
        printf("%d ",result[i]);
    }
    return 0;
}
// Description
// An element is a leader if it is greater than all elements to its right.

// Input Format
// N
// N space-separated integers
// Sample Input
// 6
// 16 17 4 3 5 2
// Sample Output
// 17 5 2
// Explanation
// 17 is greater than all elements to its right.

// 5 is greater than 2.

// 2 is always a leader because it is the last element.
