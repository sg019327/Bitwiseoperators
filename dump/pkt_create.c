#include<stdio.h>
int main()
{
int pkt[124];
char dst_mac[12],src_mac[12],ethertype[4];
int i,k=0,j=0,vlan;
printf(" Enter vlan \n " );
scanf("%d",&vlan);
for(i=11;i>=0;i--)
{
pkt[j]=((vlan>>i)&1);
printf("%d",pkt[j]);
j++;
}
printf(" Enter dst mac address \n");
scanf("%s",dst_mac);
printf("%s",dst_mac);
for(k=0;k<=12;k++)
{
for(i=3;i>=0;i--)
{
pkt[j]=((dst_mac[k]>>i)&1);
j++;
}
}
print_pkt(&j,pkt);
printf(" Enter src mac address \n");
scanf("%s",src_mac);
printf("%s",src_mac);
for(k=0;k<=12;k++)
{
for(i=3;i>=0;i--)
{
pkt[j]=((src_mac[k]>>i)&1);
j++;
}
}
print_pkt(&j,pkt);
return 0;
}
void print_pkt(int *j,int pkt[])
{
int x=*j,i=0;
printf("\n");
while(x--)
{
printf("%d",pkt[i]);
i++;
}
printf("\n");

}

