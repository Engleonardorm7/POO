#include <iostream>

using namespace std;

class Board{
	private:
		int x;
		int y;
	
	public:
	 
		Board(int x, int y){
			this->x=x;
			this->y=y;		
		}
	
	void up(int);
	void down(int);
	void right(int);
	void left(int);
	
	int getx();
	int gety();
	
	
};
