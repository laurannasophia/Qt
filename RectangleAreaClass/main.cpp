#include <iostream>

using namespace std;

class shape {
protected:
    double width, height;
public:
    void setW();
    void setH();
    double getW() const;
    double getH() const;
};

class rectangle: public shape {
public:
    rectangle() {width = 0, height = 0;}
    rectangle(double param) {width = param;}
    double area() const
    {return(width * height);}
};

void shape::setW()
{
    cout << "Input width" << endl;
    cin >> width;
}

void shape::setH()
{
    cout << "Input height" << endl;
    cin >> height;
}

double shape::getW() const
{
    return width;
}

double shape::getH() const
{
    return height;
}

int main()
{
    rectangle y;
    y.setW();
    y.setH();

    cout << "The width of the rectangle is " << y.getW() << " and the height is " << y.getH() << endl;

    cout << "The area of the rectangle is " << y.area() << endl;

    return 0;
}
