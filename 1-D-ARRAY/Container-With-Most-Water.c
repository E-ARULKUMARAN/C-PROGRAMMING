#include "library.h"

int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int l=0,r=n-1;
    int area,max=0;
    while(l<r){
        area=min(arr[l],arr[r])*(r-l);
        if(arr[l]<arr[r]){
            l++;
        }
        else
        r--;
        if(max<area){
            max=area;
        }
    }
    printf("%d",max);
    return 0;
}
// Description
// Find two lines that can contain the maximum water.

// Sample Input
// 9
// 1 8 6 2 5 4 8 3 7
// Sample Output
// 49
// Explanation
// Lines at indices 1 and 8 hold:
// min(8,7) × (8-1) = 49