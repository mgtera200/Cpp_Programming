/*
 * Eng.Mostafa Tera
 * Created on Tue May 21 2024
 */
#include <iostream>

// Interface for objects that can be drawn
class Drawable
{
public:
    // Pure virtual function for drawing
    virtual void draw() = 0;
};

// Base class for geometric shapes
class Shape
{
public:
    // Constructor for Shape
    Shape()
    {
        std::cout << "Shape Constructor" << std::endl;
    }
};

// Derived class for Circle, inherits from Shape and implements Drawable
class Circle : public Shape, public Drawable 
{
public:
    // Constructor for Circle
    Circle()
    {
        std::cout << "Circle Constructor" << std::endl;
    }

    // Implementation of draw function for Circle
    void draw() override
    {
        std::cout << "Circle is drawable" << std::endl;
    }
};

// Derived class for Rectangle, inherits from Shape and implements Drawable
class Rectangle : public Shape, public Drawable
{
public:
    // Constructor for Rectangle
    Rectangle()
    {
        std::cout << "Rectangle Constructor" << std::endl;
    }

    // Implementation of draw function for Rectangle
    void draw() override
    {
        std::cout << "Rectangle is drawable" << std::endl;
    }
};

// Derived class for Triangle, inherits from Shape and implements Drawable
class Triangle : public Shape, public Drawable
{
public:
    // Constructor for Triangle
    Triangle()
    {
        std::cout << "Triangle Constructor" << std::endl;
    }

    // Implementation of draw function for Triangle
    void draw() override
    {
        std::cout << "Triangle is drawable" << std::endl;
    }
};

// Function to draw a Drawable object
void drawable(Drawable& ptr)
{
    ptr.draw();
}

int main(int argc, const char **argv) {
    // Instantiate Circle, Triangle, and Rectangle objects
    Circle circle;
    Triangle triangle;
    Rectangle rectangle;
    
    // Draw each shape
    drawable(circle);
    drawable(triangle);
    drawable(rectangle);

    return 0;
}
