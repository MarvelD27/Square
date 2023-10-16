#include <stdio.h>
#include <math.h>

int main() {
    int num;
    printf("Enter a number:  " );
   scanf("%d" ,&num);
   
  
  double s = sqrt(num);
   
  double integral = 0;
  double frac = 0;
  
  frac = modf(s, &integral);
  
  printf("frac= %lf\n", frac);
  printf("integral= %lf\n", integral);
  
  if(frac != 0){
      printf("%d is not a perfect square" , num);
  }
  else{
      printf("%d is a perfect square" , num);
  }
  
   

   
   
    return 0;
}