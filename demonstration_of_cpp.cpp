#include <iostream>
#include <vector>
using namespace std;

// This is a function that calculates the factorial
// of a number.
int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// The class to represent a shape.
class Shape {

public:
    // This virtual function is used to calculate
    // the area of a rectangle.
    virtual double getArea() = 0;
};

// This initializes the "Rectangle" class and inherits the
// attributes from the "Shape" class.
class Rectangle : public Shape {

private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}
    double getArea() {
        return width * height;
    }
};

int main() {
    // Marks the beginning adventure to learning any
    // new programming language.
    cout <<"Hello World!" << endl;

    // Declares the variables used in the program.
    int x = 5, y = 2;
    double d = 2.5;

    // This uses variable conditons and
    // prints them to the user.
    int sum = x + y;
    int product = x * y;
    double quotient = x / d;

    cout << sum << endl;
    cout << product << endl;
    cout << quotient << endl;

    // This demonstrates the use of conditional
    // statements using x and y.
    if (x < y) {
        cout << "x is less than y" << endl;
    }
    else {
        cout << "x is greater than or equal to y" << endl;
    }

    // This uses a for loop to demonstrate that this
    // program can count from 0 to x (which is 5).
    for (int i = 0; i < x; i++) {
        cout << i << " ";
    }
    cout << endl;

    // This calls and demonstrates the "f" function
    // with the "x" variable.
    int f = factorial(x);
    cout << "The factorial of " << x << " is " << f << endl;

    // This demonstrates the use of the "Rectangle"
    // class/inheritance and gets the area with the
    // given numbers.
    Rectangle r(3, 4);
    double area = r.getArea();
    cout << "The area of the rectangle is " << area << endl;

    // This initializes the first vector with values.
    vector<int> vectOne{24, 300, 102, 77};

    // This creates and intializes a second vector.
    vector<int> vectTwo;

    // This loop copies the old vector into new vector 
    // by an Iterative method.
    for (int i = 0; i < vectOne.size(); i++)
        vectTwo.push_back(vectOne[i]);

    cout << "Old vector has: ";
    for (int i = 0; i < vectOne.size(); i++)
        cout << vectOne[i] << " ";
    cout << endl;

    cout << "New vector has: ";
    for (int i = 0; i < vectTwo.size(); i++)
        cout << vectTwo[i] << " ";
    cout << endl;

    // By changing the value of vectOne, it shows
    // that the vector copy has been created.
    vectOne[0] = 400;

    cout << "First item in the old vector is: ";
    cout << vectOne[0] << endl;

    cout << "First item in the new vector is: ";
    cout << vectTwo[0] << endl;

    return 0;
}