#include<stdio.h>
#include<conio.h>
struct node
{ struct node* left; int data; struct node* right; };

struct node* create(int data)
{
struct node* newNode=(struct node*)malloc(sizeof(struct node));
newNode->data = data;
newNode->left='\0';
newNode->right = '\0';
return newNode;
}

struct node* insert(struct node* t, int data)
{
if(t=='\0') return create(data);
if(data < t->data)
	t->left = insert(t->left, data);
else if(data > t->data)
	t->right = insert(t->right, data);
return t;
}

void inorder(struct node* t)
{
if(t=='\0') return;
inorder(t->left);
printf("%d ",t->data);
inorder(t->right);
}

void preorder(struct node* t)
{
if(t=='\0') return;
printf("%d ",t->data);
preorder(t->left);
preorder(t->right);
}

void postorder(struct node* t)
{
if(t=='\0') return;
postorder(t->left);
postorder(t->right);
printf("%d ",t->data);
}

void main()
{
struct node *root='\0';
clrscr();
root = insert(root,8);
insert(root,3);
insert(root,1);
insert(root,6);
insert(root,7);
insert(root,10);
insert(root,14);
insert(root,4);
printf("Inorder\n");
inorder(root);
printf("\nPreorder\n");
preorder(root);
printf("\nPostorder\n");
postorder(root);
getch();
}