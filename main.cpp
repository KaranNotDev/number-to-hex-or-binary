#include <iostream>
#include <bitset>
#include <string>

using namespace std;
string BH;

int x;

void hex() {
  cout << "Enter the number";
  cin >> x;
  printf("%.2X", x);
}
void binary() {
  cout << "Enter the number";
  cin >> x;
  cout << bitset<8>(x).to_string();
}

int main() {
  select:
    cout << "Hexadecimal or Binary?: (H/B)";
    cin >> BH;
  if (BH=="B") {
    binary();
  }
  else if (BH=="H") {
    hex();
  }
  else {
    cout << "Please enter a valid input\n";
    goto select;
  }
  return 0;
  }
