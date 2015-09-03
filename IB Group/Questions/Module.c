#include<stdio.h>
#include<string.h>
main()
{
	char str1[100],str2[100];
	int i,j;
	gets(str1);
	gets(str2);
	for(i=0,j=0;i<strlen(str1),j<strlen(str2);i++,j++)
		{
			if(str1[i]==str2[j]) 
			{
				if(i==(strlen(str1)-1) || (j==strlen(str2)-1)) break;
			}
			else
			{
				if(str1[i]<str2[j]) {printf("%s\n%s\n",str1,str2);break;}
				else {printf("%s\n%s\n",str2,str1);break;}
				
			}
			
		}
	if(i==strlen(str1) && j!=strlen(str2)) {printf("%s\n%s\n",str1,str2);}
	if(i!=strlen(str1) && j==strlen(str2)) {printf("%s\n%s\n",str2,str1);}
	//if(i!=strlen(str1) && j!=strlen(str2)) {printf("%s\n%s\n",str1,str2);}
}
