#include<stdio.h>
#include<stdlib.h>
void func(char word[],int count[],int n,int index){ 
	if(index==n){
		printf("{ ");
		for(int i=0;i<n;i++){
			if(count[i]==1){
			printf("%c ",word[i]);
			}
		}
		printf("}\n");
		return;
	}
	//�����word[index]�̭����r�� 
	count[index]=0;
	func(word,count,n,index+1);
	//���word[index]�̭����r��
	count[index]=1;
	func(word,count,n,index+1);
}
int main(){
	char word[3]={'a','b','c'};
	int count[3]={0,0,0};
	
	func(word,count,3,0);
	return 0;
}
