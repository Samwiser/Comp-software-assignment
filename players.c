#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "crossfireOperations.h"

void getAbilities(int NumberPlayers){
	
	int i;
	
	for(int i=0; i<NumberPlayers; i++)	//for loop to take player information(name and type)
	{
		printf("\nenter player %d name: ", i+1);
		scanf("%s", &players_array[i].player_name);	//stores players name in stuct array
		
		while(strcmp(players_array[i].type, "elf" )!=0 && strcmp(players_array[i].type, "human" )!=0 && strcmp(players_array[i].type, "ogre" )!=0 && strcmp(players_array[i].type, "wizard" )!=0)
		{
			printf("%s enter your player type (elf, human, ogre, wizard) : ", &players_array[i].player_name);
			scanf("%s", &players_array[i].type); //stores players type in stuct array
		}
	}

	
	printf("\nPlayer Capabilities: \n");

	for(i=0; i<NumberPlayers; i++)//for loop that goes through each player and ends when all players have been passed through
	{
		if(strcmp(players_array[i].type,"ogre")==0)//checks if player type is ogre
		{
			players_array[i].Life_pts = 100;
			players_array[i].Luck = 60;
			players_array[i].Magic_Skills=0;
			players_array[i].Smartness = (rand() %21);
			players_array[i].Strength = ((rand() %21)+80);
			players_array[i].Dexterity = ((rand() %21)+80);
			while(players_array[i].Luck+players_array[i].Smartness>50)//makes sure that luck and smartness combined are less than 50
			{
				players_array[i].Luck = (rand() %51);
			}
			//prints out the result
			printf("\nPlayer %s, Type: %s ", players_array[i].player_name, players_array[i].type);
			printf("\nMagic skills: %d\n", players_array[i].Magic_Skills);
			printf("Smartness: %d\n", players_array[i].Smartness);
			printf("Strength: %d\n", players_array[i].Strength);
			printf("Dexterity: %d\n", players_array[i].Dexterity);
			printf("Luck: %d\n", players_array[i].Luck);
		}

		if(strcmp(players_array[i].type,"human")==0)//checks if player type is human
		{
			players_array[i].Magic_Skills = 100;
			players_array[i].Smartness = 100;
			players_array[i].Strength = 100;
			players_array[i].Dexterity = 100;
			players_array[i].Luck = 100;
			players_array[i].Life_pts = 100;
			
			//while loop that ends when combined abilities are less than or equal to 300
			while(players_array[i].Magic_Skills+players_array[i].Smartness+players_array[i].Strength+players_array[i].Dexterity+players_array[i].Luck>=300)
			{
				players_array[i].Magic_Skills = ((rand() %100)+1);
				players_array[i].Smartness = ((rand() %100)+1);
				players_array[i].Strength = ((rand() %100)+1);
				players_array[i].Dexterity = ((rand() %100)+1);
				players_array[i].Luck = ((rand() %100)+1);
			}
			//prints out the result
			printf("\nPlayer %s, Type: %s", players_array[i].player_name, players_array[i].type);
			printf("\nMagic skills: %d\n", players_array[i].Magic_Skills);
			printf("Smartness: %d\n", players_array[i].Smartness);
			printf("Strength: %d\n", players_array[i].Strength);
			printf("Dexterity: %d\n", players_array[i].Dexterity);
			printf("Luck: %d\n", players_array[i].Luck);
		}

		if(strcmp(players_array[i].type,"wizard")==0)//checks if player type is a wizard
		{
			players_array[i].Magic_Skills = ((rand() %21)+80);
			players_array[i].Smartness = ((rand() %11)+90);
			players_array[i].Strength = ((rand() %20)+1);
			players_array[i].Dexterity = ((rand() %100)+1);
			players_array[i].Luck = ((rand() %51)+50);
			players_array[i].Life_pts = 100;
			
			//prints out the result
			printf("\nPlayer %s, Type: %s ", players_array[i].player_name, players_array[i].type);
			printf("\nMagic skills: %d\n", players_array[i].Magic_Skills);
			printf("Smartness: %d\n", players_array[i].Smartness);
			printf("Strength: %d\n", players_array[i].Strength);
			printf("Dexterity: %d\n", players_array[i].Dexterity);
			printf("Luck: %d\n", players_array[i].Luck);

		}

		if(strcmp(players_array[i].type,"elf")==0)//checks if player type is elf

		{

			players_array[i].Magic_Skills = 0;
			players_array[i].Smartness = ((rand() %31)+70);
			players_array[i].Strength = ((rand() %50)+1);
			players_array[i].Dexterity = ((rand() %100)+1);
			players_array[i].Luck = ((rand() %41)+60);
			players_array[i].Life_pts = 100;

			while(players_array[i].Magic_Skills<=50)//while loop that ends when magic skills are greater than 50

			{
				players_array[i].Magic_Skills = ((rand() %30)+50);
			}
			//prints out the result
			printf("\nPlayer %s, Type: %s ", players_array[i].player_name, players_array[i].type);
			printf("\nMagic skills: %d\n", players_array[i].Magic_Skills);
			printf("Smartness: %d\n", players_array[i].Smartness);
			printf("Strength: %d\n", players_array[i].Strength);
			printf("Dexterity: %d\n", players_array[i].Dexterity);
			printf("Luck: %d\n", players_array[i].Luck);

		}
	}
}