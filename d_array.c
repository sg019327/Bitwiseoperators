#include<stdio.h>
#include<stdlib.h>
int main()
{
int i,j,rows,cols;
int *arr_ptr;
printf(" Enter no. of rows : \n ");
scanf("%d",&rows);
printf(" Enter no.of columns:\n ");
scanf("%d",&cols);
arr_ptr=(int *)malloc((rows*cols)*sizeof(int));
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
printf("\n The ele is : ");
scanf("%d",(arr_ptr+(i*cols)+j));
}
}
printf( " The elements are \n ");
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
printf("%d",*(arr_ptr+(i*cols)+j));
}
printf("\n");
}
return 0;
}
