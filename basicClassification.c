#include <stdio.h>
#include <stdbool.h>
#include "NumClass.h"

//factorial - helper function
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
  if (n == 1) {
    return true;
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
