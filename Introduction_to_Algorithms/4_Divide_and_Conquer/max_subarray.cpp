#include<iostream>
#include<vector>
#include<tuple>
#include<limits.h>
using namespace std;

tuple <int,int,int> find_max_crossing_subarray (vector<int>&arr,int low, int mid, int high){

    // for left

    int sum = 0;
    int left_sum = INT_MIN;
    int max_left = mid;
    
    for(int i=mid; i>=low; i--){
        sum+=arr[i];
        if(sum>left_sum){
            left_sum=sum;
            max_left=i;
        }
    }

    // for right

    sum = 0;
    int right_sum = INT_MIN;
    int max_right = mid+1;
    
    for(int j=mid+1; j<=high; j++){
        sum+=arr[j];
        if(sum>right_sum){
            right_sum=sum;
            max_right=j;
        }
    }    
    return {max_left,max_right,(left_sum+right_sum)};
}

tuple<int,int,int>find_max_suarray(vector<int>&arr,int low, int high){
    if(low==high){
        return {low,high,arr[low]};
    }
    int mid = (low+high)/2;

    // Recursive calls
    tuple<int,int,int>left_result = find_max_suarray(arr,low,mid);
    tuple<int,int,int>right_result = find_max_suarray(arr,mid+1,high);
    tuple<int,int,int>cross_result = find_max_crossing_subarray(arr,low,mid,high);

    int left_sum = get<2>(left_result);
    int right_sum = get<2>(right_result);
    int cross_sum = get<2>(cross_result);

    if(left_sum>=right_sum && left_sum >= cross_sum){
        return left_result;
    }
    else if(right_sum >= left_sum && right_sum >= cross_sum){
        return right_result;
    }
    else{
        return cross_result;
    }
} 

int main(){
vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3, 2, 2, -5, 10, -2, 3, -4, 7, -1, 4, -10, 6, 1, -3, 5, 4};
int max_left,max_right,sum;
tie(max_left,max_right,sum) = find_max_suarray(arr,0,arr.size()-1);
cout<<max_left<<endl<<max_right<<endl<<sum;
return 0;
}