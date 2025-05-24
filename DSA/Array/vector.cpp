#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vec;
    //printong its size
    cout<<"Size of an empty vector is :"<<vec.size()<<endl;
    //inserting  an element
    int a,b;
    cout<<"Enter an element to append in array";
    cin>>a;
    vec.push_back(a);
    cout<<"The size and capacity of vector is :"<<vec.size()<<vec.capacity()<<endl;
    cout<<"Entera second element to append in array";
    cin>>b;
    vec.push_back(b);
    cout<<"The size and capacity of vector after second appending is :"<<vec.size()<<vec.capacity()<<endl;
    for(int i:vec){
        cout<<i;
    }
    return 0;
}