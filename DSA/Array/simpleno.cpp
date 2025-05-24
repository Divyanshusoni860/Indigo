//Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.
//You must implement a solution with a linear runtime complexity and use only constant extra space.

#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int sn(vector<int> &vec){
    int a=0;
    for(int i :vec){
        a^=i;
    }
    return a;
}

int main(){
    string line;
    getline(cin, line);
    stringstream ss(line);
    vector <int> vec;
    int num;
    while (ss >> num) {
        vec.push_back(num);
    }
    cout<<"Result :"<<sn(vec);
    return 0;
}