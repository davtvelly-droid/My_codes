#include <iostream>
using namespace std;
#include<iomanip>
using std::setw;
class StudentPortal

{
	protected:
	string name;
	long RegNumber;
	string email;
	long password;
	long confPassword;
	int num;
	
	public:
	 
	 StudentPortal(string name = "0", long RegNumber = 0,int num = 0, string email = "0", long password = 0, long confPassword = 0)
	 {
		 this->name = name;
		 this->RegNumber = RegNumber;
		 this->num = num;
		 this->email = email;
		 this->password = password;
		 this->confPassword = confPassword;
	 }
	 
	 
		 void studentReg()
	 {
		 cout<<"Enter 1 to register or 2 to log in\n";// get user input
		 cin>>num;// get either 1 or 2
		 
		 if(num == 1)
		 {
			 cout<<"enter full name\n";
			 cin>>name;// get student name 
			 
			 cout<<"\nEnter registration number\n";
			 cin>>RegNumber;
			 
			 cout<<"\nGive a valid email address\n";
			 cin>>email;//get user email address
			 
			 cout<<"\ncreate a strong password\n";
			 cin>>password;
			 
			 cout<<"\nconfirm your password\n";
			 cin>>confPassword;
			 
			 if(password != confPassword)
			 {
			 cout<<"\npasswords do not match\n";
			 
			 cout<<"Enter 1 to correct\n";
			 
		     }
		     else{
				 cout<<"\nYou are logged in\n";}
		     
		     cout<<"Enter 2 to log in to your portal\n";
		     cin>>num;
		    }
		    cin>>num;
	       
	}
};

			 
		 
		 class LogIn: public StudentPortal
		 
		 { 
			 protected:
			 string emailAddress;
			 long secretword;
			 
			 public:
			 LogIn(string emailAddress = "0", long secretword = 0)
			 {
				 this->emailAddress = emailAddress;
				 this->secretword = secretword;
			 }
			 
			 
		void loggingIn()
			 {
			 if(num == 2)
			 {
				 cout<<"\nEnter your email address\n";
				 cin>>emailAddress; //give email address to log in
				 if(email != emailAddress)
				 {
					 cout<<"wrong email address\n";
					 cout<<"\nenter 2 to correct\n";
					 cin>>num;
				 }
				 
				 cout<<"\nenter password\n";
				 cin>>secretword;
				
				 if(password != secretword)// confirming if the password is correct
				 { cout<<"\nWrong password\n";
				   cout<<"\nenter 2 to correct\n";
				   cin>>num;
				   }
				   
				  }
				 }
			 };
			 int main()
			 
			 {
				 cout<<setw(10)<<"       WELCOME TO STUDENT PORTAL\n"<<setw(10);
				 cout<<setw(10)<<"    ______________________________\n"<<setw(10);
				 
				 cout<<setw(10)<<"           1  Register\n"<<setw(10);
				 cout<<setw(10)<<"         ...................\n"<<setw(10);
				 
				 cout<<setw(10)<<"\n         2   Log In Here\n"<<setw(10);
				 cout<<setw(10)<<"         .....................\n"<<setw(10)<<endl;
				 
				 LogIn student;
				 student.studentReg();
				 student.loggingIn();
				 
				 return 0;
			 }
				 
				 
			 
			 
			 
			 


