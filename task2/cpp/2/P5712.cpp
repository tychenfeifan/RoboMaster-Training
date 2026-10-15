#include <iostream>
using namespace std;
int main() {
    int x=0;
    cin>>x;
    switch (x) {
        case 0:
            cout<<"Today, I ate 0 apple."<<endl;
            break;
        case 1:
            cout<<"Today, I ate 1 apple."<<endl;
            break;
        default:
            cout<<"Today, I ate "<<x<<" apples."<<endl;
    }
    return 0;
}