#include<bits/stdc++.h>
using namespace std;
long long convert(int n)
{
    long long bin =0;
    int rem,i=1;
    while(n!=0){
        rem = n%2;
        n=n/2;
        bin+=i*rem;
        i=i*10;
    }
    return  bin;
}
int main(){
    int n,bin;
    cout<<"Enter a number in decimal";
    cin>>n;
    bin = convert(n);
    cout<<n<<" in decimal = "<<bin<<" in binary ";
    return 0;
}