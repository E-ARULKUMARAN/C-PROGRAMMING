#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr1=input_array(n);
    int m;
    scanf("%d",&m);
    int *arr2=input_array(m);
    qsort(arr1,n,sizeof(int),compare);
    qsort(arr2,m,sizeof(int),compare);
    int *res=malloc((m+n)*sizeof(int));
    int l1=0,l2=0,k=0;
    while(l1<n && l2<m){
        if(arr1[l1]==arr2[l2]){
        res[k++]=arr1[l1++];
        l2++;
        }
        else if(arr1[l1]<arr2[l2]){
            res[k++]=arr1[l1++];
        }
        else{
            res[k++]=arr2[l2++];
        }
        printf("%d",res[k-1]);
    }
    while(l1<n)
    res[k++]=arr1[l1++];
    while(l2<m)
    res[k++]=arr2[l2++];
    print_result(res,k);
    free(res);
    return 0;
}
// Description

// Given two arrays, find all distinct elements present in either array.

// Input Format
// First line: N
// Second line: N integers
// Third line: M
// Fourth line: M integers
// Sample Input
// 5
// 1 2 3 4 5
// 4
// 1 2 6 7
// Sample Output
// 1 2 3 4 5 6 7
// Explanation

// Union contains all unique elements from both arrays.