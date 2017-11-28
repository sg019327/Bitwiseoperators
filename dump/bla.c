#include<stdio.h>
#include<stdlib.h>
int main()
{
struct a_s
{
int a;
int b;
};
struct a_s *a_t;
a_t=(struct a_s *)malloc(sizeof(struct a_s));
printf("\n Enter ");
scanf("%d",&(a_t->a));
printf(" \n the value : %d",a_t->a);
return 0;
}
