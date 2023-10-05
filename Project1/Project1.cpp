#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double R, x, y;
    cout << "Введіть значення R: ";
    cin >> R;
    cout << "Введіть координату x: ";
    cin >> x;
    cout << "Введіть координату y: ";
    cin >> y;

    // Розрахунок відстані від точки (x, y) до центру координат (0, 0)
    double distance = sqrt(x * x + y * y);

    // Перевірка, чи точка (x, y) попадає в замальовану частину фігури
    if (distance <= R && x >= 0 && y >= 0 && x + y >= R) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}