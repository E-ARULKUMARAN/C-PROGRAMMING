#include "library.h"
int main(){
    int n;
    scanf("%d",&n);
    int *arr=input_array(n);
    int count=0,res=1,i=0,sum=arr[0],safe;
    while(count<n){
        int index=find_array_max(arr,i+1,i+arr[i]);
        sum+=arr[index];
        if(sum>=n-1){
            res++;
            printf("%d",res);
            break;
        }
        else if(safe==index){
            break;
        }
        else{
            res++;
            i=index;
            safe=index;
        }
        count++;
    }
    return 0;
}
// Description

// Each element represents the maximum jump length from that position.

// Sample Input
// 11
// 1 3 5 8 9 2 6 7 6 8 9
// Sample Output
// 3
// Explanation

// Minimum jumps required to reach the last index are 3.