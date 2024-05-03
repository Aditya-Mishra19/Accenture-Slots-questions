#include <iostream>
using namespace std;

void printPattern(int n) {
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    printPattern(n);
    return 0;
}
