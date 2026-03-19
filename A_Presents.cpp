#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int> pos(n+1);
    for(int i=1,x;i<=n;i++){
        cin>>x;
        pos[x]=i;
    }
    for(int i=1;i<=n;i++) cout<<pos[i]<<" ";
}
