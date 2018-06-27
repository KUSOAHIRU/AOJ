// 16D8104002I Nozomi Nagasaka 2018/5/30

#include<iostream>
using namespace std;

int n,q;
int A[20],m[200];

bool solve(int i,int num){
  if(i==n){
    return num==0;
  }else if(solve(i+1,num)){
    return true;
  }else if(solve(i+1,num-A[i])){
    return true;
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>A[i];
  }
  cin>>q;
  for(int j=0;j<q;j++){
    cin>>m[j];
    if(solve(0,m[j])){
      cout<<"yes\n";
    }else{
      cout<<"no\n";
    }
  }
}
