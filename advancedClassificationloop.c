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

int reverse(int x) {
  int reversed = 0;
  while (x > 0) {
    reversed = reversed * 10 + x % 10;
    x /= 10;
  }
  return reversed;
}
//isPalindrome
int isPalindrome(int n) {
  int reversed = reverse(n);
  return n == reversed ? true : false;
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
//   int n = 1881;
//   int ans = isPalindrome(n);
//   if (ans == 1) {
//     printf("n is a palindrome\n");
//   }else {printf("n is not a palindrome\n");}
// }
