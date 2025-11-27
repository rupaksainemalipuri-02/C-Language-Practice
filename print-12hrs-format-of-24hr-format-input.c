/*
Take input of hrs, min (0<=hrs<=23, 0<=min<=59) and printf 12 hrs clock format of it accordingly.

For example,
12,34 -> print : 12:34 PM
13,56 -> print : 1:56 PM
9,37  -> print : 9:37 AM
*/


#include <stdio.h>
int changeFormat(int hrs, int min){
  if(hrs<=23 && min<=59){
    if (hrs>12){
      hrs-=12;
      printf("%d:%d PM", hrs, min);
    }
    else if(hrs==12){
      printf("%d:%d PM", hrs, min);
    }
    else{
      printf("%d:%d AM", hrs, min);
    }
  }
  return 0;
}

int main(){
  int h,m;
  scanf("%d %d", &h, &m);
  changeFormat(h,m);
  
  return 0;
}
