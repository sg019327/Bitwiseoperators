#include<stdio.h>
int main()
{
int temp,*ptr,tot_balls,i,tot_tests;
scanf("%d",&tot_tests);
while(tot_tests)
{
temp=0;
scanf("%d",&tot_balls);
ptr=(int *)malloc(tot_balls *(sizeof(int)));
for(i=0;i<tot_balls;i++)
scanf("%d",(ptr+i));
//printf(" NOW doing OR Operation. \n "); 
for(i=0;i<tot_balls-1;i++)
temp=(*(ptr+i)|*(ptr+(i+1)));
//printf("%d\n",temp);
for(i=0;i<=31;i++)
{
if(1&(temp>>i))
{
printf("%d \n",i);
break;
}
}
tot_tests--;
}
return 0;
}
