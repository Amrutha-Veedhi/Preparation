#include<stdio.h>
int main(){
	int Number,Res_Size,i,Array[1000];
	scanf("%d",&Number);
	Array[0]=1;
	Res_Size=1;
	for(i=2;i<=Number;i++){
		Res_Size=Multiplication(i,Res_Size,Array);
	}
	for(i=(Res_Size-1);i>=0;i--){
		printf("%d",Array[i]);
	}
	printf("\n");
	return 0;

}
int Multiplication(int x,int Res_Size,int Array[]){
	int i,Carry=0,Product;
	for(i=0;i<Res_Size;i++){
		Product=(Array[i]*x)+Carry;
		Array[i]=Product%10;
		Carry=Product/10;
	}
	while(Carry){
		Array[Res_Size++]=Carry%10;
		Carry=Carry/10;
	}
	return Res_Size;
}