#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b)
{
    const int *const *val_a = (const int *const *)a;
    const int *const *val_b = (const int *const *)b;

    return (*val_a)[0] - (*val_b)[0];
}
void arrange(int **arr,int index,int *n){
    for(int i=index;i<*n-1;i++){
        arr[i][0]=arr[i+1][0];
        arr[i][1]=arr[i+1][1];
    }
    *n-=1;
}
int main(){
    int n;
    scanf("%d",&n);
    int **arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        arr[i]=(int*)malloc(2*sizeof(int));
        for(int j=0;j<2;j++)
        scanf("%d",&arr[i][j]);
    }
    qsort(arr,n,sizeof(arr[0]),compare);
    int index=0;
    for(int i=0;i<n-1;i++){
        if(arr[index][1]>arr[i+1][0]){
            arr[index][0]=arr[i][0];
            arr[index++][1]=arr[i+1][1];
            arrange(arr,index,&n);
        }
    }

    for(int i=0;i<n;i++){
        printf("%d %d\n",arr[i][0],arr[i][1]);
    }
}
// Description
// Merge all overlapping intervals.

// Sample Input
// 4
// 1 3
// 2 6
// 8 10
// 15 18
// Sample Output
// 1 6
// 8 10
// 15 18
// Explanation
// Intervals [1,3] and [2,6] overlap and are merged.