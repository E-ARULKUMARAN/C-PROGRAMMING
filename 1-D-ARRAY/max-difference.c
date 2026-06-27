#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int minele=arr[0];
    int maxdiff=0;
    for(int i=1;i<n;i++){
        if(arr[i]>minele){
            maxdiff=max(maxdiff,arr[i]-minele);
        }
        minele=min(minele,arr[i]);
    }
    printf("%d",maxdiff);
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