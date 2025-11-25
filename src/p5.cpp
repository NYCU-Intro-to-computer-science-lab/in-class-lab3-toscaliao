#include <iostream>
#include <cmath>

using namespace std;

void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << aux << endl;
        cout << "Move disk 1 from " << aux << " to " << to << endl;
        return;
    }
    hanoi(n - 1, from, to, aux);
    cout << "Move disk " << n << " from " << from << " to " << aux << endl;
    hanoi(n - 1, to, from, aux);
    cout << "Move disk " << n << " from " << aux << " to " << to << endl;
    hanoi(n - 1, from, to, aux);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, '1', '3', '2');
    return 0;
}