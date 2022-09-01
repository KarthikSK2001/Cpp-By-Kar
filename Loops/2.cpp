#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,fact=1;
    cin>>n;
    if(n==0){
        fact=1;
    }
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The Factorial of "<<n<<" = "<<fact<<endl;
}
