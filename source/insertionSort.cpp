#include<iostream>
#include<stack>
#include<queue>
#include<vector>
using namespace std;
void insertionSort(vector<int>&v, int n){
    int pos, x;
    for(int i = 1; i < n; i++){
        
        x = v[i];
        pos = i-1;
        while(pos>=0 &&v[pos]>x){

            v[pos+1] = v[pos]; //if the element is greater than x, shift it to the right
            pos--;
        }
        v[pos+1] = x;

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
    insertionSort(v, n);
    for(int i = 0; i < n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}