#include <iostream>
using namespace std;
int main()
{
	float   Hoursworked, Regularpay, Grosspay, HourlyPayRate, Overtimepay;

	cout << "Please Enter Hourly Pay Rate  " << endl;
	cin >> HourlyPayRate;
	cout << "Please Enter Hours worked in a week" << endl;
	cin >> Hoursworked;
	Regularpay = Hoursworked*HourlyPayRate;
	Overtimepay = 1.5*HourlyPayRate;
	Grosspay = Regularpay + Overtimepay;

	if (Hoursworked <= 40)
	{
		cout << "your pay is  Regular Pay " << Regularpay << endl;
	}

	else if (Hoursworked > 40)
	{
		cout << "You have worked overtime too " << endl;
		cout << "Your overtime pay is:"<< Overtimepay << endl;
		cout << "your total pay is :" << Grosspay << "Rs" << endl;
	}
	else

		cout << "You have not worked in this week";

	return 0;
}
