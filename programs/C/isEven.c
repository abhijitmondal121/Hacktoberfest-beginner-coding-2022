#include <stdio.h>

int main() {
  int number;
  
  scanf("%d", &number);
  
  if(number%2 ==0)
    printf("Is Even");
  else
    printf("Is Odd");
  
  return 0;
}
