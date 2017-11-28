#include<stdio.h>
#include<string.h>
int main()
{
char string[100];
int i,length,count,tc;
scanf("%d",&tc);
while(tc--)
{
count=0;
scanf("%d",&length);
//for(i=0;i<length;i++)
scanf("%s",&string);
for(i=0;i<length;i++)
{
temp=string[0];

if(!string[i])
count++;
}
printf("%d\n",count);
}
return 0;
}
