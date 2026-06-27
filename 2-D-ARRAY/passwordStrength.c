#include "library.h"
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int **arr=input_2darray(n,m);
    int max=0,sum=0;
    for(int row=0;row<n;row++){
        sum=0;
        for(int col=0;col<m;col++){
            sum+=arr[row][col];
        }
        if(max<sum)
        max=sum;
    }
    for(int col=0;col<m;col++){
        sum=0;
        for(int row=0;row<n;row++){
            sum+=arr[row][col];
        }
        if(max<sum)
        max=sum;
    }
    printf("%d",max);
}
// Sample Input:
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output:
// 18
