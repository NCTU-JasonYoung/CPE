#include <iostream>
using namespace std;

int main(){
    int m,n,m_copy;
    bool boring_flag; //flag = 1 �� ��Xboring
    while(cin>>m>>n){ //m=�Q���� n=����
        int m_copy = m; //m_copy�Onot boring�ɮ��ӿ�X�ƦC��
        boring_flag=0;
        if(n==1){boring_flag=1;}//tricky���a��A���ƬO1�ɦ��S�� �ݭn�S�O�`�N
        while(m!=1){ //while�j��P�_�O�_boring
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
        else{ //�p�G���Oboring�N��X�ƦC
            while(m_copy!=0){
            	if(m_copy !=1){
                cout<<m_copy<<" ";}
                else{cout<<m_copy<<endl;}
                m_copy/=n;
            }
        }
    }
}


