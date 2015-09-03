#include<stdio.h>
#include<string.h>
main()
{
	char str[100],ch;
	int index,j,i,arr[123],temp=0;
	scanf("%s",str);
	int l=0;
	for(i=65;i<123;i++) arr[i]=0;
	for(i=0;i<strlen(str);i++)
		{
			arr["%d",str[i]]++;
		}     
	for(i=65;i<123;i++)
		temp=temp+arr[i];
		
	while((l)!=temp)
		{
			for(i=65;i<123;i++)
				if(arr[i]!=0)
					{
						
						index=i;
						arr[i]--;
						break;
					}
			ch=("%c",index);
			
			for(i=0;str[i]!=0;i++)
				if(ch==str[i])
					{index=i;break;}
			for(i=index;i<strlen(str);i++)
				{
				for(j=index;j<=i;j++)
					printf("%c",str[j]);
				printf("\n");
				}

			l++;
			
		}
}
