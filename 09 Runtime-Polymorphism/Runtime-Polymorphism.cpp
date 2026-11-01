#include <iostream.h>
#include <conio.h>
#include <graphics.h>

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }
};
class Circle : public Shape
{
public:
    void draw()
    {
        circle(150, 150, 50);
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        rectangle(300, 100, 500, 200);
        cout << "Drawing Rectangle" << endl;
    }
};

void main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    Shape s1;
    Circle c1;
    Rectangle r1;
    Shape *str;

    str = &c1;
    str->draw();

    str = &r1;
    str->draw();

    getch();
    closegraph();
}

