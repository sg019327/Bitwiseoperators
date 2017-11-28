#include<stdio.h>
#include<stdlib.h>
int vlan_db[4096];
struct packet
{
int vlan;
char *src_mac;
char *dst_mac;
char *eth_type;
struct packet *next;
};
struct packet *pkt_head;
int *func()
{
printf(" In thread " );
return 0;
}
int main()
{
pkt_head=NULL;
pthread_t t1;
pthread_create(&t1,NULL,func,NULL);
printf("In main ");
pthread_join(t1,NULL);
create_packet();
print_packet();
return 0 ;
}
void create_packet()
{
struct packet *temp=(struct packet *)malloc(sizeof(struct packet));
temp->vlan=1;
temp->src_mac="001122334455";
temp->dst_mac="aabbccddeeff";
temp->eth_type="0x0800";
temp->next=pkt_head;
pkt_head=temp;
}
void print_packet()
{
struct packet *curr_head;
curr_head=pkt_head;
while(curr_head!=NULL)
{
printf(" vlan is %d \n", curr_head->vlan);
printf(" src_mac is %s \n", &(*curr_head->src_mac));
printf(" dst_mac is %s \n", &(*curr_head->dst_mac));
printf(" eth_type is %s \n", &(*curr_head->eth_type));
curr_head=curr_head->next;
}
}
int vlan_op(int vlan,int flag)
{
int i=4096-vlan; // HASH Fnction
if (flag ==0)
vlan_db[i]=vlan;
return 0;
if flag==1
{
if (vlan_db[i]==vlan)
return 1;
else 
return 0;
}}
