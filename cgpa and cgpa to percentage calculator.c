#include <stdio.h>

int main() {


 printf("**********AKHIL KALIGOTA'S  CURRENT/TOTAL CGPA CALCULATOR AND CGPA TO PERCENTAGE CONVERTER**********\n");
 printf("\n");


 int curr_sem,i;
 float ind_sum;
 float ind_sgpa;
 float avg_sgpa;
 float cgpa_per;


     printf("enter no of semesters you completed\n");
     scanf("%d",&curr_sem);


   for (i=1;i<=curr_sem;i++){
    printf("enter your individual SGPA's\n");
    scanf("%f",&ind_sgpa);
    ind_sum += ind_sgpa;
   }

    printf("indiviual sem sum %.2f\n",ind_sum);

    avg_sgpa=ind_sum/(float)curr_sem;


    printf("YOUR CGPA UPTO %d semester is %.2f\n",curr_sem,avg_sgpa);

    cgpa_per = (avg_sgpa-0.5)*10;
    printf("YOUR PERCENTAGE UPTO %d semester is %.2f PERCENTAGE",curr_sem,cgpa_per);

 return 0;

}
