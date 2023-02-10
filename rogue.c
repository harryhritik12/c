#include<stdio.h>
#include<stdlib.h>

struct Arraystack{
int top;
int capacity;
int *array;
};
struct Arraystack* createstack(int cap)
{
    struct Arraystack *stack;
    stack=(struct Arraystack*)malloc(sizeof(struct Arraystack));
    stack->top=-1;
    stack->capacity=cap;
    stack->array=(int*)malloc(stack->capacity*sizeof(int));
    return(stack);
};
int isfull(struct Arraystack *stack){
if(stack->top==stack->capacity-1)
    return(1);
else
    return(0);
}

int isempty(struct Arraystack *stack){
if(stack->top==-1)
    return(1);
else
    return(0);
}
void push(struct Arraystack *stack,int item)
{
    if(!isfull(stack))
    {
        stack->top++;
        stack->array[stack->top]=item;
    }
}
int pop(struct Arraystack *stack)
{
    int item;
    if(!isempty(stack))
    {
        item=stack->array[stack->top];
        stack->top--;
         return(item);
    }
    return(-1);
}
void copy(struct Arraystack *source,struct Arraystack *destination){
while(!isempty(source)){
      push(destination,pop(source));
}

}
 int main()
 {
     int n,item;
     struct Arraystack *stack,*stack1;
     printf("Write the capacity of stack");
     scanf("%d",&n);
     stack=createstack(n);
     for(int i=0;i<=n;i++)
     {
         printf("Fill the stack");
         scanf("%d",&item);
         push(stack,item);
     }
     stack1=createstack(n);
     copy(stack,stack1);
     printf("%d",pop(stack1));
printf("%d",pop(stack1));
 printf("%d",pop(stack1));
 }