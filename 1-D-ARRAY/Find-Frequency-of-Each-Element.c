#include <stdio.h>
#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max=MAX(arr,n);
    int freq[max+1];
    for(int i=0;i<n;i++){
        freq[i]=0;
    }
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(int i=0;i<max+1;i++){
        if(freq[i]>0)
        printf("%d --> %d\n",i,freq[i]);
    }
    return 0;
}
// Description
// Print the frequency of each distinct element.

// Input Format
// N
// N space-separated integers
// Sample Input
// 7
// 1 2 2 3 1 4 2
// Sample Output
// 1 -> 2
// 2 -> 3
// 3 -> 1
// 4 -> 1
// Explanation
// Count the occurrences of each element.