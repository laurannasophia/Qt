#include <iostream>

using namespace std;

class rectangle
{
    double x, y;
public:
    rectangle() {x = 0, y = 0;} // oletusmuodostin
    rectangle(int param) {x = param;} // parametrillinen muodostin
    rectangle(const rectangle &olio) {x = olio.x;} // kopiointimuodostin
    void setW();
    void setH();
    double getW() const;
    double getH() const;
    double area() const; // laskee suorakolmion alan
    int compare(rectangle, rectangle) const;
};

void rectangle::setW() // asettaa suorakulmion leveyden
{
    cout << "Input width:" << endl;
    cin >> x;
}

void rectangle::setH() // asettaa suorakulmion korkeuden
{
    cout << "Input height:" << endl;
    cin >> y;
}

double rectangle::getW() const
{
    return x;
}

double rectangle::getH() const
{
    return y;
}

double rectangle::area() const
{
    return x*y;
}

int rectangle::compare(rectangle s, rectangle t) const
{
    if (s.area() > t.area())
        return 1;
    else if (s.area() < t.area())
        return 0;
    else
        return -1;
}

int main()
{
    rectangle s, t;
    s.setW();
    s.setH();

    cout << "The width is " << s.getW() << " and the height is " << s.getH() << endl;

    t.setW();
    t.setH();

    cout << "The width is " << t.getW() << " and the height is " << t.getH() << endl;

    cout << "The area of the first rectangle is " << s.area() << " and the area of the second rectangle is " << t.area() << endl;

    cout << s.compare(s, t) << endl;
    return 0;
}
