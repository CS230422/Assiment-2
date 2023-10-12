#include <iostream>
using namespace std;

int main() {
    
    int Days = 0;
    
    cout << "Enter days: ";
    cin >> Days;
    
    int Year = 0;
    Year = Days / 365;
    
    int Month = 0;
    Month = (Days % 365) / 30;
    
    int Reminder_days = 0;
    Reminder_days = Days - (( Year * 365 )+( Month * 30 ));
    
    cout << Year << "Years" << endl;
    cout << Month << "Month" << endl;
    cout << Reminder_days << "Days" << endl;
    
    
    return 0;
}
