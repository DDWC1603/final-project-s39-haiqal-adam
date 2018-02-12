#include<iostream>
#include<string>

using namespace std;

class OverallCost
{
public:
	int CostRtoDays()
	{
		int NoDT;
		float  DT, AT;
		cout << "How long would you stay? (in days)" << endl;
		cin >> NoDT;

		cout << "When will you depart? (AM/PM) " << endl;
		cin >> DT;

		AT = DT + 13;
		if (DT > 12)
		{
			AT = DT - 12;
		}
		cout << "Arrival time estimated to be around =  (AM/PM) " << AT << endl;


		int CR, totc, Ctype;

		cout << "What type of car you want to rent?(per day)" << endl;
		cout << "1. 2 seaters - RM100" << endl;
		cout << "2. 4 seaters - RM300" << endl;
		cout << "3. 6 seaters - RM500" << endl;

		cin >> Ctype;
		if (Ctype == 1)
		{
			totc = 100 * NoDT;
		}
		if (Ctype == 2)
		{
			totc = 300 * NoDT;
		}
		if (Ctype == 3) {
				totc = 500 * NoDT;
		}

		cout << "Total cost of car rental is : " << totc;
		
		int TaxiTot()
		{
			int inifee, totalfee, loop, i, IT;

			cout << "For Every 1KM = RM2" << endl;
			cout << "Insert how much distance?" << endl;
			cin>>
		}

		int Get_Initialcost()
		{
			int airL, totpas, ToT;
			cout << "Choose your Airline" << endl;
			cout << "1.AirUK - RM 3500 \n 2.SkySquad - RM2800 \n 3.Star Airlines - RM4000  " << endl;
			cin >> airL;
			cout << "How many passengers?" << endl;
			cin >> totpas;
			if (airL == 1)
			{
				totpas = totpas * 3500;
			}
			if (airL == 2)
			{
				totpas = totpass * 2800;
			}
			if (airL == 3)
			{
				totpas = totpas * 4000;
			}
			else
			{
				cout << "Error" << endl;
			}

			ToT = totpas;
			cout << "The cost for your selected airline is = " << ToT << endl;

		}

	};
	
   
 
}
