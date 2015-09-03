#include<stdio.h>
#include<string.h>
main()
{
    char str[100],str1[100],temp[100];
    int i,flag,l;
    scanf("%s %s",str,str1);
    l=0;flag=0;
    for(i=0;i<strlen(str);i++)
        {   str[i]=tolower(str[i]);
            str1[l]=tolower(str1[l]);
            if(str[i]==str1[l])
                {
                    l++;
                    if(l==strlen(str1)) {flag=1;}
                }
            else l=0;
            if(flag==1) break;
        }
    if(flag==1) printf("Yes");
    else printf("No");
    return 0;
}
