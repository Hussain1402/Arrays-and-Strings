#include<iostream>
using namespace std;
int main(){
    int x[5],a=0;
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    for (int i=0;i<5;i++){
        a=a+x[i];
    }
    cout<<"Sum of elements of the array is: "<<a<<endl;
    int avg=a/5;
    cout<<"Average of the sum of elements of array is: "<<avg;
    return 0;
}

/*
Enter the elements in the array:
1
4
5
7
8
Sum of elements of the array is: 25
Average of the sum of elements of array is: 5
*/
