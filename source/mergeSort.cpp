#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;

//merge function is used to merge 2 sorted arrays
void merge(vector<int>&v, int l, int mid, int r){
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1], b[n2];
    for(int i = 0; i < n1; i++){
        a[i] = v[l+i];
    }
    for(int i = 0; i < n2; i++){
        b[i] = v[mid+1+i];
    }
    int i = 0, j = 0, k = l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            v[k] = a[i];
            i++;
        }
        else{
            v[k] = b[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        v[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        v[k] = b[j];
        j++;
        k++;
    }
}

//mergeSort function is used to divide the array into 2 halves and then merge them
void mergeSort(vector<int>&v, int l, int r){
    if(l<r){
        int mid = (l+r)/2;
        mergeSort(v, l, mid);
        mergeSort(v, mid+1, r);
        merge(v, l, mid, r);
    }
}


int main()
{
    
    vector<int>v;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    mergeSort(v, 0, n-1);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }
    


    return 0;
}