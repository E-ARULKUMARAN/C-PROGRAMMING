#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int l=0,r=1,temp;
    while(l<n){
        if(l%2==0 && arr[l]>0 || l%2==1 && arr[l]<0){
            l++;
            r++;
        }
        else if(l%2==0 && arr[l]<0 && arr[r]>0){
            temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            r++;
            l++;
        }
        else if(l%2==1 && arr[l]>0 && arr[r]<0){
            temp=arr[l];
            arr[l]=arr[r];
            arr[r]=temp;
            r++;
            l++;
        }
        else{
            r++;
        }
        if(r>=n){
            r=l+1;
        }
    }
    print_result(arr,n);
    return 0;
}
// Description
// Arrange positive and negative numbers alternately.

// Sample Input
// 6
// 1 -2 3 -4 5 -6
// Sample Output
// 1 -2 3 -4 5 -6
// Explanation
// The array is already in alternating order.