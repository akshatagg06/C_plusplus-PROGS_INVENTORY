/*
kth root
You are given two integers n and k. Find the greatest integer x, such that, x^k <= n.

Sample Input
2
10000 1
1000000000000000 10

Sample Output
10000
31
*/
#include <bits/stdc++.h>
using namespace std;


long long search(long long N,int K,long long start,long long end)
{
    if(start>end)
        return -1;
    long long mid=(start+end)/2;
    long long p=mid;
    bool flag=true;
    for(int i=2;i<=K;i++)
        if(p*mid>N)
        {
            flag=false;
            break;
        }
        else
            p=p*mid;
            
    if(flag)
    {
        long long temp=search(N,K,mid+1,end);
        if(temp!=-1)
            return temp;
        else
            return mid;
    }
    else
        return search(N,K,start,mid-1);
}
int main() {
// your code goes here
    int T;
    cin>>T;
    while(T--)
    {
        long long K,N;
        cin>>N>>K;
        if(K==1)
        {
            cout<<N<<endl;
            continue;
        }
        long long ans=search(N,K,0,sqrt(N));
        cout<<ans<<endl;
    }
    return 0;
}