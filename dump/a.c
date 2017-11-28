#include<stdio.h>
#include<malloc.h>
int main()
{
int name=45;
//printf("%d \n",sizeof(11100011010111111100010000010100011100010101100111));
//mallopt(M_CHECK_ACTION,3);
char *ptr=malloc(10);
free(ptr);
free(ptr);
*ptr='a';
printf("%c\n",*ptr);
printf("%d\n",name>>1);
return 0;
}

