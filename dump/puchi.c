#include<stdio.h>
int main()
{
int i,t_c,count;
long int monk,puchi;
scanf("%d",&t_c);
while(t_c--)
{
count=0;
scanf("%ld",&monk);
scanf("%ld",&puchi);
for(i=63;i>=0;i--)
{
if(!((1&(monk>>i))==(1&(puchi>>i))))
count++;
}
printf("%d\n",count);
}
}


