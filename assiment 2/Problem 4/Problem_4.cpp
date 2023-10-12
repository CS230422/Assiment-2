#include <iostream>
using namespace std;

int main() {
    
    const float Pi = 3.14;
    double Radius = 0;
    
    cout << "Please enter the radius of circle: ";
    cin >> Radius;
    
    double Area = 0;
    Area = Pi * Radius * Radius;
    
    cout << "Area of circle is: " << endl;
    cout << Area << endl;
    
    return 0;
}
