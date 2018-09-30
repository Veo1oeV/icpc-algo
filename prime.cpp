#include <iostream>
using namespace std;

bool isPrime(int a) {
  for (int i=0;i<sqrt(a);++i) {
    if (a%i==0) return false;
  }
  return true;
}

int main() {
  int a=17;
  cout << isPrime(a) << endl;
}
