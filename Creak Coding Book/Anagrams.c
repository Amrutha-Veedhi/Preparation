#include<stdio.h>
#include<string.h>
swap(char *x , char *y){
	char temp=*x;
	*x=*y;
	*y=temp;
}
anagrams(char *string,int i,int n){
	int j;
	if(i==n){
		printf("%s\n",string);
	}
	else{
		for(j=i;j<=n;j++){
			swap(string+i,string+j);
			anagrams(string,i+1,n);
			swap(string+i,string+j);
		}
	}
}
int main(){
	char string[1000];
	scanf("%s",string);
	anagrams(string,0,strlen(string)-1);
}