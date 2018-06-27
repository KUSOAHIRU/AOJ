//16D8104002I Nozomi Nagasaka 2018/5/16

#include<iostream>
using namespace std;
int main(){
  int n,m,max=0;
  while(1){
    max=0;
    bool flag=false;
    cin>>n>>m;
    if(n==0&&m==0){
      break;
    }
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
  
    for(int j=0;j<n;j++){
      for(int k=0;k<n;k++){
	  if(max<a[j]+a[k] && a[j]+a[k]<=m&&j!=k){
	    max=a[j]+a[k];
	    flag=true;
	  }
      }
    }
    if(flag==false){
      cout<<"NONE"<<endl;
    }else{
      cout<<max<<endl;
    }
  }
}
  
	
  
    
