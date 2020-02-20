#include<bits/stdc++.h>
using namespace std;

int search(vector <int> &a, long long int s, long long int e,long long int key) {
    if(s>e) {
        return -1;
    }
    long long int mid=(s+e)/2;

    if(key==a[mid]) {
        return mid;
    }

    if(a[s]>=a[mid]){
        if(key>=a[mid]  && key<=a[e])  {
            return search(a,mid+1,e,key); 
        }
        else {
            return search(a,s,mid-1,key);
        }  
    }
    
    if(a[s]<=key && key<=a[mid]) {
        return search(a,s,mid-1,key);
    }
    return search(a,mid+1,e,key);
}

int main() {
    long long  int n;
    cin>>n;
    vector <int> a(n);
    for(int i=0;i<n;i++)  {
        cin>>a[i];
    }
    long long int key;
    cin>>key;
    cout<<search(a,0,n-1,key)<<endl;
	return 0;
}