

#include <iostream>
#include <cmath>

bool isprime(int x){
	if(x==2){
		return true;
	}
	if(x<2 || x%2==0){
		return false;
	}
	int i=3;
	while(i<=sqrt(x)){
		if(x%i==0){
			return false;
		}
		i=i+2;
	}
	return true;
}

int main(){
	int n;
	int result=0;
	std::cin>>n;
	int A[n];
	for(int i=0;i<n;i++){
		std::cin>>A[i];
	}
	for(int j=0;j<n;j++){
			if(isprime(A[j])==true){
				result++;
			}
	}
	std::cout<<result<<std::endl;
	return 0;
}
			
