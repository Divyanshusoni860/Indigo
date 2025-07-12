#include<iostream>
#include<vector>
using namespace std;

int input(vector<int>&arr,int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        int element;
        cout<<"Enter the Pages in book "<<i+1<<": ";
        cin>>element;
        sum+=element;
        arr.push_back(element);
    }
    return sum;
}

bool is_valid(vector<int>arr,int n,int m,int mid){
    int student = 1;
    int pages = 0;
    for(int i=0;i<n;i++){
        if(mid>=pages+arr[i]){
            pages+=arr[i];
        }
        else{
            pages=arr[i];
            student++;
        }
    }
    if(student<=m){
        return true;
    }
    else{
        return false;
    }
}

int book_alloc(vector<int>arr,int n,int m,int sum){
    int start = 0;
    int end = sum;
    int ans = sum;
    while(start<=end){
        int mid = start+((end-start)/2);
        if(is_valid(arr,n,m,mid)){
            end = mid-1;
            cout<<"is valid"<<mid<<endl;
            ans=min(mid,ans);
        }
        else{
            start = mid+1;
        }
    }
    return ans;
}



int main(){
    int n,m;
    cout<<"Enter the number of Books: ";
    cin>>n;
    vector<int>book;
    int sum = input(book,n);
    cout<<"Enter number students to allocate them books: ";
    cin>>m;
    if (m > n) {
        cout << "Number of students cannot be more than number of books." << endl;
        return -1;
    }
    int ans = book_alloc(book,n,m,sum);
    cout<<ans;
    return 0;
}