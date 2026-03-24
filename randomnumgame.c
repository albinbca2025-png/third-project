#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
  int num , guess,attempts = 0 ;
srand(time(0));
num= rand()%100+1 ; // generating numbeer from 1 to 100 
printf("🎮 LET'S START THE GAME !!");
printf("GUESS A NUMBER BETWEEN 1 TO 100\n");
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
  
