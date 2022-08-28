#include <iostream>
#include "Board.h"
using namespace std;

void Board::up(int n){
	y+=n;
}
void Board::down(int n){
	y-=n;
}
void Board::right(int n){
	x+=n;
}
void Board::left(int n){
	x-=n;
}
int Board::getx(){

	return x;
}
int Board::gety(){
	return y;
}
