#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main(){
    char a[1001],b[1001];
    while(cin>>a>>b){
        sort(a,a+strlen(a));
        sort(b,b+strlen(b));
        for(int i=0,j =0 ;i<strlen(a) && j<strlen(b);){
            if(a[i]==b[j]){cout<<a[i];i++;j++;}
            else if (a[i]<b[j]){i++;}
            else {j++;}
        }
        cout<<endl;
    }




}
//�o�D�ڬO�ѦҺ����W���ѵ��A�Ӽg�k�۷��Ĳv!
