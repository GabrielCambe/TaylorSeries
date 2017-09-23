#include "fun.h"

int main(){
  //the values for testing the function
  double valores[9] = {-2*PI, (-3*PI)/4, -PI, -PI/2, 0, PI/2, PI, (3*PI)/4, 2*PI};

  int i;
  for(i = 0; i < 9; i++){
    printf("Funcao\t valor\t\t meu \t\t libmath \t err abs \t err rel\n");
    printf("EXP\t %.9f\t %.9f \t %.9f\t %.9f \t %.9f\n", valores[i], my_exp(valores[i]), exp(valores[i]), fabs(exp(valores[i]) - my_exp(valores[i])), fabs((exp(valores[i]) - my_exp(valores[i]))/valores[i]));
    //printf("SEN\t %.9f\t %.9f \t %.9f\t %.9f \t %.9f\n", valores[i], my_sin(valores[i]), sin(valores[i]), fabs(sin(valores[i]) - my_sin(valores[i])), fabs((sin(valores[i]) - my_sin(valores[i]))/valores[i]));
    // printf("COS\t %.9f\t %.9f \t %.9f\t %.9f \t %.9f\n", valores[i], my_cos(valores[i]), cos(valores[i]), fabs(cos(valores[i]) - my_cos(valores[i])), fabs((cos(valores[i]) - my_cos(valores[i]))/valores[i]));
  //printf("ARCSIN\t %.9f\t %.9f \t %.9f\t %.9f \t %.9f\n", valores[i], my_arcsin(valores[i]), asin(valores[i]), fabs(asin(valores[i]) - my_arcsin(valores[i])), fabs((asin(valores[i]) - my_arcsin(valores[i]))/valores[i]));

  //printf("ARCCOS\t %.9f\t %.9f \t %.9f\t %.9f \t %.9f\n", valores[i], my_arccos(valores[i]), acos(valores[i]), 1.0 * abs(acos(valores[i]) - my_arccos(valores[i])), 1.0 * abs((acos(valores[i]) - my_arccos(valores[i]))/valores[i]));
  }
  
  return 0;
}
