# include<stdio.h>
# include<stdlib.h>
# define n 100
struct queue{
    int f;
    int r;
    int *arr;
} ;
int empty(struct queue*q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
int  isfull(struct queue*q){
    if(q->r==n-1){
return 1;
    }
    return 0;
}
void enque(struct queue*q,int val){
int a=-1;if(empty(q)){
    printf("empty");
}
q->r++;
q->arr[q->r]=val;
}
int deque(struct queue*p){
int a=-1;
if(empty){
    printf("empty");
}
p->f++;
a=p->arr[p->f];
return a;
}
int main(){
struct queue q;
q.f=q.r=-1;
q.arr=malloc(n*sizeof(int));
 enqueue(&q, 12);
    enque(&q, 15);
    enque(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enque(&q, 45);
    enque(&q, 45);
    enque(&q, 45);
 
    if(empty(&q)){
        printf("Queue is empty\n");
    }
    if(isfull(&q)){
        printf("Queue is full\n");
    }
}