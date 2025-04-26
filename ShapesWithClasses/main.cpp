#include <iostream>

using namespace std;

class shape {
protected:
    double width, height, diameter;
public:
    void setW();
    void setH();
    void setP();
    void setD();
    double getW() const;
    double getH() const;
    double getP() const;
    double getD();
};

class rectangle: public shape {
public:
    rectangle() {width = 0, height = 0;}
    rectangle(double param) {width = param;}
    double area() const
    {return(width * height);}
};

class square: public rectangle {
public:
    double area()
    {return(width * width);}
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
    cout << "Enter a width for the rectangle" << endl;
    cin >> width;
}

void shape::setH()
{
    cout << "Enter a height for the rectangle" << endl;
    cin >> height;
}

void shape::setP()
{
    cout << "Enter the length of a side for the square" << endl;
    cin >> width;
}

void shape::setD()
{
    cout << "Enter the diameter of the circle" << endl;
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

double shape::getP() const
{
    return width;
}

double shape::getD()
{
    return diameter;
}

int main()
{
    rectangle y;
    square x;
    ellipse z;
    circle u;

    y.setW();
    y.setH();
    x.setP();
    z.setW();
    z.setH();
    u.setD();

    cout << "The width of the rectangle is " << y.getW() << " and the height is " << y.getH() << endl;
    cout << "The area of the rectangle is " << y.area() << endl;

    cout << "The length of the squares side is " << x.getP() << endl;
    cout << "The area of the square is " << x.area() << endl;

    cout << "The length of the ellipse is " << z.getW() << " and the height is " << z.getH() << endl;
    cout << "The area of the ellipse is " << z.area() << endl;

    cout << "The diameter of the circle is " << u.getD() << endl;
    cout << "The area of the circle is " << u.area() << endl;

    return 0;
}
