#include<iostream>
#include<cstdlib>
int counter=0;
using namespace std;
int ackm(int m,int n){
		counter++;
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
	int m,n,result,i=0;
	while(i==0){
	counter=0;
	cout<<"Please Enter the value of m and n:";
	cin>>m>>n; 
	result=ackm(m,n);
	cout<<"A("<<m<<","<<n<<")="<<result<<endl;
	cout<<"Number of recursive calls:"<<counter<<endl;
	}
	return 0; 
}
