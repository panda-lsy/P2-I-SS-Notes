#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x0,y0,x1,y1,lay0,lay1,step0,step1;
    for (int i=1;i<=n;i++){
        cin >> x0 >> y0 >> x1 >> y1;
        lay0=x0+y0,lay1=x1+y1,step0=0,step1=0;
        if (lay0>0){
        for (int u=0;u<=lay0;u++){
            step0=step0+u;
        }
        step0+=x0;
        }
        if (lay1>0){
        for (int v=0;v<=lay1;v++){
            step1=step1+v;
        }
        step1+=x1;
        }
        printf("Case %d: %d\n",i,step1-step0);
    }
}