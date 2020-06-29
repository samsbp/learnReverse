#include <stdio.h>

main(){
  char strarray[50];
  srand(1231);
  for(int i=0;i<50;i++){
   int r=rand()%124;
   strarray[i]=r;
    
  }
 printf("generated key...");
 for(int i=0;i<49;i++){
   strarray[i]='0';
 }
 strarray[49]='\0';
}
