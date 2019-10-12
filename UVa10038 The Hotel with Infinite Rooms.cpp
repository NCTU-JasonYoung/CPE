#include <iostream>
using namespace std;
int main(){
    long long int round,start,day,customer;
	while(cin>>start>>day){
		customer = start;
		for(long long int i=1;i<=day;){
			i+=customer;
			customer+=1;}
		cout<<customer-1<<endl;
	}
}
