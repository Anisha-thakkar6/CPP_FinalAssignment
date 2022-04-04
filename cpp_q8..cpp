#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the log of processers used:\n";
    cin>>n;
    char a[n];
    cout<<"Enter the elements:\n";
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=1;i<n;i++){
       if(a[i]==a[i-1]) {printf("No"); return 0;} 
    }
    cout<<"Yes";
    return 0;
}