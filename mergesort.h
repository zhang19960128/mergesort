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
//			std::cout<<"place="<<place<<std::endl;
//			std::cout<<"tleft="<<tleft<<std::endl;
//			std::cout<<"tright="<<tright<<std::endl;
			if(tleft==((q-p)+1)){
				A[place]=right[tright];
				tright++;
				place++;
				continue;
			}
			if(tright==(r-q)){
				A[place]=left[tleft];
				tleft++;
				place++;
				continue;
			}
			if(left[tleft]<right[tright]){
				A[place]=left[tleft];
				tleft++;
				place++;
			}
			else{
				A[place]=right[tright];
				tright++;
    		place++;
			}
	}
		delete[] left;
		delete[] right;
	}
	else{
	};
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
