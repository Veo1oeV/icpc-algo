#include <iostream>
using namespace std;

int lcm(int a, int b) {
  int max = (a>b)?a:b;
  
  do {
    if (max % a == 0 && max % b == 0) return max;
    ++max;
  } while (true)
}

int main() {
  int a = 5, b = 17;
  cout << lcm(5,17) << endl;
}
