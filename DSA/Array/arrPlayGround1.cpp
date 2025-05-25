#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> & arr){
     for(int n:arr){
        cout<<n<<endl;
    }
}

int sum(vector<int> & arr){
    int a=0;
    for(int ele:arr){
        a+=ele;
    }
    return a;
}

int prod(vector<int> & arr){
    int a=0;
    for(int ele:arr){
        a*=ele;
    }
    return a;
}

void swapmaxmin(vector<int>& arr){
    int n=arr.size();
    int meta[4]={1000,-1000,0,0};
    for(int i=0;i<n;i++){
        if(arr[i]<meta[0]){
            meta[0]=arr[i];
            meta[2]=i;
        }
        if(arr[i]>meta[1]){
            meta[1]=arr[i];
            meta[3]=i;
        }
    }
    arr[meta[3]]=meta[0];
    arr[meta[2]]=meta[1];
}

vector<int> unique(vector<int> & arr){
    vector<int>d;
    for(int elements:arr){
        for(int ele:arr){
            if (elements=ele){
                d.push_back(elements);
            }
        }
    }
    return d;
}

int main (){
    int n;
    cout<<"Enter number of elements for array: ";
    cin>>n;
    vector <int> arr(n);
    for(int i=0; i<n;i++){
        if(i<3){
            if(i==0){
                cout<<"Enter 1st Element: ";
                cin>>arr[i];
            }
            else if(i==1){
                cout<<"Enter 2nd Element: ";
                cin>>arr[i];
            }
            else{
                cout<<"Enter 3rd Element: ";
                cin>>arr[i];
            }
        }
        else{
            cout<<"Enter "<<i+1<<"th Element: ";
            cin>>arr[i];
        }
    }

    vector<int>u=(arr);
    for (int i : u)
        cout << i << " ";
    //swapmaxmin(arr);
    //print(arr);

    //cout<<sum(arr);
    //cout<<sum(arr);
    return n;

}