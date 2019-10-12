#include <iostream>
using namespace std;
int main(){
    int a,b;
    while(cin>>a>>b && (a!=0 &&b!=0) ){

        int counter = 0;
        for(int i=a;i<=b;i++){
            for(int j=1;j<=i/2+1;j++){
                if(i==j*j){counter++;}
            }
        }
        cout<<counter<<endl;

    }
	return 0;

}
