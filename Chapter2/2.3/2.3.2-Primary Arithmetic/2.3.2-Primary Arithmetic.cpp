#include <iostream>
using namespace std;

int main(){
    int a,b;
    while (cin>>a>>b){
        if (a==0 && b==0){
            break;
        }
        else{
            int c=0,count=0;
            for (int i=9;i>=0;i--){
                c = (a%10+b%10+c)>9?1:0;
                count+=c;
                a/=10;
                b/=10;
            }
        if (count==0){
            cout<<"No carry operation."<<endl;
        }
        else if (count==1){
            cout<<"1 carry operation."<<endl;
        }
        else{
            cout<<count<<" carry operations."<<endl; 
        }
        }
    }
}