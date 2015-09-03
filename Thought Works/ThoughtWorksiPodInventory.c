#include<stdio.h>
#include<string.h>
void main(void)
{
	int NoOfIPods,CostAtBrazil,CostAtArgentina;
	char Location[10];
	scanf("%s %d",Location,&NoOfIPods);
	if(NoOfIPods>200)
			{
				printf("Out Of Stock ....!!!!!\n");
				return ;
			}
	if(strcmp(Location,"Argentina")==0)
			{
				CostAtArgentina = NoOfIPods <= 100 ? NoOfIPods*50 : (5000+(((NoOfIPods-100)*100)+(((NoOfIPods-100)/10)*400))); 
			}
	if(strcmp(Location,"Brazil")==0)
			{
				CostAtArgentina = NoOfIPods <= 100 ? ((NoOfIPods*50)+((NoOfIPods/10)*400)) : (9000+(NoOfIPods-100)*100) ;
			}
	printf("%d : %d : %d \n",CostAtArgentina , NoOfIPods <=100 ? 100 : 100-(NoOfIPods-100) , NoOfIPods <= 100 ? 100-NoOfIPods : 0 );
}