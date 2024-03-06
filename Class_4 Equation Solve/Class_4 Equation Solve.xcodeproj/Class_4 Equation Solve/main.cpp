#include<iostream>
using namespace std;

int32_t main() {
  int n;
    cout<<"Enter Number : ";
    cin >> n;
  int sum = 0;
  for (int i = 1; i <= n * n; i++) {
    sum += i * i + 3 * i - 9;
  }
  cout << sum << '\n';
  return 0;
}
