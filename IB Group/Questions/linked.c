#include<stdio.h>
main()
{
	int num;
	printf("Enter Number ");
	scanf("%d",&num);
	int i,j,k,l=1;
	int arr[num][num];
	j=(num-1);
	for(i=0;j>=(num/2);i++)
		{	
			for(k=i;k<=j;k++) arr[i][k]=l++;
			for(k=i+1;k<=j;k++) arr[k][j]=l++;
			for(k=(j-1);k>=i;k--) arr[j][k]=l++;
			for(k=(j-1);k>i;k--) arr[k][i]=l++;
			j--;
		}
	if(num%2==1)arr[num/2][num/2]=num*num;
	for(i=0;i<(num*num);i++)
		{	if(i%num==0) printf("\n");
			printf("%d\t",arr[i/num][i%num]);
		}printf("\n");
}
