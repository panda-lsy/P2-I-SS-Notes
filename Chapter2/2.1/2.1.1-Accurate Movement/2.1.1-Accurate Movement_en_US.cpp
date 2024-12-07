#include <iostream>
using namespace std;

int main(){
    int a,b,n;
    cin >> a >> b >> n;
    int pos1=a,pos2=b,movement=0;//短,长
    while (!(pos1==n && pos2==n)){
        if (pos1!=n){
            pos1+=b-a;
            movement+=1;
            if (pos1>=n){
                pos1=n;
            }
        }
        if (pos2!=n){
            pos2+=b-a;
            movement+=1;
            if (pos2>=n){
                pos2=n;
            }
        }
    }
    cout << movement << endl;
}