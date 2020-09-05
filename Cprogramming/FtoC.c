#include <stdio.h> 

/*
#define LOWER 0 
#define UPPER 300
#define STEP  20 

float CtoF(int fah); // function prototype
int main (){
	int fah = LOWER;
	double cel;
	while(fah <= UPPER){
		cel = CtoF(fah);
		printf("%3d%9.2f\n",fah,cel);
		fah+=STEP;
	}	

return 0;
}
float CtoF(int fah){
	float cel = 5 * (fah-32) / 9;
	return cel;
}


*/

int main(){
	int fah = 0;
	for(; fah <= 300; fah+=20)
		printf("%3d%9.2f\n",fah, (5.0 / 9.0) * (fah-32));
return 0;
}

