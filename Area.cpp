#include<bits/stdc++.h>
using namespace std;


int main() {

    long int t;
    cin >> t;
    while(t--){
        long long int n,s,m;
        cin >> n >> s >> m;
        map<long long int, long long int>m1,m2;
        while(n){
            long int k = n%10;
            if(k == 2){
                k = 5;
            }
            if(k==6)k = 9;
            m1[k]++;
            n /= 10;
        }
        while(m)
        {
            long int k = m % 10;
            if(k == 2)k =5;
            if(k == 6)k = 9;
            m2[k]++;
            m /= 10;
        }
        long long int mm = 1000000000001;
        for(auto it : m1)
        {
            long long int k = m2[it.first]/it.second;
            mm = min(mm,k);
        }
        cout <<mm<<'\n';
    }
    return 0;
}