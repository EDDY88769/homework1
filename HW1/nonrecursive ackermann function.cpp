#include<iostream>
using namespace std;
int acmf(int m,int n){
	while(m>0){
		if(n==0){
			n=1;
			m=m-1;
		}
		else{
			n=acmf(m,n-1);
			m=m-1;
		}
	}
	return n+1;
}

int main(){
	int n,m;
	cout<<"Please Enter the value of m and n:";
	cin>>m>>n;
	
	cout<<"A("<<m<<","<<n<<")="<<acmf(m,n)<<endl;
	return 0;
}
