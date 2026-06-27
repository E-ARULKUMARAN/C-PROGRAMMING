#include "library.h"

void changeZero(int **arr,int **safe,int n,int m,int k,int l){
    for(int i=0;i<n;i++){
        if(safe[k][l]){
        arr[k][i]=0;
        arr[i][l]=0;
        safe[i][l]=1;
        safe[k][i]=1;
        }
    }
}