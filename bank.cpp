
#include <iostream>
using namespace std;
#include<iomanip>
using std::setw;

class Bankloan

{
	protected:
	
	float l_loanAmount;
	float r_rateOfinterest;
	int n_numberOfyears;
	int m_num;
	string s_name;
	long t_account_number;
	
	public:
	
	Bankloan(float l = 0, float r = 0, int n = 0, int m = 0,string s = "0", long t = 0)
	{
		l_loanAmount = l;
		r_rateOfinterest = r;
		n_numberOfyears = n;
		m_num = m;
		s_name = s;
		t_account_number = t;
	 }
		void calcloan()
		{
		
			cin>>m_num;
			if(m_num == 1)
			{
				
		cout<<"        Dear customer, welcome to borrower's platform\n";
		cout<<"       .................................................\n"<<endl;
		cout<<"\n   Give your full name: ";
        cin>>s_name>>s_name;
        cout<<"\n Provide your Bank Account Number: ";
        cin>>t_account_number;
			cout<<"           Enter loan amount:    ";
			cin>>l_loanAmount;
			cout<<"           Enter number of years:  ";
			cin>>n_numberOfyears;
			
			if(l_loanAmount > 500000.00)
			{
				r_rateOfinterest = 0.15;// per year
				}
else if(l_loanAmount >= 100000.00 || l_loanAmount == 500000.00)
{
	r_rateOfinterest = 0.1; // per year
	}
	
	else{
		r_rateOfinterest = 0.05;}//per year
			}
  }
};
  
  class Interest: public Bankloan
  {
	  protected:
	  
	  float total_interest;
	  float month_intallment;
	  float totalPayable;
	  
	  
	  
	  public:
	  
	  void Printinterest(float total_interest,float month_installment, float totalPayable)
	  {
		  this->totalPayable = totalPayable;
		  this->total_interest = total_interest;
		  this->month_intallment = month_intallment;
		  
		  
		  
		  }
		  
		  void output_interest()
		  
		  {
			  if(m_num == 1)
			{
				
  
			  
 total_interest = n_numberOfyears * l_loanAmount * r_rateOfinterest;
 cout<<"\n        total interest =   "<<total_interest<<endl;
			  
 totalPayable = total_interest + l_loanAmount;
 cout<<"\n           total loan amount payable at the end of "<<n_numberOfyears<<"  years is:  "<<totalPayable<<endl;
 month_intallment = totalPayable / n_numberOfyears;
 cout<<"\n        monthly installment =   "<<month_intallment<<endl;
 
  cout<<"\n  Enter 3 to print your transaction receipt: ";
  cin>>m_num;
  if(m_num == 3)
  {
	  cout<<"\n    KENYA COMMERCIAL BANK TRANSACTION RECEIPT "<<endl;
	  cout<<"\n    %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% "<<endl;
	  cout<<"\n    Name of the client: "<<s_name<<endl;
	  cout<<"\n    Client's Account number: "<<t_account_number<<endl;
	  cout<<"\n    Amount applying for: "<<l_loanAmount<<endl;
	  cout<<"\n    Total Amount Payable: "<<totalPayable<<endl;
	  cout<<"\n    Total monthly installment: "<<month_intallment<<endl;
	  cout<<"\n     Thank you for banking with us "<<endl;
	  }
			  }
		  }
	  
	  };
	  
	  class Amountdeposit: public Interest
	  {
		  protected:
		  
		  float amount_deposited;
		  float interest_rate;
		  
		  public:
		  
		  Amountdeposit(float amount_deposited = 0, float interest_rate = 0)
		  {
			  this->amount_deposited = amount_deposited;
			  this->interest_rate = interest_rate;
		  }
		  
		  void depositAmount()
		  {
			  if(m_num == 2)
			  {
				  cout<<"          Dear customer, welcome to depositor's platform\n";
				  cout<<"        ...................................................\n"<<endl;
			  cout<<" \n           Enter mount deposited:    "; // customer fix deposit amount
			  cin>>amount_deposited;
			  cout<<"\n            Enter number of years:     ";
			  cin>>n_numberOfyears;
			  
			  if(amount_deposited > 500000.00)
			  {
				  interest_rate = 0.25; // per year
				  
				  }else if(amount_deposited >= 100000.00 || amount_deposited == 500000.00)
				  {
					  interest_rate = 0.2; //'per year
				  }
				  else{
					  interest_rate = 0.15; // per year
					  }
	             }
			 }
		  
		  };
		  class Withdrawal: public Amountdeposit
		  {
			  private:
			  float t_totalwithdrawal;
			  float a_interest;
			  long c_account_number;
			  string n_name;
			  
			  public:
			   Withdrawal( float t = 0, float a = 0, long c = 0, string n = "0")
			   {
				   t_totalwithdrawal = t;
				   a_interest = a;
				   c_account_number = c;
				   n_name = n;
			   }
			   void withdrawAll()
			   {
				   if(m_num == 2)
				   {
					   
	cout<<setw(10)<<"\n         Kindly provide your full name: "<<setw(10);  
	cin>>n_name>>n_name;
	cout<<setw(10)<<"\n\n        Give your Bank account number: "<<setw(10); 
	cin>>c_account_number; 
	cout<<setw(10)<<"\n      ======================================== "<<setw(10);
				  
 a_interest = interest_rate * n_numberOfyears * amount_deposited;
 cout<<"\n        Total interest at the end of  "
     <<n_numberOfyears<<"  years is: "<<a_interest<<endl;
				  
 t_totalwithdrawal =  a_interest + amount_deposited;
 cout<<"\n         Total withdrawal at the end of  "
     <<n_numberOfyears<<"  years is: "<<t_totalwithdrawal<<endl;
  
  cout<<"\n      Press 3 to print your receipt\n";
  cin>>m_num;
  
  if(m_num == 3)
  {
  
 cout<<setw(10)<<"\n        KENYA COMMERCIAL BANK TRANSACTION RECEIPT\n"<<setw(10);
 cout<<setw(10)<<"\n       ///////////////////////////////////////////// \n"<<setw(10)<<endl;
 
 cout<<setw(10)<<"/n       Client's Name: "<<n_name<<setw(10)<<endl;
 cout<<setw(10)<<"/n       Account Number: "<<c_account_number<<setw(10)<<endl;
 
  
 cout<<setw(10)<<"\n       Amount Deposited:  "
     <<amount_deposited<<setw(10)<<endl;
 cout<<setw(10)<<"\n       Number Of years before maturity   "
     <<n_numberOfyears<< " years "<<setw(10)<<endl;
 cout<<setw(10)<<"\n       Total interest at the end of "
     <<n_numberOfyears<<" years: "<<a_interest<<setw(10)<<endl;
 cout<<setw(10)<<"\n       Total withdrawal at the end of "
     <<n_numberOfyears<<" years: "<<t_totalwithdrawal<<setw(10)<<endl;
 cout<<setw(10)<<"\n\n     Thank you for banking with us "<<setw(10)<<endl;
 }
				  
				   }
			   }
			   
			  };
			  
			  int main()
			  {
				  
				  
				  cout<<setw(10)<<"         WELCOME TO OUR BANKING CUSTOMER SERVICE PLATFORM\n"<<setw(10);
				  cout<<setw(10)<<"      ______________________________________________________\n"<<setw(10);
				  
				  cout<<setw(10)<<"\n      1. Borrower Platform\n"<<setw(10);
				  cout<<setw(10)<<"\n   ...........................\n"<<setw(10);
				  
				  cout<<setw(10)<<"\n      2. Depositor Platform\n"<<setw(10);
				  cout<<setw(10)<<"\n    ............................\n"<<setw(10);
				  
				  cout<<setw(10)<<"\n      Press 1 or 2 basing on your need please"<<setw(10)<<endl;
				  
				  
				  Withdrawal amount;
				  
				  amount.calcloan();
				  amount.output_interest();
				  amount.depositAmount();
				  amount.withdrawAll();
				  } 
 
		 
		 
		 
	
	
