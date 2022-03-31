#include<iostream>
using namespace std;

int Partition(int A[],int pivot,int last_index){
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

void quickSort(int A[],int last_index,int pivot){
    if(pivot<last_index){
        int q=Partition(A,pivot,last_index);
        quickSort(A,pivot,q-1);
        quickSort(A,q+1,last_index);
    }
    for (int i = 0; i <=6; i++) {
        cout << A[i] << "  ";
    }
    //return A;
}


int main(){
    int a[6]={1,5,0,6,4};
    Partition(a,0,4);
}
