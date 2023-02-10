#include<stdio.h>
#include<string.h>

void create(){
    char p[50];
    printf("\nEnter parenthesis : ");
    gets(p);
    char aa;
    int lens=strlen(p);
    char stack[lens];
    int top=0,flag=0;
    for(int i=0;i<lens;i++){
        if(p[i]=='(' || p[i]=='{' || p[i]=='['){
            stack[top]=p[i];
            top++;
        }
        else if(p[i]==')' || p[i]=='}' || p[i]==']'){
           
          printf("%s",aa);
                       if(aa=='('){
               flag=1;
               break;
            }
          
        }
        

    }
    if(flag==1){
        printf("\nBalanced parenthesis");
    }
    else if(flag==0){
        printf("\nImbalanced parenthesis");
    }
}

void main(){
    create();
}