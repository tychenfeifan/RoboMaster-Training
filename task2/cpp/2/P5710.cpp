#include <iostream>
using namespace std;
int main() {
    int x=0;
    cin>>x;
    bool p1=x%2==0;
    bool p2=x>4 && x<=12;
    int a= p1 && p2;
    int b= p1 || p2;
    int c= (p1 && !p2) || (!p1 && p2);
    int d= !p1 && !p2;
    cout<<a<<" "<<b<<" "<<c<<" "<<d;
    return 0;
}