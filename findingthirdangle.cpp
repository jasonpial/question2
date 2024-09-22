#include <iostream>
using namespace std;

int determine_third_angle(int angle1, int angle2) {
    return 180 - (angle1 + angle2);
}

int main() {
    int angle1, angle2;
    
    cout << "Enter the first angle of the triangle: ";
    cin >> angle1;
    cout << "Enter the second angle of the triangle: ";
    cin >> angle2;
    
    int third_angle = determine_third_angle(angle1, angle2);
    cout << "The third angle of the triangle is: " << third_angle << " degrees." << '\n';
    
    return 0;
}


