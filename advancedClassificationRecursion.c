#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include "NumClass.h"

//helper function that return the number of digits in the number
int dig(int x) {
  int count = 0;
  while (x > 0) {
    count++;
    x /= 10;
  }
  return count;
}

//helper function that return the result of the calculation recursivlely
int isArmHelp(int n, int dig) {
  if (n > 0) {
    return (pow(n % 10, dig) + isArmHelp(n / 10, dig));
  }
  return 0;
}

//helper function that return the number reversed recursively
int reverse(int n, int tmp) {
    if (n == 0){
        return tmp;
    }

    tmp = (tmp * 10) + (n % 10);
    return reverse(n / 10, tmp);
}

//isPalindrome
int isPalindrome(int n) {
  int reversed = reverse(n, 0);
  return n == reversed ? true : false;
}

//isArmstrong
int isArmstrong(int n) {
  int tmp = n;
  int digits = dig(n);
  int ans = isArmHelp(n, digits);
  return ans == tmp ? true : false;
}
