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
    int max1=arr[0],max2=arr[0];
    for(int i=1;i<n;i++){
        if(max1<arr[i]){
            max1=arr[i];
        }
        else if(max1>arr[i] && max2<arr[i]){
            max2=arr[i];
        }
    }
    printf("%d",max2);
    return 0;
}
// Description
// Given an array of integers, find the second largest distinct element in the array.

// Input Format
// First line contains an integer N.

// Second line contains N space-separated integers.

// Output Format
// Print the second largest distinct element.

// Sample Input
// 6
// 12 35 1 10 34 35
// Sample Output
// 34
// Explanation
// The largest element is 35 and the second largest distinct element is 34.
