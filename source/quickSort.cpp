#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
void Partition(vector<int>&v, int l, int r, int& i, int& j){
    i = l-1, j = r;
    int p = l-1, q = r;
    int pivot = v[r];
    while(true){
        while(v[++i]<pivot);
        while(pivot<v[--j]) if(j==l) break;
        if(i>=j) break;
        swap(v[i], v[j]);
        if(v[i]==pivot){
            p++;
            swap(v[p], v[i]);
        }
        if(v[j]==pivot){
            q--;
            swap(v[j], v[q]);
        }
    }
    swap(v[i], v[r]);
    j = i-1;
    for(int k = l; k < p; k++, j--){
        swap(v[k], v[j]);
    }
    i = i+1;
    for(int k = r-1; k > q; k--, i++){
        swap(v[i], v[k]);
    }
}

void quickSort(vector<int>&v, int l, int r){
    if(l<r){
        int i, j;
        Partition(v, l, r, i, j);
        quickSort(v, l, j);
        quickSort(v, i, r);
    }
}

int main()
{
    vector <int>v;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    quickSort(v, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}