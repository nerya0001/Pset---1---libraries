#include <stdio.h>
#include "NumClass.h"

int main() {
  int a, b;
  do {
  scanf("%d%d", &a, &b);
  }
  while (a <= 0 || b <= 0);//checking that the input is as it should be
  //isArmstrong
  printf("The Armstrong numbers are:");
  for (int i = a; i <= b; i++) {
    if (isArmstrong(i) == 1) {
      printf(" %d ", i);
    }
  }
  //isPalindrome
  printf("\nThe Palindromes are:");
  for (int i = a; i <= b; i++) {
    if (isPalindrome(i) == 1) {
      printf(" %d ", i);
    }
  }
  //isprime
  printf("\nThe Prime numbers are:");
  for (int i = a; i <= b; i++) {
    if (isPrime(i) == 1) {
      printf(" %d ", i);
    }
  }
  //isStrong
  printf("\nThe Strong numbers are:");
  for (int i = a; i <= b; i++) {
    if (isStrong(i) == 1) {
      printf(" %d ", i);
    }
  }
}
