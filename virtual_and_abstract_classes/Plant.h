#include <iostream>
#include "LivingBeing.h"
using namespace std;

class Plant: public LivingBeing{
		public:
		void feed(){
			cout<<"the plant feeds through photosynthesis"<<endl;
		}
};
