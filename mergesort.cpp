#include <iostream>
#include "mergesort.h"
int main(){
	double A[]={1,3,2};
	mergesort<double>(A,0,2);
	for(size_t t=0;t<3;t++){
		std::cout<<A[t]<<std::endl;
	}
}
