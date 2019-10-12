#include <iostream>
#include <stack>

//這題要會stack的用法 @@"
using namespace std;

int main(){
    int n;
    stack<int> stk;
    while(cin>>n && n){
        int parity = 0;
        while(n){
            parity+=n%2;
            stk.push(n%2);
            n/=2;
        }
        cout<<"The parity of ";
        while(stk.size()){
            cout<<stk.top();
            stk.pop();
        }
        cout<<" is "<<parity<<" (mod 2)."<<endl;
    }





}
