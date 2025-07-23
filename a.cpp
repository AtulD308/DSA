#include <iostream>
using namespace std;

long long squareRoot(long long n) {
    long long ans = 0;
    for(long long i = 0; i * i <= n; i++) {
        ans = i;
    }
    return ans;
}

int main() {
    long long n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Square root (floor) is: " << squareRoot(n) << endl;
    return 0;
}
