#include <iostream>
using namespace std;
int main() {
    double m,h=0;
    cin>>m>>h;
    if (m/(h*h)<18.5) {
        cout<<"Underweight"<<endl;
    }
    else if (18.5<=m/(h*h) && m/(h*h)<24) {
        cout<<"Normal"<<endl;
    }
    else {
        cout<<m/(h*h)<<endl;
        cout<<"Overweight"<<endl;
    }
    return 0;
}