#include<stdio.h>
int main(void){
	int NumberOfStudents,NumberRequired,BCount=0;
	int CampareVariable;
	scanf("%d %d",&NumberOfStudents,&NumberRequired);
	int i;
	for(i=0;i<NumberOfStudents;i++){
		scanf("%d",&CampareVariable);
		if(CampareVariable<=0){
			BCount++;
		}
	}
	
	if(BCount<NumberRequired){
		printf("YES\n");
	}
	else printf("NO\n");
	return 0;
}