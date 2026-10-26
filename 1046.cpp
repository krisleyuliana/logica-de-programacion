#include <iostream>
using namespace std;

int main() {
    int X, Y, suma = 0;
    cin >> X >> Y;

    if (X < Y) {
        for (int i = X + 1; i < Y; i++) {
            if (i % 2 != 0) {
                suma = suma + i;
            }
        }
    } else {
        for (int i = Y + 1; i < X; i++) {
            if (i % 2 != 0) {
                suma = suma + i;
            }
        }
    }

    cout << suma << endl;

    return 0;
}