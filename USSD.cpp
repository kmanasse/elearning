#include<iostream>
using namespace std;
void Place_order(){
	
	int order;
	string destination;
	string name;
	cout<<"enter your order"<<endl;
	cin>>order;
	cout<<"enter destination"<<endl;
	cin>>destination;
	cout<<"dear customer "<<name<<endl;
	cout<<"your order "<<order<<" is "<<endl;
	cout<<"reaching destination "<<destination<<endl;
	cout<< "in 30 min"<<endl;
}
void view_menu(){
	cout<<"CB fast food menu of today "<<endl;
	
	cout<<"1: double beef burger with fries: 6500 FRW"<<endl;
	cout<<"2: chicken wrap with fries aside: 5500 FRW"<<endl;
	cout<<"3: shawarma with chicken in it : 5500 FRW"<<endl;
	cout<<"4: croque monsieur "<<endl;
	
	
}
int main(){
	//welcome message
	int code;
	string name;
	cout<<"enter ussd code "<<endl;
	cin>>code;
	cout<<"enter your name"<<endl;
	cin>>name;
	if (code == 123){
		cout<<"welcome to CB fast food"<<endl;
		view_menu();
		Place_order();
		

	}else{
		cout<<"invalid code entered"<<endl;
		
	}
}
