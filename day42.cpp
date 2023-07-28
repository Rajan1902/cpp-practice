#include<iostream>
using namespace std;

void bubblesort(int a[], int n){
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}


int main(){
    bool flag = true;
    int a,b;
    cout<<"enter size of 1st array:";
    cin>>a;
    cout<<"enter size of 2nd array:";
    cin>>b;
    int arr1[a];
    int arr2[b];
    cout<<"Enter elements of first array :";
    for(int i = 0; i<a; i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array :";
        for(int i = 0; i<b; i++){
        cin>>arr2[i];
    }
    bubblesort(arr1,a);
    bubblesort(arr2,b);
    if(a == b){
        for(int i = 0; i<a; i++){
            if(arr1[i]!=arr2[i]){
                flag = false;
                break;
            }
        }
    }
    else{
        flag = false;
    }
    if(flag == true){
        cout<<"same";
    }
    else cout<<"not same";


    // cout<<a<<b;
    return 0;
    

}