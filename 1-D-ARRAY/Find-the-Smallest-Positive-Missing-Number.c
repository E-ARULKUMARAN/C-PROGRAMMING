#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos=0,sum=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            sum+=arr[i];
            pos++;
        }
    }
    pos+=1;
    printf("%d",((pos*(pos+1))/2)-sum);
    return 0;
}
// Description

// Find the smallest positive integer missing from the array.

// Sample Input
// 5
// 3 4 -1 1 2
// Sample Output
// 5
// Explanation

// Numbers 1,2,3,4 exist, so 5 is missing.