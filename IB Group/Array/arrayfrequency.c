#include<stdio.h>
main()
{
    int arr[1000],arr1[1000];
    int num,i,j,l=0,val,index=0,flag=0;;
    scanf("%d",&num);
    for(i=0;i<num;i++)
        {   arr1[l]=0;flag=0;
            scanf("%d",&val);
            for(j=0;j<l;j++)
                {
                if(arr[j]==val)
                    {index=j;flag=0;break;}
                else flag=1;
                }
            if(flag==1 || l==0) {arr[l]=val;arr1[l]++;l++;}
            else arr1[index]++;
        }
    val=-20000;
    for(j=0;j<l;j++)
    {    val=-20000;
        for(i=0;i<l;i++)
            if(arr1[i]>val)
                {val=arr1[i];index=i;}
        arr1[index]=-1;
        if(j==l-1)
            {
                for(i=0;i<(val-1);i++) printf("%d ",arr[index]);
                printf("%d\n",arr[index]);
            }
       else  for(i=0;i<val;i++) printf("%d ",arr[index]);
    }
    return 0;
}
