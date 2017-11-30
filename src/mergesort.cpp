#include <iostream>
#include "mergesort.h"
int main(){
	double A[]={11,10,5,4,6,8,12,10};
	mergesort<double>(A,0,7);
	for(size_t t=0;t<8;t++){
		std::cout<<A[t]<<" ";
	}
	std::cout<<std::endl;
}
