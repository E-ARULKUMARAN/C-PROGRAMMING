#include <stdio.h>
void print(int arr[],int n){
    printf("ARRAY ELEMENTS : ");
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
void method1(int arr[],int n,int k){
    int result[n];
    int i;
    for(i=0;i<n;i++){
        result[(i+k)%n]=arr[i];
    }
    print(result,n);
}
void method2(int arr[],int n,int k){
	int i,j;
    for(i=0;i<k;i++){
        int last=arr[n-1];
        for(j=n-1;j>0;j--){
            arr[j]=arr[j-1];
        }
        arr[0]=last;
    }
    print(arr,n);
}
void reverse(int arr[],int start,int end){
    while(start<end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void reverseMethod_right(int arr[],int n,int k){
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    print(arr,n);
    
}
void reverseMethod_left(int arr[],int n,int k){
    
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    reverse(arr,0,n-1);
    print(arr,n);
}
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    k=k%n;
    //method1(arr,n,k);
    //method2(arr,n,k);
    //reverseMethod_left(arr,n,k);
    reverseMethod_right(arr,n,k);
    return 0;
}
// Description
// Rotate the array to the right by K positions.

// Input Format
// N
// N space-separated integers
// K
// Sample Input
// 5
// 1 2 3 4 5
// 2
// Sample Output
// 4 5 1 2 3
// Explanation
// After rotating twice to the right, the last two elements move to the front.


