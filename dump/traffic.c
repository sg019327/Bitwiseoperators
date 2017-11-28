#include<stdio.h>
#include<stdint.h>
#include<string.h>
void print_lights(int *lights)
{
int i=3;
printf("\n Displaying the SIGNAL LIGHTS \n ");
for(i;i>=0;i--)
{
printf("%d",(*lights>>i)&1);
}
}
void turn_ON(int choice,int *lights)
{
memset(lights,0,sizeof(lights));
*lights|=(1<<choice);
}
void main()
{
char choice;
uint8_t lights=0;
int i=0;
while(1)
{
Get_User_Choice:
printf("\n The light to be switched on ? N S E W ");
choice=getchar();
if((choice!=' ')&&(choice!='N')&&(choice!='n')&&(choice!='S')&&(choice!='s')&&(choice!='E')&&(choice!='e')&&(choice!='W')&&(choice!='w'))
	goto Get_User_Choice;
switch(choice)
{
case 'N':
choice=3;
break;
case 'n':
choice=3;
break;
case 'S':
choice=2;
break;
case 's':
choice=2;
break;
case 'E':
choice=1;
break;
case 'e':
choice=1;
break;
case 'W':
choice=0;
break;
case 'w':
choice=0;
break;
}
turn_ON(choice,&lights);
print_lights(&lights);
}
}
