#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    for(int i=1;i<n;i++){
        if(sum(arr,0,i-1)==sum(arr,i+1,n-1)){
            printf("%d",i);
            break;
        }

    }
    return 0;
}
// Description
// Find an index where left sum equals right sum.

// Sample Input
// 5
// 1 3 5 2 2
// Sample Output
// 2
// Explanation
// Left sum = 1 + 3 = 4
// Right sum = 2 + 2 = 4