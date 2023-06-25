#include<bits/stdc++.h>
using namespace std;

int main(){
    int ar[1000],n,i,j,count=0,arr[1000],k;

    cin>>n;

    for(i=0;i<n;i++){
        cin>>ar[i];
    }

    for(i=0;i<n;i+j){
        for(j=0;j<n;j++){
            if(ar[i]!=ar[j] && i!=j){
              count++;
            }
        }
        if(count==n-1){
            cout<<ar[i];
        }
        }
    
    return 0;
}
