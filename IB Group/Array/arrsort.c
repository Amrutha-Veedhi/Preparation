#include<stdio.h>
main()
{
	int num,indexl=0,indexh=0,i,j,temp;
	printf("Enter Number of Elements ");
	scanf("%d",&num);
	int arr[num];
	printf("Enter Elements to Array \n");
	for(i=0;i<num;i++)
		scanf("%d",&arr[i]);
	i=0;j=num-1;
	while(i<=(num/2))
	{
		if(arr[i]<=arr[i+1])	i++;
		else {indexl=i+1;break;}
	}
	i=num-1;
	while(i>=(num/2))
	{
		if(arr[i]>=arr[i-1])	i--;
		else {indexh=i+1;break;}
	}
	temp=1000;
	for(i=indexl;i<=indexh;i++)
		if(temp>arr[i]) temp=arr[i];
	for(i=0;i<num;i++) 
		if(temp<arr[i]) {indexl=i;break;}
	printf("%d and %d\n",indexl,indexh);
}
