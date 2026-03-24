#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
  int num , guess,attempts = 0 ;
  int level , max ;
  printf("🎮 LET'S START THE GAME !!\n");
  printf("CHOOSE DIFFICULTY LEVEL: \n");
  printf("1.EASY (1-50)\n");
  printf("2.MODERATE (1-100)\n");
  printf("3.HARD (1-500)\n");
  printf("ENTER YOUR CHOICE (1-3): ");
  scanf("%d",&level);
//SETTING LEVEL
  if(level ==1)
    max = 50 ;
  else if(level == 2)
    max = 100 ;
  else if(level == 3)
    max = 500 ;
  else
  {
    printf("INVALID CHOICE !!\n");
    return 0 ;
  }
srand(time(0));
num= rand()%max+1 ; // generating numbeer from 1 to 100 
printf("GUESS A NUMBER BETWEEN 1 AND %d\n",max);
do {
printf("ENTER YOUR GUESS : \n");
scanf("%d",&guess);
attempts ++ ;
// GAME WROKING
if (guess > num)
printf("TOO HIGH\n");
else if (guess < num)
printf("TOO LOW\n");
else
{
printf("CONGRATS !! 🥳\n");
printf("YOU WON !!👍😁\n");
  printf("ATTEMPTS = %d\n",attempts);
}
}
  while(guess!=num);
return 0 ;
}
  
