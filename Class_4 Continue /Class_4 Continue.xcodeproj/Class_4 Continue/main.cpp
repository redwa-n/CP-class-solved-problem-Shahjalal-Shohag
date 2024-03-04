#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 10 != 9) {
            continue; // if the numbers doesn't end with 9, then continue
        }
        if (i % 3 == 0) {
            continue; // if it is a multiple of 3, then continue
        }
        cout << i << '\n';
    }
    return 0;
}
