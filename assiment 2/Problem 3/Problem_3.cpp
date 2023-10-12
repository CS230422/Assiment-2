#include <iostream>
using namespace std;

int main() {
    
    int const CP_credit = 6;
    int const AE_credit = 3;
    int const Calclus_credit = 3;
    
    float cp_grade = 0;
    float ae_grade = 0;
    float calclus_grade = 0;
    
    cout <<"Please enter CP grade: ";
    cin >> cp_grade;
    
    cout <<"Please enter AE grade: ";
    cin >> ae_grade;
    
    cout <<"Please enter Calclus grade: ";
    cin >> calclus_grade;
    
    float GPA = 0;
    GPA = ((CP_credit * cp_grade) + (AE_credit * ae_grade) + (Calclus_credit * calclus_grade)) / (CP_credit + AE_credit + Calclus_credit);
    
    cout << GPA;
    
    
    return 0;
    
}

