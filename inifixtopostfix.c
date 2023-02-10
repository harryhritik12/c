 # include<stdio.h>
 # include<stdlib.h>
 # include<string.h>

# define n 100
struct stack{
  int top;
char *arr ;

};
int isempty(struct stack *p){
    if(p->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
int stacktop(struct stack*s){
    return s->arr[s->top];
}

int isfull(struct stack*p){
    if(p->top==n-1){
        return 1;

    }
    else{
        return 0;
    }
}
void push(struct stack *p,char val){
    if(isfull(p)){
printf("overflow");
    }
    else {
   p->top++;
 p->arr[p->top]=val;
    }
    }
    int precedence(char c){
        if(c=='*'||c=='/'){
            return 3;

        }
        else if(c=='+'||c=='-'){
            return 2;

        }
        else return 0;
    }
     int   isOperator(char c){
            if(c=='+'||c=='-'||c=='*'||c=='/'){
                return 1;
            } 
            else return 0;
        }

char pop(struct stack*p){
    if(isempty(p)){
        printf("not possible");
        return -1;
    }
    else{
    char val=p->arr[p->top];
    p->top--;
    return val;
    }
}
 char *postfix( char *infix ){
struct stack*s;
s=malloc(sizeof(struct stack));
s->top=-1;
s->arr=malloc(n*sizeof(char));
char *postfix=(char*)malloc((strlen(infix)+1)*(sizeof(char)));
 int i=0;
 int j=0;
 while(infix[i]!='\0'){
     if(!isOperator(infix[i])){
        postfix[j]=infix[i];
        j++;
        i++;
     }
     else{
         if(precedence(infix[i])>precedence(stacktop(s))){
     push(s,infix[i]);
     i++;
         }
     
         
         else {
             postfix[j]=pop(s);
             j++;
         }
     }

  
 }
 while(!isempty(s)){
     postfix[j]=pop(s);
     j++;
 }
 postfix[j]='\0';
 return postfix;
 }
int main (){
char  *infix ="a+b-b*c";
    printf("postfix is %s", postfix(infix));


    
}

 