#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr1=input_array(n);
    int m;
    scanf("%d",&m);
    int *arr2=input_array(m);
    int size;
    int *res=merge(arr1,arr2,n,m,&size);
    int mid=size/2;
    if(size%2==0){
        double r= (double)(res[mid-1]+res[mid])/2;
        printf("%lf",r);
    }
    else
    printf("%d",res[mid]);
    free(res);
    return 0;
}
// Description

// Find the median of two sorted arrays.

// Sample Input
// 3
// 1 3 5
// 3
// 2 4 6
// Sample Output
// 3.5
// Explanation

// Merged array = [1,2,3,4,5,6].

// Median = (3+4)/2 = 3.5.
