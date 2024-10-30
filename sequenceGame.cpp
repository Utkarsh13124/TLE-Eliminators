// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n){
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        // vector<int> v;
        int last = -1;
        for (int i = 0; i < n; i++){
            int x ;
            cin>>x;
            if( i == 0 || x >= last){
                cout<<x<<" ";
                // v.push_back(x);
            }else{
                cout<<x<<" "<<x<<" ";
            }
            last = x;
        }
        cout<<endl;
    }

}