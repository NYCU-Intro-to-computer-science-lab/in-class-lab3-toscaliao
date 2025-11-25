#include <iostream>
using namespace std;

int fib(int n, int depth) {
    for (int i = 0; i < depth; i++) {
        cout << "|--";
    }
    cout << "SEARCH fib(" << n << ")" << endl;

    if (n == 1 || n == 2) {
        for (int i = 0; i < depth; i++) {
            cout << "|--";
        }
        cout << "GET fib(" << n << ") = 1" << endl;
        return 1;
    }

    int r1 = fib(n - 1, depth + 1);
    int r2 = fib(n - 2, depth + 1);
    int result = r1 + r2;

    for (int i = 0; i < depth; i++) {
        cout << "|--";
    }
    cout << "GET fib(" << n << ") = " << result << endl;

    return result;
}
int main() {
    int n = 0;
    cin>>n;
    cout<< fib(n, 0)<<endl;
    return 0;
}
