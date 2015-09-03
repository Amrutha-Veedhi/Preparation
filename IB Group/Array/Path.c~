#include<stdio.h>
int flag=0;
int r,c,i,j;
int arr[10][10];
main()
{
	scanf("%d %d",&r,&c);
	arr[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&arr[i][j]);
	if(arr[0][0]!=0 && arr[r-1][c-1]!=0)
		PathFinding(0,0);
	if(flag==1) printf("yes\n");
	else printf("no\n");
	return 0;
}
PathFinding(int a,int b)
{
	if ((a==r-1) && (b==c-1))
		{
		flag=1;
		return 0;}
	if ((a<r) && ((arr[a+1][b])==1))
		PathFinding(a+1,b);
	if ((b<c) && ((arr[a][b+1]==1)))
		PathFinding(a,b+1);
}
