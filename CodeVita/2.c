#include <stdio.h>
int main(){
	int i,t;
	float m,r,p,s = 0;
	scanf("%f %d %f",&m,&t,&r);
	for(i = 0; i < t; i++){
		s = m + s;
		s = s * (1 - ((r/12)/100));
	}
	printf("%f\n",(s+0.5));
	return 0;
}
