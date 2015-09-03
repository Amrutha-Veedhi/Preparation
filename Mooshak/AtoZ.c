#include<stdio.h>
int main(void)
{
	char String[200];
	static int Array[26];
	int var,i,Len;
	scanf("%s%n",String,&Len);
	for(i=0;i<Len;i++){
		var=String[i];
		if(var>90 && var<97){
		}
		else if(var>=97){
			var=var-32;
			var=var-65;
			Array[var]=1;
			
		}
		else if(var>=65 && var<=90)
		{
			var=var-65;
			Array[var]=1;
		}

	}
	for(i=0;i<=25;i++){
		if(Array[i]!=1)
			{
				printf("NO\n");
				return 0;
			}
	}
	printf("YES\n");
	return 0;
}