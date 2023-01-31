#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    int x=0,ans=0;
    char str[1000005];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            ans+=a[i];
        }
        else{
            ans+=a[i]-1;
            x++;
        }
    }
    for(int i=0;i<ans/2;i++){
        str[i]='R';
    }
    for(int i=ans/2;i<ans;i++){
        str[i]='L';
    }
    int k=0;
    if(x%2==1){
        k=ans/2-(x-1)/2;
        str[k]='R';
    }
    else{
        k=ans/2-x/2;
        str[k]='L';
    }
    for(int i=0;i<ans;i++){
        cout<<str[i];
    }
    return 0;
}
