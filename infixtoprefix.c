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
int pres(char c){
        if(c=='*'||c=='/'){
            return 3;

        }
        else if(c=='+'||c=='-'){
            return 2;

        }
        else if(c=='('||c==')')
        return 1;
        else
         return 0;
    }
int   isO(char c){
            if(c=='+'||c=='-'||c=='*'||c=='/'){
                return 1;
            } 
            else return 0;
        }
void rev(char *ch,int l){
    char temp=0;
    
    for(int i=0;i<l/2;i++){
         temp=ch[i];
         ch[i]=ch[n-1-i];
         ch[n-1-i]=temp;
    }
ch[l]='\0';
}
char fun(struct stack*s){
    if(s->top==-1){
        printf("empty");
    }
    else {
        int p=s->arr[s->top];
s->top--;
return p;

    }
}

int main (){
char ch[100];
gets(ch);
rev(ch,strlen(ch));

for(int i=0;ch[i]!='\0';i++){
    if(ch[i]=='('){
ch[i]=')';}
else if(ch[i]==')'){
ch[i]='(';
}
    }

struct stack *s=malloc(sizeof(struct stack));

s->top=-1;

s->arr=malloc(n*sizeof(char));
struct stack *p=malloc(sizeof(struct stack));
p->top=-1;

p->arr=malloc(n*sizeof(char));
int i=0;
while(ch[i]!='\0'){
    if(ch[i]=='+'||ch[i]=='-'||ch[i]=='*'||ch[i]=='/'){
        if(isempty(s)||pres(ch[i])>pres(s->arr[s->top])||s->arr[s->top]=='('){
            push(s,ch[i]);
        }
        else if(pres(ch[i])<=pres(s->arr[s->top] )){
while(!(pres(ch[i]))>pres(s->arr[s->top])&&!isempty(s)){
    push(p,pop(s));
}
push(s,ch[i]);
        }
    }else if(ch[i]=='('){
        push(s,ch[i]);
    }

else if(ch[i]==')'){
    while(s->arr[s->top]!='('){
        push(p,pop(s));
    }
    pop(s);
}
else {
        push(p,ch[i]);
        i++;
    }
   
}
while(!isempty(s)){
push(p,pop(s));
}
fun(p);
}


 