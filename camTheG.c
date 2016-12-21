/* Project: eFish[first build] rating algorithm  */
/* Authors: Nicolas Hahn and Cameron Anderson    */
/* Date: 19/12/16                                */
/* Notes: This is a multi-stat match making      */
/* 	  algorithm, 0 > eRate < 5               */

//includes statements
#include <stdio.h>
#include <math.h>
#include "camTheG.h"

//variables 
	int totalScore;
	int kills;
	int headshots;
	int mvpStars;
	int hostageRescue;
	int bombDefuse;
	int shotFired;
	int deaths;
	int roundsPlayed;
	int matchesPlayed;
	int weightFactor1;
	int weightFactor2;
	int weightFactor3;
	int weightFactor4;
	int weightFactor5;
	int eRate;

//define function
int eFish(int totalScore, int kills, int headshots, int mvpStars, int hostageRescue, int bombDefuse, int shotFired, int deaths, int roundsPlayed, int matchPlayed, int weightFactor1, int weightFactor2, int weightFactor3, int weightFactor4, int weightFactor5){
return((((totalScore/kills)*weightFactor1)+((headshots/mvpStars)*weightFactor2)+((sqrt(hostageRescue+bombDefuse))*weightFactor3)/(((shotFired-deaths)*weightFactor4))+((roundsPlayed+matchesPlayed)*weightFactor5)));
}

//main program
int main(void)
{
	//variable initilization
	totalScore = 0;
	kills = 0;
	headshots = 0;
	mvpStars = 0;
	hostageRescue = 0;
	bombDefuse = 0;
	shotFired = 0;
	deaths = 0;
	roundsPlayed = 0;
	matchesPlayed = 0;
	weightFactor1 = 2.5;
	weightFactor2 = 1.25;
	weightFactor3 = .5;
	weightFactor4 = .25;
	weightFactor5 = .25;
	eRate = 0;

	//user input
	printf( "Enter a value for totalScore:");
   	totalScore = getchar( );
   	printf( "\nYou entered: ");
   	putchar( totalScore );
	printf( "Enter a value for kills:");
   	kills = getchar( );
   	printf( "\nYou entered: ");
   	putchar( kills);	
	printf( "Enter a value for headshots:");
   	headshots = getchar( );
   	printf( "\nYou entered: ");
   	putchar( headshots );
	printf( "Enter a value for mvpStars:");
   	mvpStars = getchar( );
   	printf( "\nYou entered: ");
   	putchar( mvpStars );	
	printf( "Enter a value for hostageRescue:");
   	hostageRescue = getchar( );
   	printf( "\nYou entered: ");
   	putchar( hostageRescue);	
	printf( "Enter a value for bombDefuse:");
   	bombDefuse = getchar( );
   	printf( "\nYou entered: ");
   	putchar( bombDefuse );
	printf( "Enter a value for shotFired:");
   	shotFired = getchar( );
   	printf( "\nYou entered: ");
   	putchar( shotFired );	
	printf( "Enter a value for deaths:");
   	deaths = getchar( );
   	printf( "\nYou entered: ");
   	putchar( deaths);	
	printf( "Enter a value for roundsPlayed:");
   	roundsPlayed = getchar( );
   	printf( "\nYou entered: ");
   	putchar( roundsPlayed );
	printf( "Enter a value for matchesPlayed:");
   	matchesPlayed = getchar( );
   	printf( "\nYou entered: ");
   	putchar( matchesPlayed );

	eRate = eFish(totalScore, kills, headshots, mvpStars, hostageRescue, bombDefuse, shotFired, deaths, roundsPlayed, matchesPlayed, weightFactor1, weightFactor2, weightFactor3, weightFactor4, weightFactor5);
	putchar( eRate );
	return(0);
}
