#include<stdlib.h>
#include<stdio.h>
int main()
{
struct packet_s
{
int a;
};
struct packet_s *packet_t=(struct packet_s *)calloc(1,sizeof(struct packet_s));
packet_t->a=10;
printf( " \n the packet is %d ",packet_t->a);
free(packet_t);
packet_t->a=20;
}
