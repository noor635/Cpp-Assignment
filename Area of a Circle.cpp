#include <iostream>
using namespace std;

float calculateArea(float radius) {
    const float PI = 3.14159;
    return PI * radius * radius;
}

int main() {
    float radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float area = calculateArea(radius);
    cout << "Area of the circle is: " << area << endl;

    return 0;
}
