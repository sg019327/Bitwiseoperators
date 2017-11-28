#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *left;
int data;
struct node *right;
};
struct node *root;
struct node *get_node(int data)
{
struct node *newnode=(struct node *)malloc(sizeof(struct node));
newnode->data=data;
newnode->left=NULL;
newnode->right=NULL;
return newnode;
}
int main()
{
int data,n_e;
struct node *curr;
struct node *new_node;
root=NULL;
curr=NULL;
new_node=NULL;
printf(" Enter no.of elements ");
scanf("%d",&n_e);
while(n_e--)
{
printf( " enter the data \n" );
scanf("%d",&data);
new_node=get_node(data);
//printf( " The inserted data is : %d \n",curr->data);
if(root==NULL)
{
root=new_node;
continue;
}
curr=root;
while((new_node->data)<(curr->data))
{
if(curr->left==NULL)
{
curr->left=new_node;
break;
}
curr=curr->left;
}
while((new_node->data)>(curr->data))
{
if(curr->right==NULL)
{
curr->right=new_node;
break;
}
curr=curr->right;
}
}
return 0;
}
