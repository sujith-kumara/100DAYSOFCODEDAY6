#include<bits/stdc++.h>
using namespace std;
int convert(long long n){
    int dec=0,rem,i=0;
    while(n!=0){
        rem = n%10;
        n=n/10;
        dec += rem*pow(2,i);
        i++;
    }
    return dec;
}
int main(){
    long long n;
    int dec;
    cout<<"Enter a number in binary";
    cin>>n;
    dec = convert(n);
    cout<<n<<"in binary ="<<dec<<" in decimal";
    return 0;
}