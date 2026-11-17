#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double dis(double,double,double,double);

int main(){
    double x1,x2,x3,y1,y2,y3,total;
    cin >> x1 >> y1 >>x2>>y2>>x3>>y3;
    total=dis(x1,y1,x2,y2)+dis(x2,y2,x3,y3)+dis(x1,y1,x3,y3);
    cout << fixed << setprecision(2);
    cout<<total<<endl;
    return 0;
}

double dis(double a,double b,double c,double d)
{
    return sqrt(pow((a-c),2)+pow((b-d),2));
}