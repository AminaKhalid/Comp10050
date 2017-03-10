#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct data
	{
		int points;
		int smartness;
		int strength;
		int dexterity;
		int magicSkills;
		int luck;
	};

struct slots//struct of slots
{
	char type[50];//stores type of slot
	int slotNum;//the position of the slot ie 0 = the first position in the slot
	int typeNum;//stores the slot type as a number between 1-3

};
/*struct user
{
	char name[20];
	int type;
	
};*/
//function declaration
void ogre(struct data);
void elf(struct data);
void wizard(struct data);
void human(struct data);

//void movePlayers();

//void move();
//void attack();

int main()
{
	setvbuf(stdout, 0, _IONBF, 0);
	int random;
	int p, n, i;
	
	int s;
	int slots;
	char name [50];
	
	//struct user info[40];
	struct data player;
	struct slots slot[50];
	
	printf("How many players would you like to select (max 6)? ");
	scanf("%d", &p);
	for(i=0;i<p;i++)
	{
		printf("Enter player name: ");
		scanf("%s", &name);
		printf("Enter your player type(1 for Human, 2 for Ogre, 3 for Elf, 4 for Wizard)\n");
		scanf("%d",&n);
		
		
		//options for different player types
		switch(n)
		{
		case 1:
		human(player);
		break;
		case 2:
		ogre(player);
		break;
		case 3:
		elf(player);
		break;
		case 4:
		wizard(player);
		break;
		}
	}
	
	printf("enter the number of slots: ");
	scanf("%d", &s);
	for(i=0;i<s;i++)
	{
		random = 0 + rand() % 3;//randomly choosing a number between 1 and 3
		
		if (random == 0)
		{
			strcpy(slot[i].type, "level ground"); //if random the random number equals 0, then copy level ground into slot type
		}
		if (random == 1)
		{
			strcpy(slot[i].type, "hill"); //if random the random number equals 1, then copy hill into slot type
		}
		if (random == 2)
		{
			strcpy(slot[i].type, "city"); //if random the random number equals 2, then copy city into slot type
		}
		
		printf("\n%d %s", i+1, slot[i].type); //print the slot number and the randomly assigned slot type
	}

	//option to move or attack
	for(i=0; i<p; i++)
        {
            printf("Player %d Press 1 to move or 2 to attack", i+1);
            int option;
            scanf("%d", &option);
			
			if (option == 1)
				//movePlayers();
	
	return 0;
}
}

//function for type human
void human(struct data h)
{
	struct data player;
	srand (time(NULL));
	h.points = 100;
	h.smartness = (1 + rand()) % 49;
	h.strength = 1 + rand() % 49;
	h.dexterity = 1 + rand() % 49;
	h.magicSkills = 1 + rand() % 49;
	h.luck = 1 + rand() % 49;
	printf("\nHUMAN: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", h.points, h.smartness, h.strength, h.dexterity, h.magicSkills, h.luck);
}
//function for type ogre
void ogre(struct data o)
{

	srand (time(NULL));

	o.points = 100;
	o.smartness = 1 + rand() % 20;
	o.strength = 80 + rand() % 20;
	o.dexterity = 80 + rand() %20;
	o.magicSkills = 0;
	o.luck = 1 + rand() % 30;
	printf("\nOGRE: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", o.points, o.smartness, o.strength, o.dexterity, o.magicSkills, o.luck);
}
//function for type elf
void elf(struct data e)
{
	struct data player;
	srand (time(NULL));
	e.points = 100;
	e.smartness = (70 + rand()) % 30;
	e.strength = 1 + rand() % 50;
	e.dexterity = 1 + rand() %100;
	e.magicSkills = 50 + rand() %30;
	e.luck = 60 + rand() % 40;
	printf("\nELF: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", e.points, e.smartness, e.strength, e.dexterity, e.magicSkills, e.luck);
}
//function for wizard
void wizard(struct data w)
{
	struct data player;
	srand (time(NULL));
	w.points = 100;
	w.smartness = (90 + rand()) % 10;
	w.strength = 1 + rand() % 20;
	w.dexterity = 1 + rand() %100;
	w.magicSkills = 80 + rand() %20;
	w.luck = 50 + rand() % 50;
	printf("\nWIZARD: lifepoints: %d\tsmartness: %d\tstrength: %d\tdexterity: %d\tmagicSkills: %d\tluck: %d\n", w.points, w.smartness, w.strength, w.dexterity, w.magicSkills, w.luck);
}

void movePlayers()
{
	int victim;
	/*If the Strength points of the victim are <=70, then attacked player life points = life points - 0.5 * his/her Strength points. 
	If the strength points of the victim are > 70, the attacker life points = life points - 0.3.*/
	printf("press 1 to attack the closest player: ");
	if (victim.strength <=70)
	{
		victim.points = victim.points - (0.5 * (victim.strength));
	}
	else if(victim.strength>70)
	{
		victim.points = victim.points - (0.3 * (victim.strength));
	}
}
