#include<iostream>
#include<string>
int srno=1;
using namespace std;
class bank
{
    private:
    string cust_name;
    string passw[100];
    int acc_no;
    double balance;
    string acc_type;
    public:
    void addacc(void);
    void withdraw(void);
    void deposit(void);
    void balance_check(void);
    void statement(void);
    string ret_pass(int n)
    {
        return passw[n];
    }
};
void bank::addacc(void)
{
    acc_no=srno;
    string password;
    cout<<"Enter the Details:"<<endl;
    cout<<"Enter the Accounter Holder Name:";
    cin>>cust_name;
    cout<<"Enter the Account Type(Standard/Savings/Current/NRI):";
    cin>>acc_type;
    cout<<"Create  Account pin/password: ";
    cin>>passw[srno];
    cout<<"Re-enter Account pin/password: ";
    cin>>password;
    while(password!=passw[srno])
    {
        cout<<"The entered password do not match, Please re-enter password:";
        cin>>password;
    }
    cout<<"Enter the balance amount greater than 500:";
    cin>>balance;
    while(balance<500)
    {
        cout<<"The entered balance is less than 500, Please Enter the balance amount greater than 500:";
        cin>>balance;   
    }
    cout<<"Your Account Number:"<<acc_no<<endl;
    cout<<"New Account Created. "<<endl<<endl;
}
void bank::withdraw(void)
{
    int amt;
    cout<<"----------WITHDRAWAL----------"<<endl;
    cout<<"The Account Balance is:"<<balance<<endl;
    cout<<"Enter the amount to be withdrawn:";
    cin>>amt;
    while(balance-amt<500)
    {
        cout<<"The balance will be less than 500, Withdrawal not Possible!"<<endl;
        cout<<"Enter lesser amount:";
        cin>>amt;
    }
    if(balance-amt>500)
    {
        balance =balance -amt;
        cout<<amt<<"Rupees has been withdrawn, New Balance="<<balance<<"Rupees"<<endl;
    }
    else
    cout<<"Insuficient Balance, Withdrawal not possible!"<<endl;
}
void bank::deposit(void)
{
    int amt;
    cout<<"----------DEPOSIT----------"<<endl;
    cout<<"Enter the amount to be deposited:";
    cin>>amt;
    balance=balance+amt;
    cout<<amt<<"Rupees has been deposited, New Balance="<<balance<<"Rupees"<<endl;
}
void bank:: balance_check(void)
{
    cout<<"----------BALANCE----------"<<endl;
    cout<<"Your Account Balance is:"<<balance<<"Rupees"<<endl;
}
void bank::statement(void)
{
    cout<<"----------STATEMENT----------"<<endl;
    cout<<" Name            : "<<cust_name<<endl;
    cout<<"Account Number   : "<<acc_no<<endl;
    cout<<"Account Type     : "<<acc_type<<endl;
    cout<<"Account Balance  : "<<balance<<endl;
    cout<<"-----------------------------"<<endl;
}
int main()
{
    bank ob[100];
    string password;
    int flag=1;
    int no=0,n;
    while(flag==1)
    {
        cout<<"\n---------------BANK----------------"<<endl;
        cout<<"---SELECT THE TRANSACTION YOU NEED---"<<endl;
		cout<<"\n   1	: Add an account ";
		cout<<"\n   2	: Withdraw amount";
		cout<<"\n   3	: Deposit amount ";
		cout<<"\n   4	: Balance check";
		cout<<"\n   5	: Bank Statement ";
		cout<<"\nAny other key : EXIT";
		cout<<endl<<"Give your input : ";
		cin>>n;
        if((n>1)&&(n<=5))
        {
            cout<<"Enter your Account Number:";
            cin>>no;
	    while((no<1)||(no>srno))
            {
                cout<<"Incorrect Account Number, Please enter the correct Account Number:";
                cin>>no;
            }
	    cout<<"Enter your Password : ";
	    cin>>password;
	    while(password!=ob[no].ret_pass(no))
	    {
	    cout<<"Wrong password!, Please enter correct password : ";
		    cin>>password;
	    }
        }
        switch(n)
        {
            case 1:
            ob[srno].addacc();
            srno++;
            break;
            case 2:
            ob[no].withdraw();
            break;
            case 3:
            ob[no].deposit();
            break;
            case 4:
            ob[no].balance_check();
            break;
            case 5:
            ob[no].statement();
            break;
            default:
            cout<<"Thank You";
            flag=0; 
        }
    }
    return 0;
}
