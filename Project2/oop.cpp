
#include "oop.h"

#include <iostream>

using namespace std;

class Point {
private:
    double x, y, z;

public:
    Point() : x(0.0), y(0.0), z(0.0) {}
    Point(double x_val, double y_val, double z_val) : x(x_val), y(y_val), z(z_val) {}
    void inputCoordinates() {
        cout << "Enter x coordinate: ";
        cin >> x;
        cout << "Enter y coordinate: ";
        cin >> y;
        cout << "Enter z coordinate: ";
        cin >> z;
    }
    void displayCoordinates() {
        cout << "Coordinates of the point are: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point point;
    point.inputCoordinates();
    point.displayCoordinates();

    return 0;
}
