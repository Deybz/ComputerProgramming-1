#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

char choice;
int accNum;
double amount, balance = 10000;

void display();
void transaction();
double deposit(double balance, double amount);
double withdraw(double balance, double amount);
double Balance(double balance);
int main()
{
    transaction();
    return 0;
}

void display()
{
     cout<<"\n\t\t-------------------------------------------------------";
    cout<<"\n\t\t     =============================================";
    cout<<"\n\t\t\t      Choose what type of transaction";
    cout<<"  \n\t\t     =============================================\n";
    cout<<"\n\t\t-------------------------------------------------------";
    cout<<"\n\t\t\t       =======================\n";
    cout<<"  \t\t\t       | >1<  DEPOSIT         |\n";
    cout<<"  \t\t\t       | >2<  WITHDRAW        |\n";
    cout<<"  \t\t\t       | >3<  BALANCE INQUIRY |\n";
    cout<<"  \t\t\t       =======================\n";
    cout<<"\t\t-------------------------------------------------------\n";
    return;
}

void transaction()
{
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\t\t\t     =============================";
    cout<<"\n\t\t\t\tAccount Number : ";
    cin>>accNum;
    cout<<"\t\t\t     =============================";
    cout<<"\n\t\t\t---------------------------------------\n\n\t\t\t";
    system("pause");
    //employeeCode=toupper(employeeCode);

system("cls");

    display();
    cout<<"\n\t\t    Answer: ";
    cin >> choice;

    switch(choice)
    {
        case '1':
        {
            system("cls");
            cout << "Amount: ";
            cin >> amount;
            deposit(balance, amount);
            Balance(balance);
        }
        break;
        case '2':
        {
            system("cls");
            cout << "Amount: ";
            cin >> amount;
            withdraw(balance, amount);
            Balance(balance);
                if(amount > balance)
                {
                    cout << "Invalid Balance";
                }
                    else
                    {
                        withdraw(balance, amount);
                        Balance(balance);
                    }
        }
        break;
        case '3':
        {
            system("cls");
            Balance(balance);
        }
        break;
        default:
        {

        }
        break;
    }
return;
}

double deposit(double b, double a)
{
    balance = b + amount;

    return balance;
}

double withdraw(double b, double a)
{
    balance = balance - amount;

    return balance;
}

double Balance(double b)
{
    cout << "Remaining Balance: " << balance;
return balance;
}




