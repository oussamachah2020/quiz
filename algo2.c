//simple quiz game with C

#include <stdio.h>
#include <stdlib.h>


struct play //
{
    char name[20];
    int score;
    int rat; //star ratings
}p;


void start()
{
  char line[20];
  printf("\n\t\t\tRegister you name: ");
  fgets(line,sizeof(line),stdin);
}

void Registration()
{
  char name[20];
  printf("\n\t\t\tHello ");
  puts(name);
}

int main() //the main body//
{
  int n,point;
  int score;
  char c;

  point = score = 0;

  start();//start function for the name registration//
  Registration();//printing the player name//



printf("\n\n\t\t----- welcome to this mini quiz -----\n");
printf("\n\t\t>>> you will have 4 questions\n");
printf("\n  >>> you will get +1 point for every correct answer and 0 for a wrong one\n\n");
printf("\n\t\t>>>>>> press 'ENTER' to continue"); //stat button//
scanf("%c",&c);

   system("clear");//clear the output//

   printf("\t\t******************************************\n");
  printf("\t\t\t----- First question -----\n\n");

  printf("\t\t\twhen the WW1 was end?\n\n");
  printf("\t 1. 1916\t 2. 1913\t 3. 1927\t 4. 1918\n\n");
  printf("\t\t\tchoose the right answer: ");
  scanf("%d",&n);

    if(n == 4)
    {
      printf("\t\tCorrect!\n\n");
      ++point;
      printf("\t\tcongratulation! +1 point!\n\n");
    }else {
       printf("\n\t\twrong answer!the correct one is (4. 1918)\n\n");//the correction//
       printf("\n\t\tNo point!\n\n");
       point = 0;//no point foer the wrong answer//
    }
    printf("\t\t******************************************\n");
  printf("\t\t\t----- Second question -----\n\n");
  printf("\t\t\thow much is long the mount Everest?\n\n");
  printf("\t 1. 4938m\t 2. 3897m\t 3. 8850m\t 4. 8379m\n\n");
  printf("\t\t\tchoose the right answer: ");
  scanf("%d", &n);

  if(n == 3)
  {
    printf("\t\tCorrect!\n\n");
    printf("\t\tcongratulation! +1 point!\n\n");
    ++point;
  }else {
     printf("\n\t\twrong answer!the correct one is (3. 8850m)\n\n");
     printf("\n\t\tNo point!\n\n");
     point = 0;
  }
  printf("\tnext!\n\n");
  printf("\t\t******************************************\n");
  printf("\t\t\t-----third question-----\n\n");
  printf("\t\t\tcomplete the serie: 0_3_10_13_20_?\n\n");
  printf("\t\t\t1. 23\t 2. 21\t 3. 25\t 4. 27\n\n");
  printf("\t\t\tchoose the right answer: ");
  scanf("%d",&n);

     //the right answer//

   if(n == 1)
   {
     printf("\t\tCorrect!\n\n");
      ++point; //correct answer add 1 point
     printf("\t\tcongratulation! +1 point!\n\n");
   }else {
      printf("\n\t\twrong answer!the correct one is (1. 23)\n\n");
      printf("\n\t\tNo point!\n\n");
      point = 0;
   }
   printf("\tnext!\n\n");

   printf("\t\t******************************************\n");
 printf("\t\t\t----- fourth question -----\n\n");
 printf("\t\twhat is the derivable of the function F(x) = 2x^3+e^2x/3+2\n\n");
 printf("1. F'(x) = F'(x) = 5x+2e^2x/3\t2. F'(x) = 6x^2+2e^2x/9\t3. F'(x) = 6x+e^2x/3\t4. F'(x) = 3x+e^2x/9\n\n");
 printf("\t\t\tchoose the right answer: ");
 scanf("%d", &n);

 if(n == 2)
 {
   printf("\t\tCorrect!\n\n");
   printf("\t\tcongratulation! +1 point!\n\n");
   ++point;
 }else {
    printf("\n\t\twrong answer!the correct one is (2. F'(x) = 6x+2e^2x/9)\n\n");
    printf("\n\t\tNo point!\n\n");
    point = 0;
 }

   system("clear"); //to clear the output


   score = (point*10);

   if(score == 0)
   {
     printf("\n\t\t\tThanks for trying! you scored 0 point\n\n");
   }else 
     if(score == 1 || score == 2 || score == 3)
     {
       printf("\n\t\tGOOD!you scored %d points\n\n",score);
     }else 
      printf("\n\t\tGREAT!you get the full score of %d points\n\n",score);
}
