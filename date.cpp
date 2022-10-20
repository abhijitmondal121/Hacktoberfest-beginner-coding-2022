#include<iostream>
using namespace std;
class Date {
private:
	int month;
	int day;
	int year;
public:
	
	void setDay(int d)
	{
		day = d;
	}
	void setMonth(int m)
	{
		month = m;
	}
	void setyear(int ye)
	{
		year = ye;
	}
	int getday()
	{
		return day;
	}
	int getmonth()
	{
		return month;
	}
	int getyear()
	{
		return year;
	}

	void display()
	{
		cout << month << "/" << day << "/" << year << endl;
	}
	void display2()
	{
		if (month == 1)
		{
			cout << "January" << " " << day << "," << year << endl;

		}
		else if (month == 2)
		{
			cout << "February" << " " << day << "," << year << endl;
		}
		else if (month == 3)
		{
			cout << "March" << " " << day << "," << year << endl;

		}
		else if (month == 4)
		{
			cout << "April" << " " << day << "," << year << endl;

		}
		else if (month == 5)
		{
			cout << "May" << " " << day << "," << year << endl;

		}
		else if (month == 6)
		{
			cout << "June" << " " << day << "," << year << endl;

		}
		else if (month == 7)
		{
			cout << "July" << " " << day << "," << year << endl;

		}
		else if (month == 8)
		{
			cout << "August" << " " << day << "," << year << endl;

		}
		else if (month == 9)
		{
			cout << "September" << " " << day << "," << year << endl;

		}
		else if (month == 10)
		{
			cout << "October" << " " << day << "," << year << endl;

		}
		else if (month == 11)
		{
			cout << "November" << " " << day << ", " << year << endl;

		}
		else if (month == 12)
		{
			cout << "December" << " " << day << "," << year << endl;

		}
		else
		{
			cout << " error! month count is wrong " << endl;
		}
	}
		void display3()
		{
			if (month == 1)
			{
				cout << day << " " << "January" << " " << year << endl;

			}
			else if (month == 2)
			{
				cout << day << " " << "February" << " " << year << endl;
			}
			else if (month == 3)
			{
				cout << day << " " << "March" << " " << year << endl;

			}
			else if (month == 4)
			{
				cout << day << " " << "April" << " " << year << endl;

			}
			else if (month == 5)
			{
				cout << "May" << " " << day << "," << year << endl;

			}
			else if (month == 6)
			{
				cout << day << " " << "June" << " " << year << endl;

			}
			else if (month == 7)
			{
				cout << day << " " << "July" << " " << year << endl;

			}
			else if (month == 8)
			{
				cout << day << " " << "August" << " " << year << endl;

			}
			else if (month == 9)
			{
				cout << day << " " << "September" << " " << year << endl;

			}
			else if (month == 10)
			{
				cout << day << " " << "October" << " " << year << endl;

			}
			else if (month == 11)
			{
				cout << day << " " << "November" << " " << year << endl;

			}
			else if (month == 12)
			{
				cout << day << " " << "December" << " " << year << endl;

			}
			else
			{
				cout << " error! month count is wrong " << endl;
			}
		}

	
};
int main()
{
	Date calender;
	int da = 0;
	cout << " Enter the date : ";
	cin >> da;
	while (da > 31||da < 1)
	{
		cout << " error! enter again" << endl;
		cin >> da;
	}


	
	int mon=0;
	
	cout << " Enter the month number : " << endl;
	cin >> mon;
	while (mon > 12 || mon < 1)
	{
		cout << "Error!enter again" << endl;
		cin >> mon;
	}
	int y;
	cout << " Enter the year : ";
	cin >> y;
	
	calender.setDay(da);
	
	calender.setMonth(mon);

	calender.setyear(y);
	cout << endl;
	calender.display();
	cout << endl;
	calender.display2();
	cout << endl;
	calender.display3();
	cout << endl;
	return 0;

}