#include<stdio.h>
int main()
{
        int a,b;
        const int c=10000;
        int *ptr; //pointer to an integer
        int **pptr; // pointer to a pointer.
        printf("Enter the value of a\n");
        scanf("%d",&a);
        printf("Enter the value of b\n");
        scanf("%d",&b);
        //*******************************************************************************************************
         // This is to verify that the sizes of pointer variable and pointer to pointer variable is same//

        printf("size of pointer to an int is %d and address is %p\n",sizeof(ptr),&ptr);
        printf("size of pointer to pointer to an int is %d and address is %p\n",sizeof(pptr),&pptr);

        //*******************************************************************************************************
        ptr=&a;  //Assigning the address of a variable to a pointer.
        printf("The adress of a is %p and adress of ptr is %p\n",&a,ptr); //The adress of variable is stored in ptr.
        printf("The value at ptr is %d\n",*ptr);
        *ptr=100; //The value of variable is indirectly modified by a pointer.Had it been a constant variable , The pointer cannot change the value.
        printf("The value at ptr after change is %d\n",*ptr);
        printf("The value at c is %d\n",c);
        ptr=&c;
        printf("the value at *ptr is %d\n",*ptr);
        *ptr=12;
        printf("the value at *ptr is %d\n",*ptr);
return 0;

}