#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#include<string.h>
struct slot
{
	/*struct slot lg;
	struct slot hill;
	struct slot city;*/
	char lg;
	char hill;
	char city;
	char n;
	char x;
};
int main()
{
	srand (time(NULL));
	//struct player players[50];
	struct slot slots[50];
	//struct slot x;
	
	int i, p, s;
	int random;
	
	printf("How many players would you like to select (max 6)? ");
	scanf("%d", &p);
	
	for(i=0;i<p;i++)
	{
		printf("Enter player name: ");
		scanf("%s", &slots[i].x);
	}
	
	printf("enter the number of slots: ");
	scanf("%d", &slots[i].n);


	s = slots[i].n;
	
		
	for(i=0;i<s;i++)
	{
		random = 0 + rand() % 3;
		
		/*if (random == 0)
		{
			printf("level ground");
		}*/
		
		slots[i].n = random;
		
			
		printf("\nslot %d\tslot type %d", i, slots[i].n);
	}
	
	

}
