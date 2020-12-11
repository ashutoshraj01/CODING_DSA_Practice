//Print reversed no of given no

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a;
    while(n!=0){
      cout<<n%10;
      n=n/10;
    }
    return 0;
}