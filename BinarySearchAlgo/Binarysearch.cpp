#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s,low=0,high=n-1;
    cin>>s;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==s){
            cout<<s<<" Found at index "<<mid;
            return 0;
        }
        else if(s>arr[mid]){
            low=mid+1;
        }
        else{
            high = mid-1;
        }
    }
    cout<<"Not Found";
    return 0;
}
