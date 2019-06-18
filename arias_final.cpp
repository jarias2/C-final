//NAME: Josimar Arias
//DATE: 05/07/2018
//ASSIGNMENT: Final 
//SUMMARY: Banking Program


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <conio.h>

using namespace std;

ofstream ofs("Arias.txt");

// global variables
string myname = "Josimar Arias ";
string dat = "05/07/2018 ";
string crnum = "CIS-2541-001 ";
string lab = " Final ";
string endof = "EOF Message";
string summ = " Banking Program ";
// formating variables
string pipe = "|";
string lnu = "________________________________________"
"________________________________________";
string lnu2 = "|_______________________________________"
"_______________________________________|";
string lnu3 = "|___________________|___________________|"
"___________________|__________________|";
string lnu4 = "|___________|_____________|____________|"
"_____________|____________|____________|";

// variables for this program only

string paga2 = "1.) Payment ";
string enopt4 = "Enter your Option : ";
string d5 = "1.) Deposit ";
string w1 = "2.) Withdraw ";
string bck1 = "3.) Back to Menu ";
string bck3 = "2.) Back to Menu ";
string opci1 = "Enter your Option : ";
string dia2 = "Date";
string sc9 = " ";
string ckhe1 = "Checkin";
string sv2 = "Saving";
string ira8 = "IRA";
string mrtg2 = "Mortgage";
string credt2 = "Credit Card";
string tot = "Total";
string gtot = "Grand Total";
string cpt9 = "Choose Option for Transaction";
string kdiel92 = "dep";
string qwhat2 = "wdl";
string paga8 = "pay";
string edd8 = "Enter Date :";
string dine0 = "Enter amount of money :";
string eror4 = "Error";
string entus3 = " Enter Your Selection : ";
string ckacu6 = "1.) Checking ACCOUNT";
string svcut4 = "2.) Saving ACCCOUNT";
string irac8 = "3.) IRA ACCCOUNT";
string mgoe3 = "4.) Mortgage Payment";
string ccpay2 = "5.) Credit Card Payment";
string ttcut4 = "6.) Total for all Account";
string qut7 = "7.) Quit";
string err = "ERROR -- Invalid Entery ";
string t21 = "\t\t\t";
string jkl1 = "s/balacnce";
string njks12 = "Please enter a number: ";
string rigj12 = "Please enter valid input.";
string yral12 = "please enter the starting balance for savings account: ";
string ohlj14 = "please enter the starting balance for IRA account: ";
string eurk2 = "please enter the starting balance for credit card account: ";
string hgnb75 = "please enter the starting balance for checking account: ";
string jksi12 = "please e nter the starting balance for Mortgage account: ";
string date;
int lit = 0;

double chkb32 = 0;
double aorar42 = 0;
double IraBal = 0;
double Mor = 0;
double credit = 0;

//********************************************
//*This is the start of the   Class fuction  *
//********************************************

class bacunt5
{

public:


	void cdeposit0()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		
		cin.ignore();
		getline(cin, date);
		cout << string(5, '\t') << dine0;
		
		while (!(cin >> dineo3))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << eror4 << endl;
		}

		while (dineo3 < 0 || dineo3 > 5000000)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << rigj12 << endl;
		}

		chkb32 = chkb32 + dineo3;

		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(9) << dineo3
			<< sc9 << kdiel92 << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//******************************************************************************************
	//* this function creates a checking deposite menu that asks for date and amount of money  *
	//******************************************************************************************
	void chkw2()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		cin.ignore();
		getline(cin, date);

		cout << string(5, '\t') << dine0;
		while (!(cin >> dineo3))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << eror4 << endl;
		}
		while (dineo3 < 0 || dineo3 > 5000000)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << rigj12 << endl;
		}

		chkb32 = chkb32 - dineo3;
		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(9) << dineo3
			<< sc9 << qwhat2 << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//******************************************************************************************
	//* this function creates a checking withdraw menu that asks for date and amount of money  *
	//******************************************************************************************
	void chkd5()
	{
		ofs << pipe << left << setw(11) << tot
			<< pipe << right << setw(10) << chkb32
			<< right << setw(4) << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//******************************************************************************************
	//* this function creates a savings withdraw menu that asks for date and amount of money  *
	//******************************************************************************************
	void svdi9e()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		cin.ignore();
		getline(cin, date);
		cout << string(5, '\t') << dine0;
		cin >> dineo3;
		aorar42 = aorar42 + dineo3;

		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(14)
			<< pipe << right << setw(8) << dineo3
			<< sc9 << kdiel92 << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//*****************************************************************************************
	//* this function creates a savings withdraw menu that asks for date and amount of money  *
	//*****************************************************************************************
	void aroara8()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		cin.ignore();
		getline(cin, date);
		cout << string(5, '\t') << dine0;
		cin >> dineo3;
		aorar42 = aorar42 - dineo3;

		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(14)
			<< pipe << right << setw(8) << dineo3
			<< sc9 << qwhat2 << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//***********************************************************
	//* this function creates the display for the savings option*
	//***********************************************************
	void svedis3()
	{
		ofs << pipe << left << setw(11) << tot
			<< pipe << right << setw(14)
			<< pipe << right << setw(9) << aorar42
			<< right << setw(4) << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//***********************************************************************************************************
	//* this function creates a IRA deposite stores and creates a  menu that asks for date and amount of money  *
	//***********************************************************************************************************
	void irdp53()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		cin.ignore();
		getline(cin, date);
		cout << string(5, '\t') << dine0;
		cin >> dineo3;
		IraBal = IraBal + dineo3;

		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(9) << dineo3
			<< sc9 << kdiel92 << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//***********************************************************
	//* this function creates the display for the savings option*
	//***********************************************************
	void irdish4()
	{
		ofs << pipe << left << setw(11) << tot
			<< pipe << right << setw(14)
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(9) << IraBal
			<< right << setw(5) << pipe
			<< right << setw(13) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//**********************************************
	//* displays options for withdraw or dipposite *
	//**********************************************
	void MortgagePay()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		cin.ignore();
		getline(cin, date);
		cout << string(5, '\t') << dine0;
		cin >> dineo3;
		Mor = Mor - dineo3;

		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(14)
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(8) << dineo3
			<< sc9 << paga8 << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//***********************************************************
	//* this function creates the display for the savings option*
	//***********************************************************	
	void morDisp()
	{
		ofs << pipe << left << setw(11) << tot
			<< pipe << right << setw(14)
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(9) << Mor
			<< right << setw(4) << pipe
			<< right << setw(13) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//**********************************************
	//* displays options for withdraw or dipposite *
	//**********************************************
	void crpy27()
	{
		int dineo3;
		cout << string(5, '\t') << edd8;
		cin.ignore();
		getline(cin, date);
		cout << string(5, '\t') << dine0;
		cin >> dineo3;
		credit = credit - dineo3;

		ofs << pipe << left << setw(11) << date
			<< pipe << right << setw(14)
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(8) << dineo3
			<< " " << paga8 << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//***********************************************************
	//* this function creates the display for the savings option*
	//***********************************************************	
	void crdi9()
	{
		ofs << pipe << left << setw(11) << tot
			<< pipe << right << setw(14)
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(14) << pipe
			<< right << setw(13) << pipe
			<< right << setw(9) << credit
			<< right << setw(4) << pipe
			<< endl;
		ofs << lnu4 << endl;
	}
	//******************************************************************
	//* this function creates the grand total display for your txt file*
	//******************************************************************	
	void gtot29()
	{
		ofs << pipe << left << setw(11) << gtot
			<< pipe
			<< right << setw(9) << chkb32
			<< right << setw(5) << pipe
			<< right << setw(9) << aorar42
			<< right << setw(4) << pipe
			<< right << setw(9) << IraBal
			<< right << setw(5) << pipe
			<< right << setw(9) << Mor
			<< right << setw(4) << pipe
			<< right << setw(9) << credit
			<< right << setw(4) << pipe
			<< endl;
		ofs << lnu4 << endl;

	}
};
//******************************************
//* This function creates a line with Pipe *
//******************************************
void pipefunc()
{
	ofs << lnu2 << endl;
}
//****************************************************
//*This function creates a  Display title to the ofs *
//****************************************************

void title()
{
	ofs << pipe
		<< right << setw(11) << dia2 << pipe
		<< right << setw(13) << ckhe1 << pipe
		<< right << setw(12) << sv2 << pipe
		<< right << setw(13) << ira8 << pipe
		<< right << setw(12) << mrtg2 << pipe
		<< right << setw(12) << credt2 << pipe
		<< endl;
	ofs << lnu4 << endl;
}
//******************************************************************
//*   This function creates a header to the for the .txt file     **
//******************************************************************
void hdr()
{
	ofs << lnu << endl;
	ofs << pipe
		<< left << setw(20) << myname
		<< left << setw(20) << dat
		<< left << setw(20) << crnum
		<< left << setw(18) << lab
		<< pipe << endl;
}
// **************************************
// * Summary of what is printed on page *
// **************************************

void ftr()
{
	ofs << pipe << left << setw(78) << summ << pipe << endl;
}

// ***********************
// * End of file message *
// ***********************
void eof()
{
	ofs << pipe
		<< left << setw(15) << endof
		<< left << setw(15) << myname
		<< left << setw(15) << dat
		<< left << setw(15) << crnum
		<< left << setw(18) << lab
		<< pipe << endl;
}
//**************************************
//*this is the  menu options for user  *
//* to choose from		               *
//**************************************
void menu()
{
	cout << string(10, '\n');
	cout << string(5, '\t') << cpt9 << endl;
	cout << string(5, '\t') << ckacu6 << endl;
	cout << string(5, '\t') << svcut4 << endl;
	cout << string(5, '\t') << irac8 << endl;
	cout << string(5, '\t') << mgoe3 << endl;
	cout << string(5, '\t') << ccpay2 << endl;
	cout << string(5, '\t') << ttcut4 << endl;
	cout << string(5, '\t') << qut7 << endl;
	cout << string(5, '\t') << entus3;

	while (!(cin >> lit))
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << string(5, '\t') << eror4 << endl;
	}
	cout << endl;

	while (lit != 7)
	{
		switch (lit)
		{
			//*******************************************************************************
			//* Case 1 diplays menu , depoit, withdraw and back to menu , enter your options*
			//*******************************************************************************	
		case 1:
		{
			bacunt5 c1;

			while (lit != 3)
			{
				cout << string(5, '\t') << d5 << endl;
				cout << string(5, '\t') << w1 << endl;
				cout << string(5, '\t') << bck1 << endl;
				cout << string(5, '\t') << opci1;
				while (!(cin >> lit))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << string(5, '\t') << eror4 << endl;
				}
				switch (lit)
				{
				case 1:
					c1.cdeposit0();
					c1.chkd5();
					break;
				case 2:
				{
					c1.chkw2();
					c1.chkd5();
				}
				break;
				case 3:
					break;
				default:
					cout << string(5, '\t') << err << endl;
					break;
					//*******************************************************************************
					//* Case 3 diplays menu , depoit, withdraw and back to menu , enter your options*
					//*******************************************************************************	
					cout << string(5, '\t') << d5 << endl;
					cout << string(5, '\t') << w1 << endl;
					cout << string(5, '\t') << bck1 << endl;
					cout << string(5, '\t') << opci1;
					cin >> lit;
				}
			}
			break;

		}
		case 2:
		{
			bacunt5 c2;
			//*******************************************************************************
			//* Case 2 diplays menu , depoit, withdraw and back to menu , enter your options*
			//*******************************************************************************
			while (lit != 3)
			{
				cout << string(5, '\t') << d5 << endl;
				cout << string(5, '\t') << w1 << endl;
				cout << string(5, '\t') << bck1 << endl;
				cout << string(5, '\t') << opci1;
				cin >> lit;
				switch (lit)
				{
				case 1:
					c2.svdi9e();
					c2.svedis3();
					break;
				case 2:
					c2.aroara8();
					c2.svedis3();
					break;
				case 3:
					break;
				default:
					cout << err << endl;
					break;
					//*******************************************************************************
					//* Case 3 diplays menu , depoit, withdraw and back to menu , enter your options*
					//*******************************************************************************
					cout << string(5, '\t') << d5 << endl;
					cout << string(5, '\t') << w1 << endl;
					cout << string(5, '\t') << bck1 << endl;
					cout << string(5, '\t') << opci1;
					while (!(cin >> lit))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << string(5, '\t') << eror4 << endl;
					}
				}
			}
			break;
		}
		case 3:
		{
			bacunt5 c3;

			while (lit != 2)
			{
				//*******************************************************************************
				//* Case 3 diplays menu , depoit, withdraw and back to menu , enter your options*
				//*******************************************************************************				
				cout << string(5, '\t') << d5 << endl;
				cout << string(5, '\t') << bck3 << endl;
				cout << string(5, '\t') << opci1;
				while (!(cin >> lit))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << string(5, '\t') << eror4 << endl;
				}
				while (lit < 0 || lit > 5000000)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << rigj12 << endl;
				}

				switch (lit)
				{
				case 1:
					c3.irdp53();
					c3.irdish4();
					break;
				case 2:
					break;
				default:
					cout << string(5, '\t') << err << endl;
					break;
					//*******************************************************************************
					//* Case 2 diplays menu , depoit, withdraw and back to menu , enter your options*
					//*******************************************************************************
					cout << string(5, '\t') << d5 << endl;
					cout << string(5, '\t') << bck3 << endl;
					cout << string(5, '\t') << opci1;
					while (!(cin >> lit))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << string(5, '\t') << eror4 << endl;
					}
					while (lit < 0 || lit > 5000000)
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << rigj12 << endl;
					}
				}
			}
			break;
		}
		case 4:
		{
			bacunt5 c4;

			while (lit != 2)
			{
				//*******************************************************************************
				//* Case 4 diplays menu , depoit, withdraw and back to menu , enter your options*
				//*******************************************************************************							
				cout << string(5, '\t') << paga2 << endl;
				cout << string(5, '\t') << bck3 << endl;
				cout << string(5, '\t') << enopt4;
				cin >> lit;
				switch (lit)
				{
				case 1:
					c4.MortgagePay();
					c4.morDisp();
					break;
				case 2:
					break;
				default:
					cout << string(5, '\t') << err << endl;
					break;
					//*******************************************************************************
					//* Case 2 diplays menu , depoit, withdraw and back to menu , enter your options*
					//*******************************************************************************
					cout << string(5, '\t') << paga2 << endl;
					cout << string(5, '\t') << bck3 << endl;
					cout << string(5, '\t') << enopt4;
					while (!(cin >> lit))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << string(5, '\t') << eror4 << endl;
					}
					while (lit < 0 || lit > 5000000)
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << rigj12 << endl;
					}
				}
			}
			break;
		}
		case 5:
		{
			bacunt5 c5;

			while (lit != 2)
			{
				//*******************************************************************************
				//* Case 5 diplays menu , depoit, withdraw and back to menu , enter your options*
				//*******************************************************************************			
				cout << string(5, '\t') << paga2 << endl;
				cout << string(5, '\t') << bck3 << endl;
				cout << string(5, '\t') << enopt4;
				while (!(cin >> lit))
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << string(5, '\t') << eror4 << endl;
				}
				while (lit < 0 || lit > 5000000)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					cout << rigj12 << endl;
				}
				switch (lit)
				{
				case 1:
					c5.crpy27();
					c5.crdi9();
					break;
				case 2:
					break;
				default:
					cout << string(5, '\t') << err << endl;
					break;

					cout << string(5, '\t') << paga2 << endl;
					cout << string(5, '\t') << bck3 << endl;
					cout << string(5, '\t') << enopt4;
					while (!(cin >> lit))
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << string(5, '\t') << eror4 << endl;
					}

					while (lit< 0 || lit > 5000000)
					{
						cin.clear();
						cin.ignore(numeric_limits<streamsize>::max(), '\n');
						cout << rigj12 << endl;
					}
				}
			}
			break;
		}
		case 6:
		{
			bacunt5 c6;
			c6.gtot29();
			break;
		}
		case 7:
		{
			break;
		}
		default:
			cout << string(5, '\t') << err << endl;
			break;
		}
		//**************************************
		//*this is the  menu options for user  *
		//* to choose from		               *
		//**************************************		
		cout << string(10, '\n');
		cout << string(5, '\t') << cpt9 << endl;
		cout << string(5, '\t') << ckacu6 << endl;
		cout << string(5, '\t') << svcut4 << endl;
		cout << string(5, '\t') << irac8 << endl;
		cout << string(5, '\t') << mgoe3 << endl;
		cout << string(5, '\t') << ccpay2 << endl;
		cout << string(5, '\t') << ttcut4 << endl;
		cout << string(5, '\t') << qut7 << endl;
		cout << string(5, '\t') << entus3;
		while (!(cin >> lit))
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << eror4 << endl;
		}
		while (lit < 0 || lit > 5000000)
		{
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << rigj12 << endl;
		}
		cout << endl;
	}
}
void stori3(double& chkb32,
	double& aorar42,
	double& IraBal,
	double& Mor,
	double& credit)
{
	cout << string(5, '\n');
	cout << string(5, '\t') << hgnb75;

	cin >> chkb32;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		chkb32 = -1;
		cout << endl;
		cout << njks12;
		cin >> chkb32;

	}

	cout << string(5, '\t') << yral12;
	cin >> aorar42;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		aorar42 = -1;
		cout << endl;
		cout << njks12;
		cin >> aorar42;

	}

	cout << string(5, '\t') << ohlj14;

	cin >> IraBal;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		IraBal = -1;

		cout << endl;
		cout << njks12;
		cin >> IraBal;

	}

	cout << string(5, '\t') << jksi12;

	cin >> Mor;

	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		Mor = -1;
		cout << endl;
		cout << njks12;
		cin >> Mor;

	}
	cout << string(5, '\t') << eurk2;
	cin >> credit;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		credit = -1;
		cout << endl;
		cout << njks12;
		cin >> credit;

	}

}
void head(double chkb32,
	double aorar42,
	double IraBal,
	double Mor,
	double credit)
{
	ofs << pipe << left << setw(11)
		<< jkl1
		<< pipe << right << setw(13)
		<< chkb32
		<< pipe << right << setw(12)
		<< aorar42
		<< pipe << right << setw(13)
		<< IraBal
		<< pipe << right << setw(12)
		<< Mor
		<< pipe << right << setw(12)
		<< credit
		<< pipe
		<< endl;
	ofs << lnu4 << endl;
}

//*************************************************
//*  This is the   Main Functions to the program  *
//*************************************************
int main()
{

	hdr();
	pipefunc();
	pipefunc();
	title();
	stori3(chkb32,
		aorar42,
		IraBal,
		Mor,
		credit);
	head(chkb32,
		aorar42,
		IraBal,
		Mor,
		credit);
	menu();
	pipefunc();
	ftr();
	pipefunc();
	pipefunc();
	eof();
	pipefunc();
	ofs.close();
	return 0;

}
