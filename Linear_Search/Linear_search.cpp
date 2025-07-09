#include <iostream>
using namespace std;
int main() {
    int n,s;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>s;
    for(int i=0;i<n;i++){
        if(s==arr[i]){
            cout<<s<<" Found at index "<<i;
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}