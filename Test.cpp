#include <iostream>
using namespace std;
int n1, n2, sum, ave;

int main()
{
    cout<<" Enter Two Numbers to Calculate the Average "<<endl;
    cout<<" First Number: ";
    cin>> n1;
    cout<<" First Number: ";
    cin>> n2;
    sum=n1+n2;
    ave=sum/2;
    cout<<"The average of the two numbers is: "<<ave<<endl;

    return 0;
}
