//Finding maximum element in a vector using recursion
void solve(vector<int>&arr,int &maxi,int i,int n){
   if(i>=n)return;
    maxi=max(maxi,arr[i]);
    solve(arr,maxi,i+1,n);
}
int main() {
    int n;
    cin>>n;
   vector<int>arr(n);
    
    for(int &i:arr){
        cin>>i;
    }
    int maxi=INT_MIN;
    solve(arr,maxi,0,n);
    cout<<maxi;
}
