#include<iostream>
#include<iomanip>
using namespace std;
double q, a, p, e, cs, f;

/* Note:
q = Quiz
a = Activity
p = Project
e = Exam
cs = Class Standing
f = Final Grade
*/

int main()
{
    q=0;a=0;p=0;e=0;cs=0;f=0;

    cout<<"\t\tSAMPLE ACTIVITY";
            cout<<"\n\n";
    cout<<"\t\tQuiz \t\t:\t ";
        cin>>q;
            cout<<"\n";
    cout<<"\t\tActivity \t:\t ";
        cin>>a;
            cout<<"\n";
    cout<<"\t\tProject \t:\t ";
        cin>>p;
            cout<<"\n";
    cout<<"\t\tExam \t\t:\t ";
        cin>>e;
            cout<<"\n";
    cout<<"\t\tClass Standing \t:\t ";
        cin>>cs;

    cout<<"\n\t\t--------------------------------\n\n";
    f=(q*0.20)+(a*0.15)+(p*0.25)+(e*0.30)+(cs*0.10);
    cout<<fixed<<setprecision(2)<<"\t\tFinal Grade \t:\t "<<f;
    cout<<"\n\n";
    cout<<"\n\t------------------------------------------------\n\n";
    cout<<"\t\tOWN APPLICATION";
                cout<<"\n\n";
    cout<<"\t\tQuiz \t\t:\t ";
        cin>>q;
            cout<<"\n";
    cout<<"\t\tActivity \t:\t ";
        cin>>a;
            cout<<"\n";
    cout<<"\t\tProject \t:\t ";
        cin>>p;
            cout<<"\n";
    cout<<"\t\tExam \t\t:\t ";
        cin>>e;
            cout<<"\n";
    cout<<"\t\tClass Standing \t:\t ";
        cin>>cs;

    cout<<"\n\t\t--------------------------------\n\n";
    f=(q*0.20)+(a*0.15)+(p*0.25)+(e*0.30)+(cs*0.10);
    cout<<fixed<<setprecision(1)<<"\t\tFinal Grade \t:\t "<<f;
    cout<<"\n\n";

    return 0;
}
