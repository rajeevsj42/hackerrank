#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100
char stack[MAX],top=-1;
void push(char ch){
    stack[++top] = ch;
}
char pop(){
    if(top == -1) return '\0';
    return stack[top--];
}
bool isvalid(char* s){
    int n = strlen(s);
    for(int i=0;i<n;i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') push(s[i]);
        else if(top > -1 && (s[i] == '}' || s[i] == ']' || s[i] == ')')){
            if(s[i] == '}' && stack[top] == '{') pop();
            else if(s[i] == ')' && stack[top] == '(') pop();
            else if(s[i] == ']' && stack[top] == '[') pop();
            else return false;
        }
        else return false;
    }
   
    return top == -1;
}
int main(){
    char s[100];
    scanf("%s",s);
    if(isvalid(s)) printf("True");
    else printf("False");
    return 0;
}