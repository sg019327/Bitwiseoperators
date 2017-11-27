/*Headers file contain Function definitions and standard libraries inclusion*/

#include<stdio.h>
int LedData=0x00;
void LedIndicator(int direction);
void DisplayLed();


main()
{
        char choice; /*Input from the user*/
        while(1)
                {
                        printf("Enter Choice\nN:North\tS:South\tE:East\tW:west\n");
			scanf("%c",&choice);
                        switch(choice)
                                {
                                        case 'N':
                                          printf("North Traffic LED is On and Others OFF\n");
                                          LedIndicator(3);
                                          DisplayLed();
                                         break;

                                         case 'S' :
                                         printf("South Traffic LED is On and Others OFF\n");
                                          LedIndicator(2);
                                          DisplayLed();
                                         break;

                                         case 'E' :
                                         printf("North Traffic LED is On and Others OFF\n");
                                          LedIndicator(1);
                                          DisplayLed();
                                         break;

                                        case 'W' :
                                        printf("North Traffic LED is On and Others OFF\n");
                                          LedIndicator(0);
                                          DisplayLed();
                                         break;
 					default:
						printf("Enter valid option\n");


                                }
                }

}


void DisplayLed()
{
int t,i;
printf("The Led for the Given direction :\n");
for(i=3;i>=0;i--)
{
t=(LedData>>i)&1;
printf("%d",t);

}
printf("\n");

}


void LedIndicator(int direction)
{
  LedData=0x00;
   LedData = LedData | (1<< direction);

}



