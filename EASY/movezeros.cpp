#include<Bits/stdc++.h>
using namespace std;
void movedzeros(vector <int>& arr,int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            j= i;
            break;
        }
    }
    if(j == -1) return ;
    for(int i=j;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    cout<<"enter the elemenst:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    movedzeros(arr,n);
    cout<<"after moving zeros to the end:";
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    cout << endl;
    return 0;
}
