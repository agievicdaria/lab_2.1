#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double alpha, z1, z2; 

    // Введення значення alpha
    cout << "Введіть значення alpha ";
    cin >> alpha;

    // Розрахунок z1
    z1 = 2 * pow(sin(3 * M_PI - 2 * alpha), 2) * pow(cos(5 * M_PI + 2 * alpha), 2);
    // Розрахунок z2
    z2 = 1.0/4.0 - 1.0/4.0 * sin(5.0/2.0 * M_PI - 8.0 * alpha);

    // Виведення результату в консоль
    cout << "Значення z1: " << z1 << endl;
    cout << "Значення z2 = " << z2 << endl;

    return 0;
}