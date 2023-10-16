#include <stdio.h>
#include <stdbool.h>
#include <math.h>

 bool is_square(int num); 


int main() {
   int num;
    do{
    printf("Enter a number:  " );
   scanf("%d" ,&num);
   }while (num < 1);
  
  if (is_square(num)){
  
    printf("%d is a perfect square" , num);
  }
  else{
    
     printf("%d is not a perfect square" , num);
  }
  
     return 0;
}
  
  
  bool is_square( int num) {


   double s = sqrt(num);
   
  double integral ;
  double frac ;
  
  frac = modf(s, &integral);
  printf("frac= %lf\n", frac);
    printf("integral= %lf\n", integral);
 
 if(frac != 0){
     return false;
  }
  else{
      return true;
  }
  
   }