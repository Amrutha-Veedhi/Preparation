#include<stdio.h>
int NoOfTaps(int NoOfCards)
{	
	int NoOfTaps;
	NoOfTaps= NoOfCards<=3 ? 1 : NoOfCards%3==0 ? NoOfCards/3 : NoOfCards;
	return NoOfTaps;
}
void main(void)
{
	int NoOfCards;
	scanf("%d",&NoOfCards);
	printf("%d",NoOfTaps(NoOfCards));
}