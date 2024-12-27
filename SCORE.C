#include <stdio.h>
#include <conio.h>

main()
{
  int score;
  char grade;

  clrscr();

  printf("Enter your score: ");
  scanf("%d",&score);

  if(score < 0 || score > 100)
  {
    printf("Invalid Score...");
  }
  else
  {
//find grade using ternary
   (score>=80 && score<=100)
   ? grade = 'A'
   : (score>=70 && score<80)
     ? grade = 'B'
     : (score>=60 && score<70)
       ? grade = 'C'
       : (score>=50 && score<60)
	 ? grade = 'D'
	 : (score<50 && score >=0)
	   ? grade = 'F'
	   : printf("Invalid score....");

    printf("Your grade is %c\n",grade);

//show comments using switch case
    switch(grade)
    {
      case 'A':
       printf("Excellent Work!\n");
       break;

      case 'B':
       printf("Well Done!\n");
       break;

      case 'C':
       printf("Good Job!\n");
       break;

      case 'D':
       printf("You passed, but you could do better\n");
       break;

      default :
       printf("Sorry,you failed...\n");
   }

//show eligibility for next level using if else
    if (grade == 'F')
    {
      printf("Please try again next time.\n");
    }
    else
    {
      printf("You are eligible for the next level.\n");
    }
   }
  getch();
}