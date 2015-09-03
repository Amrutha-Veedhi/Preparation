#include<stdio.h>

Calculation(int RMove,int RTime,int T,int StepTaken,char Direction,int DitchDistance,int PMove,int TTime){	
	if(PMove+StepTaken<DitchDistance && Direction=='F'){
		TTime=TTime+RTime;
		PMove=PMove+RMove;
	}
	else if(PMove+StepTaken>=DitchDistance && Direction=='F'){
		TTime=TTime+((DitchDistance-PMove)*T);
		PMove=PMove+((DitchDistance-PMove));
	}
	else if(PMove+RMove<DitchDistance && Direction=='B'){
		TTime=TTime+((DitchDistance/RMove)*RTime);
		DitchDistance=DitchDistance%RMove;		
		PMove=PMove+(DitchDistance-(DitchDistance%StepTaken));
		TTime=TTime+(StepTaken-(StepTaken-DitchDistance%StepTaken))*T;
		PMove=DitchDistance;
	}
	printf("%d %c\n",TTime,Direction);
	if(PMove<DitchDistance){Calculation(RMove,RTime,T,StepTaken,Direction,DitchDistance,PMove,TTime);}
	else
		{printf("%d %c\n",TTime,Direction);return;}
}
int main(void){
	int F,B,T,FD,BD,tc,i,j;
	int RMove=0,RTime=0;
	scanf("%d",&tc);
	for(i=0;i<tc;i++){
		scanf("%d %d %d %d %d",&F,&B,&T,&FD,&BD);
		int PMove=0,TTime=0;
		if(F==B)
		{
			if(F>FD)
			{
				printf("%d F\n",((FD*T)));
			}
			else
				printf("No Ditch\n");
			return 0;
		}
		if(F>B)
			{
			RMove=F-B;
			RTime=(F+B)*T;
			Calculation(RMove,RTime,T,F,'F',FD,PMove,TTime);
			}
		else
			{
				RMove=B-F;
				RTime=(F+B)*T;
				Calculation(RMove,RTime,T,B,'B',BD,PMove,TTime);
			}

	}
	return 0;
}
