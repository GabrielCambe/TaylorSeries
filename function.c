

//this test is related to the fact that the argument is negative, i noticed that the value aproached the right value
while (expv < 0 and expv < expx) XOR (expv > 0 and expv > expx)
if(((expv < 0 && expv < expx) && !(expv > 0 && expv > expx)) || (!(expv < 0 && expv < expx) && (expv > 0 && expv > expx))){

while(fabs(expv - expx) > 0.001){
i++;
fat *= i;
xn *= x;
expv += xn/fat;
}
return expv - xn/fat;
}
}   
return expv;
}

#include "fun.h"
double my_exp(double x){
  long double expv, expx, xn;
  unsigned long long int i, fat;
  /* the next assignments make sure the iteration starts at the second portion of the infinite sum */
  xn = 1;
  i = 0;
  fat = 1;
  expv = 1;

  // i made thiss so that i didn't have to calculate it at each iteration
  expx = exp(x);

  /* this test came up while i was debbugging the program,
  i realized that the sum would behave differently deppending on the sign of the argument*/
  if(x > 0)
    /* the sum stops when the difference between the exp being calculated and the exp in libmath
    is less than 0.0000001 and in the case that the argument is grater than zero the exp being
    calculated must reach the value on libmath from below */
    while(fabs(expv - expx) >= DIF && expx > expv){
      //calculates  the factorial
      i++;
      fat *= i;
      
      //calculates x^n for each portion of the sum
      xn *= x;

      //calculates the exponential
      expv += xn/fat;
    }
  else
    //if the argument is negative expv keeps swaping its sign so i removed the and condition. the code is the same
    while(fabs(expv - expx) >= DIF){
      i++;
      fat *= i;
      xn *= x;
      expv += xn/fat;
      
      /* this test is related to the fact that the argument is negative, i noticed that it aproached the right value
      while this conditions were met */
      if(((expv < 0 && expv < expx) && !(expv > 0 && expv > expx)) || (!(expv < 0 && expv < expx) && (expv > 0 && expv > expx))){
	 //and the value did not get too close to the value on libmath
   while(fabs(expv - expx) > 0.001){
	   i++;
	   fat *= i;
     xn *= x;
	   expv += xn/fat;
	 }
	 return expv - xn/fat;
      }
    }
  return expv;
}
