#include <iostream>
using namespace std;

int main(){
    int i,j,ans,i_,j_;
    while (cin>>i>>j){
        ans=0;
        i_=min(i,j),j_=max(i,j);
        for (int u=i_;u<=j_;u++){
            int count=0;
            int temp = u;
            while (temp!=1){
                count+=1;
                if (temp%2==1){
                    temp=3*temp+1;
                }
                else{
                    temp=temp/2;
                }
            }
            count+=1;
            if (count>ans){
                    ans=count;
                }
        }
            cout<<i<<" "<<j<<" "<<ans<<endl;
    }
}