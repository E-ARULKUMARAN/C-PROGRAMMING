#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int l=0,r=1,count=0;
    while(r<n){
        if(l<r && arr[l]>arr[r]){
            count++;
            l++;
        }
        else l++;
        if(l==r){
            r++;
            l=0;
        }
    }
    printf("%d",count);
    return 0;
}
// Description

// An inversion is a pair (i,j) such that i < j and arr[i] > arr[j].

// Sample Input
// 5
// 2 4 1 3 5
// Sample Output
// 3
// Explanation

// Inversions are (2,1), (4,1), and (4,3).