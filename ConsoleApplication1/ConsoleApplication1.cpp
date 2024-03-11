#include <iostream>
#include <cmath>
using namespace std;

void Task1() {
    float m, n;
    cout << "Enter values of m and n: ";
    cin >> m >> n;

    int result1 = m - --n;
    cout << "Result of: m---n: " << result1 << endl;

    bool result2 = m++ < n;
    cout << "Result of: m++<n: " << result2 << endl;

    bool result3 = n++ > m;
    cout << "Result of: n++>m: " << result3 << endl;
}

void Task1_4() {
    double x;
    cout << "Enter value of x: ";
    cin >> x;

    if (x < -1 || x > 1) {
        cout << "For x = " << x << " Result cant be calculated." << endl;
    }
    else {
        double result = pow(x, 4) - cos(asin(x));
        cout << "For x = " << x << ", Result: " << result << endl;
    }
}

void Task2() {
    float x1, y1;
    cout << "Enter coordinates (x1, y1): ";
    cin >> x1 >> y1;

    bool IsInArea = abs(x1) + abs(y1) <= 2;
    cout << "Point (" << x1 << "," << y1 << "): " << (IsInArea ? "TRUE" : "FALSE") << endl;
}

void Task3D(double a_d, double b_d) {
    double c_d = (a_d + b_d);
    double d_d = (3 * pow(a_d, 2) * b_d);
    double f_d = (3 * a_d * pow(b_d, 3) + pow(b_d, 2));
    double result_d = (pow(c_d, 3) - ((pow(a_d, 3) + d_d))) / f_d;
    cout << "Result of Task3Double:" << result_d << endl;
}

void Task3F(float a_f, float b_f) {
    float c_f = (a_f + b_f);
    float d_f = (3 * pow(a_f, 2) * b_f);
    float f_f = (3 * a_f * pow(b_f, 3) + pow(b_f, 2));
    float result_f = (pow(c_f, 3) - ((pow(a_f, 3) + d_f))) / f_f;
    cout << "Result of Task3Float:" << result_f << endl;
}

int main() {
    //Task1
    Task1();
    //Task1.4
    Task1_4();
    //Task2
    Task2();
    //Task3 
    Task3D(100, 0.001);
    Task3F(100, 0.001);

    return 0;
}
