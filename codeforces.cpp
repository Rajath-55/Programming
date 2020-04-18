#include<iostream>
int main(){
	int t,n,count;
	cin>>t;
	while(t--){
      cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++){
        	cin>>a[i];
        	b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
        	if(b[i]=b[i+1]){
        		count=b[i];
        	}
        }

	}
}