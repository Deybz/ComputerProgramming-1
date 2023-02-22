#include <iostream>
using namespace std;
int n1, n2, sum;
double ave;

int main()
{
    sum=0;ave=0;n1=0;n2=0;
    cout<<" Enter Two Numbers to Calculate the Average "<<endl;
    cout<<" First Number: ";
    cin>> n1;
    cout<<" Second Number: ";
    cin>> n2;
    sum=n1+n2;
    ave=sum/2.0;
    cout<<"The average of the two numbers is: "<<ave<<endl;

    return 0;
}
