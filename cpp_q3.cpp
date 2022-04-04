#include<iostream>
#include<string>
using namespace std;

void swap_(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    int count=0;
    string str;
    cout<<"Enter a string:\n";
    cin>>str;
    int n= str.length();
    for(int i=0;i<n;i++) if(str[i]=='0'||str[i]=='1') cout<<str[i];
    for(int i=0;i<n;i++) if(str[i]=='0' && str[i+1]=='1') count++;
    
    if(n%2==0){
        for(int i=0;i<n;i++){
            string str1=str;
            if(i%2==0){
                if(i==n-2 || i==n-1) swap_(str1[0],str1[i]);
                else swap_(str1[i+2],str1[i]);
                cout<<"string after "<<i <<": "<<str<<endl;
                if(str1[i]=='0' && str1[i+1]=='1') count++;
                else{
                    if(i==n-2 || i==n-1) swap_(str1[1],str1[i]);
                    else swap_(str1[i+2],str1[i]);
                cout<<"string after "<<i <<": "<<str<<endl;
                if(str1[i]=='0' && str1[i+1]=='1') count++;
                }
            }
        }
    }

    else{
        for(int i=0;i<n;i++){
            string str1=str;
            if(i%2!=0){
                if(i==n-2 || i==n-1) swap_(str1[1],str1[i]);
                else swap_(str1[i+2],str1[i]);
                if(str1[i]=='0' && str1[i+1]=='1') count++;
                else{
                    if(i==n-2 || i==n-1) swap_(str1[1],str1[i]);
                    else swap_(str1[i+2],str1[i]);
                if(str1[i]=='0' && str1[i+1]=='1') count++;
                }
            }
        }
    }
    cout<<"count: "<<count<<endl;
    return 0;
}