// Finding the key in the array and returning the index of the key.


#include<iostream>
using namespace std;
int main(){
    int x[5],key=26,a=0;
    cout<<"Enter the elements in the array:"<<endl;
    for(int i=0;i<5;i++){
        cin>>x[i];
    }
    for (int i=0;i<5;i++){
        if (key==x[i]){
            a+=1;
            cout<<"Key is present at "<<i<<".";
            break;
        }
    }
    if(a==0){
        cout<<"Key is not present in the array.";
    }
    return 0;
}
/*
Enter the elements in the array:
56
89
342
26
45
Key is present at 3.

Enter the elements in the array:
56
76
34
89
67
Key is not present in the array.
*/
