#include<iostream>
using namespace std;
int main(){
	double income;
	double tax_rate;
	double tax_paid;
	cout<<"enter your income in the computer"<<endl;
	cin>>income;
	if (income<30000){
		tax_paid=income;
		cout<<"No tax paid income is: "<<tax_paid<<endl;
	}
	else if (income>=30000 && income<=44000){
		tax_paid=income;
		cout<<"no tax under this price "<<endl;
	}else if (income>=45000 && income<=55000){
		tax_rate=0.25; 
		tax_paid=income*tax_rate;
		cout<<"tax paid is: "<<tax_paid<<endl;
	}else if (income>=56000 && income<=65000){
		tax_rate=tax_rate+1;
		tax_paid=income *tax_rate;
		cout<<"tax paid is: "<<tax_paid<<endl;
	}else if (income>65000 && income<75000){
		tax_rate=tax_rate+1;
		tax_paid=income * tax_rate;
		cout<<"tax paid is: "<<tax_paid<<endl;
	
	}else if (income>75000){
		tax_rate=tax_rate+1;
		tax_paid=income * tax_rate;
		cout<<"tax paid is: "<<tax_paid<<endl;
	}
}
