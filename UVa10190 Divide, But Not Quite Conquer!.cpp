#include <iostream>
using namespace std;

int main(){
    int m,n,m_copy;
    bool boring_flag; //flag = 1 時 輸出boring
    while(cin>>m>>n){ //m=被除數 n=除數
        int m_copy = m; //m_copy是not boring時拿來輸出數列用
        boring_flag=0;
        if(n==1){boring_flag=1;}//tricky的地方，除數是1時有特例 需要特別注意
        while(m!=1){ //while迴圈判斷是否boring
        	if(n==1){
        		boring_flag=1;
        		break;
        	}
            if(m%n!=0){
                boring_flag=1;
                break;
            }
            m/=n;
        }

        if(boring_flag==1){
            cout<<"Boring!"<<endl;
        }
        else{ //如果不是boring就輸出數列
            while(m_copy!=0){
            	if(m_copy !=1){
                cout<<m_copy<<" ";}
                else{cout<<m_copy<<endl;}
                m_copy/=n;
            }
        }
    }
}


