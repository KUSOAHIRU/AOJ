

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n,in=0,fn=0;
	vector<string> st[1000000];
	string s1,s2,s3,s4;
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>s1;
		if(s1=="insert"){
			cin>>s2;
			st[in]=s2;
			in++;
			
		}else if(s1=="find"){
			cin>>s3;
			s4=st[in];
			if(s4==s3){
				in--;
				cout<<"yes\n";
			}else{
				cout<<"no\n";
			}
		}
	}
}
