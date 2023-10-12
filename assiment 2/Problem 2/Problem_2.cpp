#include <iostream>
using namespace std;

int main() {
    
    float num = 0;
    const float Inch = 39.3701;
    
    cout << "Please enter length: ";
    cin >> num;
    
    float Inch1 = num * Inch;
    
    cout << Inch1 << endl;
    
    return 0;
}
