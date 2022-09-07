#include <iostream>
using namespace std;
int main()  //program that print the total number of days in a month number entered by user
{  
	int month;
	char year;
	cout<<"\t\t\t\t\"TOTAL NUMBER OF DAYS IN A MONTH\""<<endl<<endl;
	cout<<"\t\tENTER THE MONTH NUMBER: "; cin>>month; cout<<endl;
	if (month==1)
	{
		cout<<"\n\n\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else if (month==2)
	{
		cout<<"\n\t\tIS IT A LEAP YEAR? (y/n) : "; cin>>year; 
		if (year=='y'||year=='Y') // we use nested if else because of another condition
		{
		    cout<<"\n\n\t\t\tTHE NUMBER OF DAYS ARE 29";
		}
		else
		{
			cout<<"\n\n\t\t\tTHE NUMBER OF DAYS ARE 28";
		}
	}
	else if (month==3)
	{
	    cout<<"\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else if (month==4)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 30";
	}
	else if (month==5)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else if (month==6)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 30";
	}
	else if (month==7)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else if (month==8)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else if (month==9)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 30";
	}
	else if (month==10)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else if (month==11)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 30";
	}
	else if (month==12)
	{
		cout<<"\t\t\tTHE NUMBER OF DAYS ARE 31";
	}
	else
	{
		cout<<"\t\t\tINVALID MONTH NUMBER";
	}
	
	return 0;
}
