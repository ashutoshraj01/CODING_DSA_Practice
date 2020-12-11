// check whether given no is prime or noreturn

#include<bits/stdc++.h>
using namespace std;

bool checkPrime(long long int n){
    for(int i=2;i<=sqrt(n);i++)
     if(n%i==0)
       return false;
    
    return true;   
}

int main(){
    int t;
    long long int n;
    cin>>t;
    while(t--){
        cin>>n;
        
        if(checkPrime(n))
          cout<<"prime\n";
        else
          cout<<"not prime\n";
    }    
    
    return 0;
}