#include <stdio.h>
#include "NumClass.h"

int main() {
  int a, b;

  printf("Please enter two positive integers:\n");
  scanf("%d%d", &a, &b);

  //isArmstrong
  printf("The Armstrong numbers are: ");
  for (int i = a; i <= b; i++) {
    if (isArmstrong(i) == 1) {
      printf("%d ", i);
    }
  }
  //isPalindrome
  printf("\nThe Palindromes are: ");
  for (int i = a; i <= b; i++) {
    if (isPalindrome(i) == 1) {
      printf("%d ", i);
    }
  }
  //isprime
  printf("\nThe Prime numbers are: ");
  for (int i = a; i <= b; i++) {
    if (isPrime(i) == 1) {
      printf("%d ", i);
    }
  }
  //isStrong
  printf("\nThe Strong numbers are: ");
  for (int i = a; i <= b; i++) {
    if (isStrong(i) == 1) {
      printf("%d ", i);
    }
  }


}
