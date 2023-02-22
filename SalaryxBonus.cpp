#include <iostream>
#include <iomanip>
using namespace std;
double t, r, s, b;

/* NOTE:
t=hours worked
r=rate per hour
s=salary
b=bonus
*/

int main()
{
    cout<<"\n\n\n";
    t=0;r=0;s=0;b=0;
    cout<<"Enter Hours of Work: ";
    cin>>t;
    cout<<"Enter Rate per Hour: ";
    cin>>r;
    s=t*r;
    cout<<fixed<<setprecision(2)<<"Your Salary is: "<<s<<endl;
    b=s*0.25;
    cout<<"Your Bonus is: "<<b<<endl;

    return 0;
}
