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

void quickSort(int A[], int start, int end)
{
    if  (start >= end)
        return;
    int p = Partition(A, start, end);
    quickSort(A, start, p - 1);
    quickSort(A, p + 1, end);
}


int main(){
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;
    quickSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
