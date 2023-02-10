#include<stdio.h>
# include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node*create(struct node*p,int val){
struct node*t=malloc(sizeof(struct node));
t->data=val;
t->next=p;
p-t;
return p;

}
void insert(struct node*p,int n)
{
    struct node*t=malloc(sizeof(struct node));
    if(p==NULL){
        return ;
    }
    t->data=n;
    t->next=p->next;
    p->next=n;
}

int main(){

    return 0;
}
