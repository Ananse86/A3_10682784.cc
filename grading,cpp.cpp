#include<iostream>
using namespace std;
int main()
{
	int grade;
	cout<<"enter your grade";
	cin>>grade;
	if(grade>=90){
		cout<<"A";
	}else
	if(grade>=80){
		cout<<"B";
	}else
	if(grade>=70){
		cout<<"C";
	}else
	if(grade>=60){
		cout<<"D";
	}else
	if(grade>=50){
		cout<<"E";
	}else
	if(grade<=40){
		cout<<"F";
	}
	return 0;
}
