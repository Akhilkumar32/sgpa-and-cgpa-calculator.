#include <stdio.h>

int main() {


 printf("**********akhil kaligota's SGPA calculator for everyone**********\n");
 printf("\n");
 printf("GRADE POINTS ARE : O=10 , A+ =9 , A=8 , B+ =7 , B=6 , C=5");
 printf("\n");
 printf("\n");
 int n,j,value;
 int i,grades;
 int mul;
 int all_credits;
 int semister;
 float credits;
 float sum;
 float sgpa;

  printf("Enter number of subjects:\n(EXCLUDE FAILED SUBJECTS)\n");
  scanf("%d",&n);
  printf("mention your semester number:\nEXAMPLE:\n1-1 =>1 / 1-2 =>2\n2-1 =>3 / 2-2 =>4\n3-1 =>5 / 3-2 =>6\n4-1 =>7 / 4-2 =>8\n");
  scanf("%d",&semister);
  printf("Enter your total semester credits:\n(EXAMPLE ;24 CREDITS IN  A SINGLE SEMESTER)\n");
  scanf("%d",&all_credits);

  if (n <=3 || n>=10){
      printf("invalid number of subjects entered\n");
      return 0;
  }


  if (all_credits <=15 || all_credits >=25){
      printf("invalid number of semester credits entered\n");
      return 0;
  }

  if (semister == 0 || semister >=9){
      printf("invalid semseter entered\n");
      return 0;
  }
  for(i=1;i<=n;i++){
         for (j=1;j<=n;j++){
            printf("enter the grades of each subject:\n");
            scanf("%d %f",&grades,&credits);

             mul=grades*credits;
              //printf("mul is %d \n",mul);
              sum=sum+mul;


            if (grades <= 4  ||  grades >= 11){
            printf("invalid grade entered \n");
            return 0;
            }
            if (credits >= 8){
            printf("invalid credit value entered \n");
            return 0;
            }
         }
        // printf("sum is %f \n",sum);




    sgpa=sum/all_credits;
    printf("your semister SGPA for %d sem is %.2f out of 10.00",semister,sgpa);

 return 0;
  }
}
