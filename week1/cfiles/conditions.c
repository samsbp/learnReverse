#include <stdio.h>
int main(){
  signed int number;
  printf("enter an integer: ");
  scanf("%d",&number);
  if(number > 10){
    printf("You entered %d. \n",number);
  }
  else{
    printf("you entered a negative number %d.\n",number);
  }
  printf("The if statement is easy.");
  return 0;
}
