#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long fact = 1;

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << fact;

    return 0;
}

#include <iostream>
using namespace std;

long long factorial(int n) {
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}