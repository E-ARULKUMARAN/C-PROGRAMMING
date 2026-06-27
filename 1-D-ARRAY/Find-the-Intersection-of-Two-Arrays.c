#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }
    int m;
    scanf("%d",&m);
    int arr2[m];
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }
    int l1=0,l2=0;
    while(l1<n && l2<m){
        if(arr1[l1]==arr2[l2]){
        printf("%d ",arr1[l1++]);
        l2++;
        }
        else if(arr1[l1]<arr2[l2]){
            l1++;
        }
        else{
            l2++;
        }
    }
    return 0;
}
// Description

// Find common elements present in both arrays.

// Sample Input
// 5
// 1 2 3 4 5
// 5
// 3 4 5 6 7
// Sample Output
// 3 4 5
// Explanation

// 3, 4, and 5 are present in both arrays.