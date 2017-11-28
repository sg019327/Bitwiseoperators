#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list
{
int data;
struct list *next;
};
struct list *head;
int main()
{
head=NULL;
int tc,tot,i,IS_EVEN,temp;
char assum[10];
struct list *curr_ptr=NULL,*ptr=NULL;
scanf("%d",&tc);
while(tc--)
{
scanf("%s",assum);
if(!strcmp(assum,"Even"))
	IS_EVEN=1;
else
	IS_EVEN=0;
printf("Enter the tot elemenst and then read data " );
scanf("%d",&tot);
for(i=0;i<tot;i++)
{
ptr=(struct list *)malloc(sizeof(struct list));
printf(" Enter data \n " );
scanf("%d",&(ptr->data));
ptr->next=head;
head=ptr;
}
printf("printing data \n");
curr_ptr=head;
while(curr_ptr!=NULL)
{
printf("%d\n",curr_ptr->data);
curr_ptr=curr_ptr->next;
}
}
}

