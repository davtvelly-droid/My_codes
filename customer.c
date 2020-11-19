

#include <stdio.h>
#include <string.h>
struct Customer{
	char name[15];
	char occupation[10];
	int id;
	
	
};
struct DOB
	 {
		 int year;
		 int month;
		 int day;
	 };



int main()
{
	struct  Customer c1;
	
	struct DOB date;
	
	date.year = 1920;
	date.month = 12;
	date. day = 5;
	

	
	strcpy(c1.name,"David Ochieng");
	strcpy(c1.occupation,"Receiptionist");
	c1.id = 1236541;
	
	printf("customer name: %s\n", c1.name);
	printf("customer occupation:  %s\n", c1.occupation);
	printf("customer Id:  %d\n", c1.id);
	
	printf("date of admission %d ",date.day);
	printf("   %d", date.month);
	printf("   %d", date.year);
	
	
	return 0;
}
	

	



