#include <iostream>
using namespace std;

int main(){
    long long int S,D;
    while (cin >> S >> D){
        while (D>0){
            if (D-S<=0){
                D=0;
            }
            else{
                D-=S;
                S+=1;
            }
        }
        cout<<S<<endl;
    }
}