#include <stdio.h>
#define MAX 40

int main(void)
{
  int fahrenheit[MAX+1];
  int index;
  
  for(index = 0; index <= MAX; index = index +1)
  {
    fahrenheit[index] = ((9* index) / 5)+32;
  }
  for(;;)
  {
    printf("Geben Sie bitte eine Temperatur zwischen 0 und %d Grad Celsius ein.",MAX);
    printf(" (Abbruch bei -1):\n");
    scanf("%d",&index);
    
    if(index < 0 || index > MAX)
      break;
    
    printf("\n\nDas sind %d Grad Fahrenheit\n",fahrenheit[index]);
  }
  return 0;
}
