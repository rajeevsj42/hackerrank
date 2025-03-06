#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void Insert(int arr[],int n,int* size){
    if(n == *size) return;
   
    scanf("%d",&arr[*size]);
    (*size)++;
}

void search(int* arr,int* size,int tar){
    for(int i=0;i<*size;i++){
        if(arr[i] == tar){
            printf("Found\n");
            return;
        }
    }
   
    printf("Not Found\n");
}
int main() {
    int n;
    scanf("%d",&n);
   
    int arr[n];
    int size = 0;
    for(int i=0;i<n;i++) Insert(arr,n,&size);
    int tar;
    scanf("%d",&tar);
   
    search(arr,&size,tar);
    return 0;
}

