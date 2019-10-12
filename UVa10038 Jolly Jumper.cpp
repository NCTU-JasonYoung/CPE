#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    bool flag=0;//設一個FLAG 如果FLAG=0 ==>JOLLY 反之
    while(cin>>n){
    	flag=0;
        int arr[n],arrABS[n-1],jolly[n-1]; //這題我用三個陣列來解決，一個是輸入測資的陣列arr;一個是k和k+1之間差距絕對值之陣列arrABS,最後一個則是存放1~n-1之陣列jolly

        for(int i=0;i<n;i++){//把測資輸入陣列
            cin>>arr[i];


        }
        for(int i=0;i<n-1;i++){//把jolly陣列裝滿1~n-1
            jolly[i]=i+1;

        }
        for(int i=0;i<n-1;i++){ //算出母陣列arr中k和k+1元素間差距的絕對值並放入arrABS
            arrABS[i]=abs(arr[i]-arr[i+1]);

        }

        for(int i=0;i<n-1;i++){ //比對arrABS和jolly內的內容有沒有一樣，如果一樣就把jolly內的該值清空為0
            for(int j=0;j<n-1;j++){
                if(arrABS[i]==jolly[j]){jolly[j]=0;}
            }
        }
        for(int i=0;i<n-1;i++){ //如果jolly內所有值都歸0，那就代表這個loop是個jolly!
            if(jolly[i]!=0){
                flag=1;
                break;
            }
        }
        if(flag==0){cout<<"Jolly"<<endl;}
        else{cout<<"Not jolly"<<endl;}
    }

}
