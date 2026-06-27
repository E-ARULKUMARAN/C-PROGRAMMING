#include "library.h"
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int **arr=input_2darray(n,m);
    int count=0,max=0,index;
    for(int row=0;row<n;row++){
        count=0;
        for(int col=0;col<m;col++){
            if(arr[row][col]==1)
            count++;
            else
            count=0;
            if(max<count){
            max=count;
            index=row;
            }
        }        
    }
    printf("\n%d %d",index,max);
}
// Sample Input:
// 4 5
// 1 1 0 1 1
// 0 1 1 1 0
// 1 1 1 1 0
// 0 0 1 1 1
// Sample Output:
// 2 4

