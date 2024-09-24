#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int gcd(int n1,int n2){
        while(n2!=0){
            int temp=n2;
            n2=n1%n2;
            n1=temp;
        }
        return n1;
    }
    int lcm(int n1,int n2){
        if(n1<0 || n2<0){
            return -1;
        }
        return (n1*n2)/gcd(n1,n2);
    }
};

int main(){
    Solution s;
    int n1,n2;
    cin>>n1>>n2;
    cout<<"LCM: "<<s.lcm(n1,n2)<<endl;
    return 0;
}