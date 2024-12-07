#include <iostream>
using namespace std;

int main(){
    int N;
    while (1){
        cin>>N;
        if (N==0){
            break;
        }
        else{
            int day=0,coins=0,N_=N;
            while (N!=0){
                day+=1;
                if (N-day<0){
                    coins+=N*day;
                    N=0;
                }
                else{
                    coins+=day*day;
                    N-=day;
                }
            }
            cout<<N_<<" "<<coins<<endl;
        }
    }
}