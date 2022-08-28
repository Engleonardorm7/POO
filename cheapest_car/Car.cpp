#include <iostream>
#include "Car.h"

using namespace std;

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
