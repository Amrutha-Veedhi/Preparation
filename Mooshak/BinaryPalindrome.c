#include<stdio.h>
int NoOfBits(int Number){
	int i,sum=1,count=0;
	for(i=0;sum<=Number;i++){
		sum=sum*2;
		count++;
	}
	return count;

}
int main(void){
	unsigned long long int Number;
	scanf("%lld",&Number);
	int count;
	unsigned long long int Dummy;
	Dummy=Number;
	count=NoOfBits(Number);
	int i,var,sum=0;
	for(i=0;i<count;i++){
		var=(Dummy&1);
		sum=(sum<<1|var);
		Dummy=Dummy>>1;
	}
	if(sum==Number){
		printf("Palindrome\n");
	}
	else printf("NotPalindrome\n");
	return 0;
}