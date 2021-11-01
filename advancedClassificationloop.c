#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int dig(int x) {
  int count = 0;
  while (x > 0) {
    count++;
    x /= 10;
  }
  return count;
}

//isPalindrome
int isPalindrome(int n) {

}

//isArmstrong
int isArmstrong(int n) {
  int ncopy = n, sum = 0;
  int digits = dig(n);
  while (n > 0) {
    sum += (int)(pow((n % 10), digits));
    n /= 10;
  }
  if (sum == ncopy) {
    return true;
  }
  return false;
}

// int main() {
//   int n = 407;
//   int ans = isArmstrong(n);
//   if (ans == 1) {
//     printf("n is armstrong\n");
//   }
}
