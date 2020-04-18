#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

    
    int n,k1,k2;
    cin>>n>>k1>>k2;
    int a[k1], b[k2];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    sort(a,a+k1);
    sort(b,b+k2);
    int flag=1;
    for(int i=0;i<k2;i++){
        if(a[k1-1]<b[i]){
           flag=0; 
        }
    }
    if(flag==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
} 
return 0;
}