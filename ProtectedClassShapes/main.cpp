#include <iostream>

using namespace std;

class shape{
protected:
    double width, height, diameter;
public:
    void setW();
    void setH();
    void setD();
    double getW() const;
    double getH() const;
    double getD() const;
};

class ellipse: public shape {
public:
    double area()
    {return(3.14*width*height);}
};

class circle: public ellipse {
public:
    double area()
    {return(3.14*(diameter*diameter));}
};

void shape::setW()
{
    cout << "Give the width of the ellipse" << endl;
    cin >> width;
}

void shape::setH()
{
    cout << "Give the height of the ellipse" << endl;
    cin >> height;
}

void shape::setD()
{
    cout << "Give the diameter of the circle" << endl;
    cin >> diameter;
}

double shape::getW() const
{
    return width;
}

double shape::getH() const
{
    return height;
}

double shape::getD() const
{
    return diameter;
}

int main()
{
    ellipse x;
    circle y;
    x.setW();
    x.setH();
    y.setD();

    cout << "The width of the ellipse is " << x.getW() << " and the height is " << x.getH() << endl;
    cout << "The area of the ellipse is " << x.area() << endl;

    cout << "The diameter of the circle is " << y.getD() << endl;
    cout << "The area of the circle is " << y.area() << endl;

    return 0;
}
