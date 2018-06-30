
#include<iostream>

using namespace std;

int main(){
  int n,a,b,c;
  int adj[100][100]={0};
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b;
    for(int j=0;j<b;j++){
      cin>>c;
      adj[i][c-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j)cout<<' ';
      cout<<adj[i][j];
    }
    cout<<endl;
  }
}
      
