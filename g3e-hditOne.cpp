#include<iostream>
#include<iomanip>
using namespace std;

//declaration VAT calculating function "prototype function"
float vatCalculating(float amount);
int main (){

	//declaration of variables
	int userMainChoice, subMenuChoice;;
	//output the choice to the user in "SIMUPESA" application
	cout<<"KARIBU KWENYE HUDUMA YA SIMUPESA\n"<<"CHAGUA\n";
	cout<<"1-> KUTOA PESA\n"<<"2-> KUWEKA PESA\n"<<"3-> KUTUMA PESA\n"<<"4-> KUNUNUA MUDA WA MAONGEZI\n"<<"5-> KULIPA BILI\n"
	<<"6-> KUNUNUA KIFURUSHI\n"<<"7-> KUKOPA\n\n"<<"CHAGUO LAKO NI:  ";
	//allow user to enter the choice
	returnToEnterChoice:cin>> userMainChoice;
	cout<<endl;
	//checking the entered menu choice
	switch(userMainChoice)
	{
		case 1:
			cout << "under construction....\n";
			break;
		case 2:
			cout << "under construction....\n";
			break;
		case 3:
			cout << "under construction....\n";
			break;
		case 4:
			cout << "under construction....\n";
			break;
		case 5:
			cout<<"KARIBU KWENYE HUDUMA YA KULIPIA BILI\n"<<"CHAGUA HUDUMA\n";
			cout<<"1-> TANESCO - LUKU\n"<<"2-> DAWASCO - MAJI\n"<<"3-> POLISI - FAINI\n"
			<<"4-> MWENDOKASI - NAULI\n"<<"CHAGUO LANGU NI:  ";

			//allow user to repeate the choice again
			returnToEnterSubMenuChoice: cin>> subMenuChoice;
			cout<<endl;
			//checking the entered sub menu choice
			switch(subMenuChoice)
			{
				case 1:
					cout << "under construction....\n";
					break;
				case 2:
					//declaration of variables for storing user/customer balance
					float userBalance;
					float userAmount;
					//initialize 3400 balance for user/customer
					userBalance = 3400;
					cout<<"KARIBU DAWASCO ULIPE BILI YA MAJI\n";
					enterAmount:cout<<"Ingiza kiasi cha pesa (TSH):  ";
					cin >> userAmount;
					cout<<endl;
					//checking if the purchased amount is greater than or equal to 305.00
					if(userAmount >= 305.00)
					{
						if(userAmount >= userBalance )
						{
							//displaying Error message to the if entered greater amount than balance
							cout<<"SAMAHANI, HUWEZI KULIPA MAJI YA TSH "<<userAmount<<"\nSALIO LAKO HALITOSHELEZI\n";
							cout<<"SALIO LAKO NI TSH "<<userBalance<<endl<<endl;
							//allow user to enter again amount
							goto enterAmount;
						}else{
							//cout<<"ndio hapa";
							float fixedServiceCharge = 205;
							float newBalance = userAmount + fixedServiceCharge + vatCalculating(userAmount);
							
							cout<<"HUDUMA IMEKAMILIKA\n"<<"UMEFANIKIWA KULIPA MAJI YA TSH "<<userAmount<<endl;
							cout<<"GHARAMA YA VAT NI TSH "<<fixed<<setprecision(2)<<vatCalculating(userAmount)<<endl;
							cout<<"GHARAMA YA SERVICE CHARGE NI TSH "<<fixedServiceCharge<<endl;
							cout<<"SALIO LAKO JIPYA NI TSH "<<fixed<<setprecision(2)<<userBalance - newBalance<<endl;
							cout<<"AHSANTE KWA KUTUMIA HUDUMA YETU";
						}

					}else{
						//displaying the Error message to the user interface
						cout<<"SAMAHANI, HUWEZI KULIPA CHINI YA TSH 305.00\n";
						goto enterAmount;
					};

					break;
				case 3:
					cout << "under construction....\n";
					break;
					cout << "under construction....\n";
				case 4:
					cout << "under construction....\n";
					break;
				default:
					cout<<"SAMAHANI, TUMESHINDWA KUITAMBUA HUDUMA\n"<<endl<<"CHAGUO LANGU NI : ";
					//allow user to enter another choice from the sub menu
					goto returnToEnterSubMenuChoice;
					break;

			}
			cout<<endl;
			break;
		case 6:
			cout << "under construction....\n";
			break;
		case 7:
			cout << "under construction....\n";
			break;
		default:
			//Error message that will to the user if is entered wrong choice
			cout<<"CHAGUO HALIJATAMBULIKA, SAMAHANI RUDIA TENA\n"<<"CHAGUO LANGU NI:  ";
			//ask again user to enter another choice from the main menu
			goto returnToEnterChoice;

			break;


	}

}

//body of VAT function
 float vatCalculating (float amount){
 	float addVatPercentage;
 	float vat = 0.18;
 	addVatPercentage = amount * vat;
 	//adding fixed service charge which is 205
 	//vatAmmount = addVatPercentage + charge;

 	//return vat with it's charge added
 	return addVatPercentage;
 }




