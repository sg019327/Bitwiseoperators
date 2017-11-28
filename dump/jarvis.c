#include<stdio.h>
#include<stdlib.h>
int main()
{
int t_c,n_e,*ele,i,j;
scanf("%d",&t_c);
while(t_c--)
{
scanf("%d",&n_e);
ele=(int *)malloc(n_e*sizeof(int));
for(i=0;i<n_e;i++)
scanf("%d",ele+i);
for(i=0;i<n_e;i++)
{
if(*(ele+i)==-1)
break;
for(j=0;j<n_e;j++)
{
if(i==j)
break;
if((*(ele+i))==(*(ele+j)))
{
*(ele+i)=-1;
*(ele+j)=-1;
}
}
for(i=0;i<n_e;i++)
printf("%d",*(ele+i));
}
}
}
