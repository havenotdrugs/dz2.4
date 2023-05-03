#include <iostream>
using namespace std;

int main() {
  float one;
  cin >> one;
  if(one > 0) cout << "+";
  else if (one < 0) cout << "-";
  else cout << "0";
}
