#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int pascal[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                pascal[i][j] = 1;
            }
            else {
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
