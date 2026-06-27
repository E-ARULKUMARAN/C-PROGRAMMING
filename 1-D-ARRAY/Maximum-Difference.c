#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int l=0,r=n-1,max_val=0;
    while(r>0){
        if(arr[r]>arr[l]){
        max_val=max(max_val,arr[r]-arr[l]);
        l++;
        }
        else
        l++;
        if(l==r){
            r--;
            l=0;
        }
    }
    printf("%d",max_val);
    return 0;

}
// Description
// Find the maximum difference between two elements where the larger element comes after the smaller one.
// Sample Input
// 7
// 2 3 10 6 4 8 1
// Sample Output
// 8
// Explanation
// Maximum difference is 10 - 2 = 8.