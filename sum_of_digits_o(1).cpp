#include<iostream>
using namespace std;
int sum_of_digits(long long int n){
	if(n%9==9 && n==0){
		return 0;
	}else if(n%9==9 && n!=0){
		return 9;
	}
		return n%9;
}
int main(){
	long long int n;
	cin>>n;
	cout<<sum_of_digits(n)<<endl;
	return 0;
}
