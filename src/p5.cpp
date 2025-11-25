#include <iostream>
#include <cmath>

using namespace std;

/*
(1)1->2
(1)2->3
(2)1->2
(1)3->2
(1)2->1
(2)2->3
*/

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        cout << "Move disk 1 from " << from << " to " << aux << endl;
        cout << "Move disk 1 from " << aux << " to " << to << endl;
        return;
    }
    hanoi(n-1,from,to,aux);
    cout<<"Move disk "<< n <<" from " << from << " to " << aux << endl;
    hanoi(n-1,to,from,aux);
    hanoi(n-1,from,to,aux);
    cout<<"Move disk "<< n <<" from " << from << " to " << aux << endl;
    hanoi(n-1,to,aux,from);
}

int main() {
    int n;
    cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}