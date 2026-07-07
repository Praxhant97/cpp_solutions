#include <iostream>
#include <cmath>

using namespace std;

bool isValidTriangle(double A, double B, double C) {
    return (A + B > C) && (A + C > B) && (B + C > A);
}

double calculateArea(double A, double B, double C) {
    double s = (A + B + C) / 2;
    return sqrt(s * (s - A) * (s - B) * (s - C));
}

int main() {
    double A, B, C;
    cin >> A >> B >> C;

    if (isValidTriangle(A, B, C)) {
        cout << "Valid" << endl;
        cout << calculateArea(A, B, C) << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
