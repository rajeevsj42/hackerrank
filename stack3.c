#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
        scanf("%d",&n);
        int stack[n];
        for (int i=0;i<n;i++){
                scanf("%d",&stack[i]);
                }
        for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
                if(stack[j]>stack[j+1]){
                int temp=stack[j];stack[j]=stack[j+1];stack[j+1]=temp;
                }
        }
        }
        for (int i=n-1;i>=0;i--)
                printf("%d ",stack[i]);
    return 0;
}