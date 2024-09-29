#include <iostream>

// Declare inline function for Fibonacci sequence
inline int fib(int n) {
  if (n == 0 || n == 1)
    return n;
  else
    return fib(n - 1) + fib(n - 2);
}

int main() {
  int n, i;
  std::cout << "Enter the number of terms you want to generate: ";
  std::cin >> n;
  std::cout << "Fibonacci Series up to " << n << " terms:\n";
  for (i = 0; i < n; i++) {
    std::cout << fib(i) << " ";   //function call
  }
  std::cout << std::endl;
  return 0;
}





