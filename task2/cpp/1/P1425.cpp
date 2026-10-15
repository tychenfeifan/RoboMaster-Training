#include <iostream>
using namespace std;
int main() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int start=a*60+b;
    int end=c*60+d;
    int time=end-start;
    int e=time/60;
    int f=time%60;
    cout<<e<<" "<<f<<endl;
    return 0;
}