#include <iostream>
using namespace std;

float height_converter(int h){
    float height_cf;
    height_cf = h * 0.0328084;
     
    return height_cf;
}

int main(){
    float h;
    cout << "Enter your height: " << endl;
    cin >> h;

    float answer = height_converter(h);
    cout << answer << endl;
    
    return 0;

}