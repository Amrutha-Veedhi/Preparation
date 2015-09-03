#include <stdio.h>
int main()
{
    int num;
    scanf ("%d",&num);
    int p=num,j=0,i,odd;
    odd=(p-1)/2;
    int a[num][num],k,count=0;
for (i=0;i<num*num;i++)
{
	scanf("%d",&a[i/num][i%num]);
}
j=0;
for (i=p-1;i>j;i--)
{
	for (k=j;k<i;k++)
	{
        ++count;
		if (count==(num*num)) printf ("%d",a[j][k]);
		else printf ("%d ",a[j][k]);
    }
	for (k=j;k<i;k++)
	{
        ++count;
		if (count==(num*num)) printf ("%d",a[k][i]);
        else printf ("%d ",a[k][i]);
    }
	for (k=i;k>j;k--)
	{
		++count;
		if (count==(num*num)) printf ("%d",a[i][k]);
		else printf ("%d ",a[i][k]);
    }
	for (k=i;k>j;k--)
	{
		++count;
		if (count==(num*num)) printf ("%d",a[k][j]);
        else printf ("%d ",a[k][j]);
    }
    j++;
}

	if (p%2==1)
	{
		++count;
		if (count==(num*num)) printf ("%d",a[odd][odd]);
		else printf ("%d ",a[odd][odd]);
    }
return 0;
}
