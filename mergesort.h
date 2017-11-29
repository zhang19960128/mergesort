#include <iostream>
#include <new>
#include <math.h>
template<typename T>
void merge(T*A,int p,int q,int r){
	if(q!=r){//everything happened only when q!=r, if q==r, nothing happened
		T* left=new T[q-p+1];
		T* right=new T[r-q];
		for(size_t t=p;t<=q;t++){
			left[t-p]=A[t];
		}
		for(size_t t=q+1;t<=r;t++){
			right[t-q-1]=A[t];
		}
		size_t tleft=0;
		size_t tright=0;
		size_t place=p;
		while(place<=r){
			if(tleft==q+1){
				A[place]=right[tright];
				tright++;
	//			std::cout<<"place:"<<place<<std::endl;
				place++;
				continue;
			}
			if(tright==r+1){
				A[place]=left[tleft];
				tleft++;
	//			std::cout<<"place:"<<place<<std::endl;
				place++;
				continue;
			}
			if(left[tleft]<right[tright]){
				A[place]=left[tleft];//if temporary left is smaller, let temporty left sit here;
				tleft++;
//				std::cout<<"place:"<<place<<std::endl;
				place++;
			}
			else{
				A[place]=right[tright];
				tright++;
//				std::cout<<"place:"<<place<<std::endl;
				place++;
			}
		}
		delete[] left;
		delete[] right;
	}
}
template<typename T>
void mergesort(T*A,int start,int end){
	int t;
	if(start<end){
		t=floor((start+end)/2);
		mergesort(A,start,t);
		mergesort(A,t+1,end);
		merge(A,start,t,end);
	}
}
