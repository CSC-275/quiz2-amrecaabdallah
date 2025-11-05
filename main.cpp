#include <iostream>
#include <cmath>
using namespace std;

class Circle {
private:
    double m_radius;
protected:
    double m_area;
    void calcArea(double radius) {
        m_area = M_PI * radius * radius;
    }
public:
    Circle() {
        m_area = M_PI;
        m_radius = M_PI;
    }
    Circle(double radius) {
        m_radius = radius;
        calcArea(radius);
    }
};
class Cylinder : public Circle {
private:
    double m_height;
    double m_volume;
    double calcVolume(double radius, double height) {
        return M_PI * radius * radius * height;
    }
public:
    Cylinder(double radius, double height) {
        :Circle(radius), m_height(height) {
        m_volume = calcVolume(m_radius, m_height);
}

void display() override {
    cout << "Cylinder circular and area: " << m_volume << endl;
    cout << "Cylinder volume:" << m_volume << endl;
    }
};

int main() {
    Circle c1, c2(5.25);
    c1.display();
    c2.display();
    Circle *cl1 = new Cylinder(3.5,8.65);
    cl1->display();

    delete c11;
    return 0;
}
