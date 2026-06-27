#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
    int val_a=*(const int*)a;
    int val_b=*(const int*)b;
    return (val_a>val_b)-(val_a<val_b);
}
int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int count=1,max_val=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]+1==arr[i+1])
        count++;
        else
        count=1;
        max_val=max_val>count?max_val:count;
    }
    printf("%d",max_val);
    return 0;
}
// Description
// Find the length of the longest consecutive sequence.

// Sample Input
// 6
// 100 4 200 1 3 2
// Sample Output
// 4
// Explanation
// Sequence 1, 2, 3, 4 has length 4.