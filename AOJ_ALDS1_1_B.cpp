//AOJ ALDS1_1_B.cpp 16D8104002I Nozomi Nagasaka ����] �A�J�E���gIDtanni_kudasai �v���O���~���O����c++


#include <iostream>

int gcd(int x,int y){
	if(x<y){
		std::swap(x,y);
	}
	while(y>0){
		int r=x%y;
		x=y;
		y=r;
	}
	return x;
}


int main(){
	int x,y;
	std::cin>>x>>y;
	std::cout<<gcd(x,y)<<std::endl;
	return 0;
}
			