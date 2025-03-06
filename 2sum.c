#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Insert(int arr[],int* size, int n){
    if(n == *size) return;
   
    scanf("%d",&arr[*size]);
    (*size)++;
}
void Find(int arr[],int size,int tar){
    //if(size == 0) return;
    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            if(arr[i]+arr[j] == tar){
                printf("%d %d",j,i);
                return;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d",&n);
   
    int size = 0;
    int arr[n];
   
    for(int i=0;i<n;i++) Insert(arr,&size,n);
    int tar;
    scanf("%d",&tar);
   
    Find(arr,size,tar);
    return 0;
}

