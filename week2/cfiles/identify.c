#include <stdio.h>

func(char* str){
  char str1[10];
  for(int i=0;i<11;i++){
    str1[i]=str[i];
  }
  printf("%s",str1);
}

main(){
  int a=10;
  char* str="1ewder241ss";
  func(str);
}
