#include<stdio.h>
int main()
{
int i,no_of_tests,actual_int;
scanf("%d",&no_of_tests);
while(no_of_tests)
{
int result=0;
scanf("%d",&actual_int);
for(i=31;i>=0;i--)
{
if((actual_int>>i)&1)
	result++;
}
printf("%d \n",result);
no_of_tests--;
}
return 0;
}
