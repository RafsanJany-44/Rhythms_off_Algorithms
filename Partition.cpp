#include<iostream>
using namespace std;

int Partition(int A[],int last_index,int pivot){
    int last_element=A[last_index];
    int index=pivot-1;
    for(int j=pivot;j<=last_index-1;j++){
        if(A[j]<=last_element)
        {
            index=index+1;
            swap(A[j],A[index]);
        }
    }
    swap(A[index+1],A[last_index]);
    for (int i = 0; i <=last_index; i++) {
        cout << A[i] << "  ";
    }
    cout << endl;
    return index+1;
}



int main(){
    int a[6]={1,5,0,6,4};
    cout<<Partition(a,4,0);
}