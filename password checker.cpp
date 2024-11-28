#include<iostream>
using namespace std;

int main(){
	
	string password="123abc";
	int maxattempt=3;
	string userinput;
	
	for(int attempt=1; attempt <=maxattempt; ++attempt){
		cout<<"Enter your password "<<endl;
		cin>>userinput;
		
		if(userinput==password){
			cout<<" Wellcome Sir/madam !!! <3 "<<endl;
			return 0;
		}else 
		{
			cout<<" Wrong password"<<endl;
		}
		if(attempt<maxattempt){
			
			cout<<" Try again you have : "<<maxattempt - attempt<<" Attempts remaining "<<endl;
		}
		
	}
	
	return 1;
	
}