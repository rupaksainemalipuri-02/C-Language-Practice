/*
Take an 4 digit integer input N and check whether the number is a Palindrome or not.

Constraints:
1000 <= N <= 9999

For example.
1221, 3445, 7997 -> Yes it is palindrome (return 1)
3456, 4589, 8364 -> Not a palindrome (return 0)
*/


#include <stdio.h>
int checkPalindrome(int n){ //1221
  int a,b,c,d;
  a = n%10; //1
  b = (n/=10, n%10); //2
  c = (n/=10, n%10); //2
  d = (n/=10, n%10); //1
  if (a==d && b==c){
      printf("Yes, it is a palindrome");
    return 1;
  }
  else{
      printf("No, it is not a palindrome");
    return 0;
  }
}
int main(){
  int N;
  printf("Enter a 4 digit integer: ");
  scanf("%d", &N);
  checkPalindrome(N);
  return 0;
}
