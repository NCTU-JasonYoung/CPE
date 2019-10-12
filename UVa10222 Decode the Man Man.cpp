#include<iostream>;
#include <cctype>
using namespace std;

int main(){
    char keyboard[4][14]={"`1234567890-=","qwertyuiop[]\\","asdfghjkl;\'","zxcvbnm,./"};
    char c;
    while(cin.get(c)){
    	if (c==' '){cout<<c;}
    	if (c=='\n'){cout<<endl;}
        c=tolower(c);
        for(int i=0;i<=3;i++){
            for(int j=0;j<=12;j++){
            if(c==keyboard[i][j]){cout<<keyboard[i][j-2];}


            }
        }


 }

}
