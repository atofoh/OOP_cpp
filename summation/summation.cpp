#include <iostream>
using namespace std;

int summation(int n){
    int sum = 0;
    for (int i=1; i<=n; i++){
        sum += i;
        cout << sum;
}
    return sum;
}


int main(){
    int n;
    cout << "Enter the n: " << endl;
    cin >> n;

    int final = summation(n);
    cout << "The Sum of the first numbers is: " << final <<endl;
    cin >> final;

    return 0;

}