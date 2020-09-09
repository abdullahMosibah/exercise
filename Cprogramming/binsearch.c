#include <stdio.h>
#define length 10
int binsearch(int target, int array[], int lenght); 
int main(){ 
	int target = 30 ;
	int target_array[length] = {10,20,30,40,50,60,70,80,90,100}; 
	//printf("enter target number : \n");
	//scanf("%d", &target);
	
	int result = binsearch(target, target_array,length);
	printf("%d\n", result);
	
}

int binsearch(int target, int array[], int lenght){
	
	int high,low,mid;
	low = 0;
	high = lenght -1;	
	mid = (low+high) / 2;
	while( low < high ){
	 
	mid = (low+high) / 2;
	if( target< array[mid]){
		high = mid;
		}
	else if (target > array[mid]) {
		low = mid;
		}
	else{
		return mid;	

	}
	}
	return 0;
}
