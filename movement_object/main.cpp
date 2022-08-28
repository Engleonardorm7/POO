#include <iostream>
#include "Board.h"
using namespace std;

int main(int argc, char** argv) {
	
	Board *ob1;
	int x,y,option,n;
	
	cout<<"Type the position of the object: "<<endl;
	cout<<"X Position: ";
	cin>>x;
	cout<<"Y Position: ";
	cin>>y;
	
	ob1=new Board(x,y);
	
	while(option!=5){
		
	
	cout<<"\n\t :MENU: ."<<endl;
	cout<<"1. Move up"<<endl;
	cout<<"2. Move down"<<endl;
	cout<<"3. Move right"<<endl;
	cout<<"4. Move left"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"Type an option: "<<endl;
	cin>>option;
	
	if(option>=1 && option<=4){
		cout<<"\n How many positions do you want to move? "<<endl;
		cin>>n;
	}
	switch(option){
		case 1: ob1->up(n);
		break;
		case 2: ob1->down(n);
		break;
		case 3: ob1->right(n);
		break;
		case 4: ob1->left(n);
		break;
		case 5: break;
		default: cout<<"\n Wrong option"<<endl;	
	}
	system("cls");
	cout<<"The current Position is (x,y): ("<<ob1->getx()<<","<<ob1->gety()<<")"<<endl;
	
	
	}
	return 0;
}
