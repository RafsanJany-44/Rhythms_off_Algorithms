#include<iostream>
using namespace std;

void swap(int a,int b){
    int temp=a;
    a=b;
    b=temp;
}


int Partition(int A[],int last_index,int pointer){
    int last_element=A[last_index];
    int index=pointer-1;
    for(int j=pointer;j<=last_index-1;j++){
        if(A[j]<=last_element)
        {
            index=index+1;
            swap(A[j],A[index]);
        }
    }
    swap(A[index+1],A[last_index]);
    //cout<<A;
    return index+1;
}


int main(){
    int a[6]={-1,1,5,0,6,4};
    cout<<Partition(a,5,1);

}