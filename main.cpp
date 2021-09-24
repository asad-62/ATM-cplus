#include <iostream>

using namespace std;
void menu(){
cout<<"***********MENU***********"<<endl;
cout<<"1.Check Balance"<<endl;
cout<<"2.Deposit"<<endl;
cout<<"3.withdraw"<<endl;
cout<<"4.Close All"<<endl;
cout<<"***********END***********"<<endl;
}

int main()
{

    int option;
    double balance=500;
do{
    menu();
    cout<<"Enter the option"<<endl;
    cin>>option;
    system("cls");
    switch(option){
case 1:
    cout<<"Balance is "<<balance<<"$"<<endl;
    break;
case 2 :
    cout<<"Deposit Amount"<<endl;
    double depositmoney;
    cin>>depositmoney;
    balance+=depositmoney;
    break;
case 3:
    cout<<"Withdraw Amount"<<endl;
    double withdrawAmount;
    cin>>withdrawAmount;
    if (withdrawAmount<=balance)
        balance-=withdrawAmount;
    else
        cout<<"Not enough Balance"<<endl;

break;
}
} while(option!=4);



    return 0;
}
