#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

class Circle {
protected:
    double m_area;
    double m_area;
    void calcArea() {
        m_area = M_PI * radius * radius;
    }
public:
    Circle() : m_area(0), m_area(0) {}
    Circle(double radius) : m_radius (radius) {
        calcArea();
    }

    virtual void display() const {
        cout << fixed << setprecision(2);
        cout << "The ares of a circle with...\n";
        cout << "a radius of " << m_radius << "inches\n";
        cout << "has a area of " << m_area << "square inches\n\n";
    }
    double getArea() const {return m_area;}
    double getRadius() const {return m_radius;}
};
class Cylinder : public Circle {
private:
    double m_height;
    double m_volume;

    void calcVolume() {
        m_volume = m_area * m_height;
    }

public:
    Cylinder(double radius, double height) {
        :Circle(radius), m_height(height) {
        calcVolume();
    }

void display() const override {
    cout << fixed << setprecision(2);
    cout << "And the volume of a Cylinder with...\n";
    cout << "a circular end area of " << m_area << "square inches\n";
    cout << "and a height of " << m_height << " inches\n";
    cout << "has a volume of " << m_volume << "cubic inches\n";
    }
};

int main() {
    Circle c1(1.00)
    c1.display();

    Circle c2(5.25);
    c2.display();

    circle c3(3.50);
    c3.display();

    Cylinder cyl(3.50, 8.65);
    cyl.display();

    return 0;
}
