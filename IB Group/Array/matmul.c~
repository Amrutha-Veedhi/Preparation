#include<stdio.h>
main()
{
    int r1,c1,r2,c2,r3,c3,i,j,k,sum=0;
    scanf("%d %d",&r1,&c1);
    int arr[r1][c1];
    for(i=0;i<(r1*c1);i++)
       scanf("%d",&arr[i/r1][i%c1]);
    scanf("%d %d",&r2,&c2);
   int arr1[r2][c2];
   int arr2[r1][c2];
    for(i=0;i<(r2*c2);i++)
        scanf("%d",&arr1[i/r2][i%c2]);
    for(i=0;i<(r1*c2);i++)
        arr2[i/r1][i%c2]=0;
    if(c1!=r2) return 0;
    for(i=0;i<r1;i++)
        for(j=0;j<c2;j++)
        {   sum=0;
            for(k=0;k<c1;k++)
                sum=sum+(arr[i][k]*arr1[k][j]);
            arr2[i][j]=sum;
        }
    for(i=0;i<r1*c2;i++)
        {
            if(i%r1==0 && i!=0) printf("\n");
            if((i+1)%r1==0) {printf("%d",arr2[i/r1][i%c2]);continue;}
          printf("%d ",arr2[i/r1][i%c2]);
        }
        printf("\n");
    for(i=0;i<r1;i++)
        {	
            for(j=0;j<c2;j++) 
            	{	if(i==r1-1 && j==c2-1) {printf("%d",arr2[j][i]);continue;}
            		if(j==c2-1) {printf("%d\n",arr2[j][i]);continue;}
            		printf("%d ",arr2[j][i]);
            	}
       }
      return 0;
}
