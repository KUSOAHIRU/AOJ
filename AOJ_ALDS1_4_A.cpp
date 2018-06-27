//16D8104002I Nozomi Nagasaka 2018/5/15

#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> s(10000,0);
	vector<int> t(500,0);
	int n,q,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	cin>>q;
	for(int j=0;j<q;j++){
			cin>>t[j];
	}
	for(int i=0;i<q;i++){
		for(int j=0;j<n;j++){
			if(t[i]==s[j]){
				cnt++;
				break;
			}
		}
	}cout<<cnt<<endl;
}