#include<iostream>
using namespace std;
int main(){
    int x[5];
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    cout<<"The elements in the array are:"<<endl;
    for (int i=0;i<5;i++){
        cout<<x[i]<<endl;
    }
    return 0;
}

/*
Enter the elements in the array:
34
56
7
3
8
The elements in the array are:
34
56
7
3
8
*/
