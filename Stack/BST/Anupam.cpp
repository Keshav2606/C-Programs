#include<iostream>
using namespace std;
int main(void){
    int i,n=5;
    cout<<n<<endl;
    for(i=4;i>=1;i--){
        if(i%2==0){
            cout<<n-i<<endl;
            n = n-i;
        }
        else{
            cout<<n+i<<endl;
            n = n+i;
        }
    }
    cout<<n<<endl;
    for(i=1;i<=4;i++){
        if(i%2!=0){
            cout<<n-i<<endl;
            n = n-i;
        }
        else{
            cout<<n+i<<endl;
            n = n+i;
        }
    }
}
