#include<iostream>
using namespace std;

int main(){
	int mark;
         
	
	
	do{
		cout<<"enter your marks from (0-100)"<<endl;
		cin>>mark;
		
		if(mark< 0 || mark >100);{
			cout<<" Invalid entry";
			cin>>mark;
		}
		
			}while(mark < 0 || mark >100);
	
		
		if(mark>=90 && mark <=100){
			cout<<" PASS ! YOUR GRADE IS : A "<<endl;
		}else if ( mark>= 80 && mark <=89){
			cout<<" PASS ! YOUR GRADE IS : B "<<endl;
		}else if ( mark>=70 && mark <=79 ){
			cout<<" PASS ! YOUR GRADE IS : C "<<endl;
		}else if ( mark >= 60 && mark <= 69){
			cout<<" PASS ! YOUR MARK IS : D "<< endl;
		}else {
			cout<<" YOUR ARE FAIL ! TRY AGAIN";
		}
		

		
		
	return 0;
}