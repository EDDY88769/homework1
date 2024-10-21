#include<iostream>
#include<cstdlib>
using namespace std;
int ackm(int m,int n){
		if(m==0){
			return n+1;
		}
		else if(m>0 && n==0){
			return ackm(m-1,1);
		}
		else if(m>0 && n>0){
			return ackm(m-1,ackm(m,n-1));
		}
	}
int main(){
	int m,n,a,i=0;
	while(i==0){
	cout<<"請輸入m和n的值:";
	cin>>m>>n; 
	a=ackm(m,n);
	cout<<"結果為"<<a<<endl;
	}
	return 0; 
}
