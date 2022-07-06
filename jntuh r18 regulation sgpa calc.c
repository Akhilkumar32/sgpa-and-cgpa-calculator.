#include <stdio.h>

int main() {


 printf("**********akhil kaligota's JNTUH R18 SGPA calculator**********\n");
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

  if (n <=3 || n>=10){
      printf("invalid number of subjects entered\n");
      return 0;
  }

  if (semister == 0 || semister >=9){
      printf("invalid semsiter entered\n");
      return 0;
  }
  for(i=1;i<=n;i++){
         for (j=1;j<=n;j++){
            printf("enter the grades&credits of each subject:\n");
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


    if (semister==1) {
        all_credits = 19;
    }
    else if ( semister == 2 ){
      all_credits= 18;
    }
    else if ( semister == 3 || semister == 4 || semister == 7 ){
      all_credits= 21;
    }
    else if ( semister == 5 ||semister == 6  ){
      all_credits= 22;
    }
    else if ( semister == 8 ){
      all_credits= 16;
    }

    sgpa=sum/all_credits;
    printf("your semister SGPA for %d sem is %.2f out of 10.00",semister,sgpa);

 return 0;
  }
}
