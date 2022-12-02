#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int l, r;
    cin >> l >> r;
    long long int i = ceil(sqrt(l));
    int count=0;
    for (;i*i<=r;i++) {
        count++;
    }
    cout << count;
    return 0;
}