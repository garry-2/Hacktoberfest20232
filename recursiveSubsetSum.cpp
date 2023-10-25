#include<bits/stdc++.h>
using namespace std;

bool solve(int i,vector<int> arr,int sum,int req,int n){

    if(i == n){
        return false;
    }

    if(sum == req){
        return true;
    }

    for(int j =i+1;j<n;j++){

        if(solve(j,arr,sum+arr[j],req,n))
            return true;

    }

    return false;
}

int main()
{

    vector<int> arr = {1,2,3,4,5};
    int n = arr.size();
    int req = 9;

    for(int i =0;i<n;i++){
        if(solve(i,arr,arr[i],req,n)){
            cout << "Sum is present" << endl;
            return 0;
        }
    }
 return 0;
}
