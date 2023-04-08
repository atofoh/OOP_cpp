#include <iostream>
using namespace std;
int main() {
    float h, w;
    cout << "Height: ";
    cin >> h;
    cout << "Weight: ";
    cin >> w;

    float bmi = w / (h /100 * h / 100);
    cout << "BMI: " << bmi << endl;
    
    if(bmi < 18.5) {
        cout << "You are underweight" << endl;
    } else if(bmi < 25) {
        cout << "Your weight is normal" << endl;
    } else if(bmi < 30) {
        cout << "You are overweight" << endl;
    } else if(bmi < 40) {
        cout << "You are obese" << endl;
    } else {
        cout << "You are morbidly obese" << endl;
    }
   return 0;
}