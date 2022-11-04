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

void selectionSort(vector<int>&v, int n){
    for(int i = 0; i < n-1; i++){
        int min = i;
        for(int j = i+1; j < n; j++){
            if(v[j] > v[min]){
                min = j;
            }
        }
        if(v[i]!=v[min]){
            swap(v[i], v[min]);
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
    selectionSort(v, n);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}