#include <iostream>
using namespace std;

int main(){
    int t,a1,a2,a3,a4,count;
    cin>>t;
    for (int i;i<t;i++){
        count=4;
        cin>>a1>>a2>>a3>>a4;
        count = a1==0?count-1:count;
        count = a2==0?count-1:count;
        count = a3==0?count-1:count;
        count = a4==0?count-1:count;
        if (count==0) cout<<"Typically Otaku"<<endl;
        else if (count==1) cout<<"Eye-opener"<<endl;
        else if (count==2) cout<<"Young Traveller"<<endl;
        else if (count==3) cout<<"Excellent Traveller"<<endl;
        else if (count==4) cout<<"Contemporary Xu Xiake"<<endl;
    }
}