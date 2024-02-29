#include <iostream>
using namespace std;

int main()
{
    int n; cin >> n;
    long long cube = (long long)n * n * n;
    int last_two_digits = cube % 100;
    cout << last_two_digits << '\n';
    return 0;
    //658   12
    //256   16
    //1234567 63
}
