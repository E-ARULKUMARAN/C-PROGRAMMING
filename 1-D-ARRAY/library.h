#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int MAX(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}
void print_result(int arr[],int n){
    printf("RESULT : ");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int* frequency(int arr[],int n,int *size){
    int max=MAX(arr,n);
    *size=max+1;
    int *freq=calloc(*size,sizeof(int));
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    return freq;
}
int compare(const void *a,const void *b){
    int val_a=*(const int*)a;
    int val_b=*(const int*)b;

    return (val_a > val_b)-(val_a < val_b);
}
int min(int a,int b){
    return a<b?a:b;
}
int max(int a,int b){
    return a>b?a:b;
}
int* input_array(int n){
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    return arr;
}
int* merge(int arr1[],int arr2[],int n,int m,int *size){
    int *res=malloc((m+n)*sizeof(int));
    int l1=0,l2=0,k=0;
    while(l1<n && l2<m){
        if(arr1[l1]==arr2[l2]){
        res[k++]=arr1[l1++];
        l2++;
        }
        else if(arr1[l1]<arr2[l2]){
            res[k++]=arr1[l1++];
        }
        else{
            res[k++]=arr2[l2++];
        }
    }
    while(l1<n)
    res[k++]=arr1[l1++];
    while(l2<m)
    res[k++]=arr2[l2++];
    *size=k;
    return res;
}
int** input_2darray(int n,int m){
    int **arr=(int **)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++){
        *(arr+i)=(int *)malloc(m*sizeof(int));
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    return arr;
}
int sum(int *arr,int start,int end){
    int sum=0;
    for(int i=start;i<=end;i++){
        sum+=arr[i];
    }
    return sum;
}
int find_array_max(int *arr,int start,int end){
    int max=INT_MIN,res;
    for(int i=start;i<=end;i++){
        if(max<arr[i]){
        max=arr[i];
        res=i;
        }
    }
    return res;
}
