#include <iostream>
#include "Car.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float Car::getPrice(){
	return price;
}

void Car::showData(){
	cout<<"Brand: "<<brand<<endl;
	cout<<"Model: "<<model<<endl;
	cout<<"Price: "<<price<<endl;
}

int Car::cheapestIndex(Car cars[],int n){
	int index=0;
	float price;
	
	price=cars[0].getPrice();
	for(int i=1;i<n;i++){
		if(cars[i].getPrice() < price){
			price = cars[i].getPrice();
			index=i;
		}
	}
	return index;
}





int main(int argc, char** argv) {
	Car *cars;
	int number_cars,cheapesindex;
	string  brand, model;
	float price;
	
	cout<<"Type the number of vehicles: ";
	cin>>number_cars;
	
	cars = new Car[number_cars]; //Array
	
	for(int i=0;i<number_cars;i++){
		cout<<"Type the vehicle data "<<(i+1)<<": "<<endl;
		cin.ignore();
		cout<<"Type the brand: ";
		getline(cin,brand);
		cout<<"Type the model: ";
		getline(cin,model);
		cout<<"Type the price: ";
		cin>>price;
		
		cars[i]=Car(brand,model,price);

	}
	system("cls");
		cheapesindex = Car::cheapestIndex(cars,number_cars);
		cout<<"\n The cheapest car is: "<<endl;
		(cars+cheapesindex)->showData();
	//cars[cheapesindex].showData();
		delete[] cars;
	
	return 0;
}
