#include <stdio.h>
#include <stdbool.h>

int factorial(int x) {
  if(x == 1 || x == 0) {
    return true;
  }
  return factorial(x - 1) * x;
}
//isStrong
int isStrong(int n) {
  int sum = 0;
  int ncopy = n;
  while (n > 0) {
     sum += factorial(n % 10);
     n /= 10;
  }
  if (ncopy == sum) {
    return true;
  }
  return false;
}

//isPrime
int isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  if (n <= 3) {
    return true;
  }
  if (n % 2 == 0 || n % 3 == 0) {
    return false;
  }
  for (int i = 5; i * i <= n; i += 6) {
    if ((n % i == 0) || (n % (i + 2) == 0)) {
      return false;
    }
  }
  return true;
}

// int main() {
  // int n = 146;
  // int ans = isStrong(n);
  // if (ans == 1) {
  //   printf("n is a Strong number");
  // }
  // if (ans == 0) {
  //   printf("n is not a Strong number");
  // }
  // int n = 5, b = 4, g = 7, u = 19;
  // int ans1 = isPrime(n);
  // int ans2 = isPrime(b);
  // if (ans1 == 1) {
  //   printf("n is prime\n");
  // }else {printf("n is not prime\n");}
  // if (ans2 == 1) {
  //   printf("b is prime\n");
  // }else {printf("b is not prime\n");}
// }
