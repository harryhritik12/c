# include<stdio.h>
# include<stdlib.h>
struct binary{
    int data;
    struct binary* left;
    struct binary*right;
};
struct binary*create(int data){
    struct binary*p= malloc(sizeof(struct binary));

p->data= data;
p->left=p->right=NULL;
return p;

    
}
struct binary* insertLeft(struct binary* root, int value) {
  root->left = create(value);
  return root->left;
}

// Insert on the right of the node
struct binary* insertRight(struct binary* root, int value) {
  root->right = create(value);
  return root->right;
}

void inorder(struct binary*root){
  if(root==NULL)
  return ;
    printf("%d",root->data);
   
    inorder(root->right);
    inorder(root->left);
}
void preorder(struct binary *root)
{
  if(root==NULL)
  return ;
  printf("%d",root->data);
  

preorder(root->left);
preorder(root->right);}
void postorder(struct binary*root){
if(root==NULL)
return ;
postorder(root->left);
printf("%d",root->data);
postorder(root->right);
}
int main(){ 

 struct binary* root = create(1);
  insertLeft(root, 2);
  insertRight(root, 3);
  insertLeft(root->left, 4);
  printf("inorder\n");
inorder(root);
printf("\npreorder\n");
preorder(root);
printf("\npostorder\n");
postorder(root);
    return 0;
}
