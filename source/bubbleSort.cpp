#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void bubbleSort(vector<int>&v, int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1;j++){
            if(v[j]> v[j+1]){
                swap(v[j], v[j+1]);
            }
        }
    }
}

int main()
{
    vector <int> v;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bubbleSort(v, n);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}