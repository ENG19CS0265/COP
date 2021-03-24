#include <iostream>
#include<math.h>
#include<iomanip>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
        double a,ga,gb,gc;
        cin>>a>>ga>>gb>>gc;
        double b=a*ga/gb;
        double c=a*ga/gc;
        double s=(a+b+c)/2;
        double area=sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<setprecision(3)<<fixed<<area<<" ";
        double r=(a*b*c)/(4*area);
        double gh;
        if(r*r-(a*a+b*b+c*c)/9>0)  gh=sqrt(r*r-(a*a+b*b+c*c)/9)*2;
        cout<<gh<<endl;
    }
    return 0
