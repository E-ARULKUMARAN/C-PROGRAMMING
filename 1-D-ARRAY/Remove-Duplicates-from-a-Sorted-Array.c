#include "library.h"
int main()
{
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    qsort(arr,n,sizeof(int),compare);
    int r=1,l=0;
    for(r;r<n;r++){
        if(arr[l]!=arr[r]){
            l++;
            int temp=arr[r];
            arr[r]=arr[l];
            arr[l]=temp;
        }
    }
    print_result(arr,l+1);
    return 0;
}
// Description
// Remove duplicate elements from a sorted array.

// Input Format
// N
// N space-separated integers
// Sample Input
// 8
// 1 1 2 2 3 4 4 5
// Sample Output
// 1 2 3 4 5
// Explanation
// Duplicate values are removed, leaving only unique elements.
