#include <bits/stdc++.h>
using namespace std;

class Rectangle
{
public:
    double length, width;

    Rectangle()
    {
        length = 0.0;
        width = 0.0;
    }

    void setLength(double l)
    {
        length = l;
    }

    void setWidth(double w)
    {
        width = w;
    }

    double perimeter()
    {
        return (length + width) * 2.0;
    }

    double area()
    {
        return length * width;
    }

    int sameArea(Rectangle r)
    {
        double rArea = (r.length * r.width);
        if (area() == rArea)
            return 1;
        else
            return 0;
    }
};

int main()
{
    Rectangle a, b;
    a.setLength(5.0);
    a.setWidth(2.5);
    b.setLength(5.0);
    b.setWidth(18.9);

    cout << "Are a and b of the same area? " << endl;
    if (a.sameArea(b) == 1)
        cout << "Yes, they are of the same area" << endl
             << endl;
    else
        cout << "No, they have different areas" << endl
             << endl;

    a.setLength(15.0);
    a.setWidth(6.3);

    cout << "Area of a = " << a.area() << endl;
    cout << "Perimeter of a = " << a.perimeter() << endl
         << endl;
    cout << "Area of b = " << b.area() << endl;
    cout << "Perimeter of b = " << b.perimeter() << endl
         << endl;

    cout << "Are a and b of the same area? " << endl;
    if (a.sameArea(b) == 1)
        cout << "Yes, they are of the same area" << endl
             << endl;
    else
        cout << "No, they have different areas" << endl
             << endl;
}