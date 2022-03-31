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

int RandomizeAlgo(int A[],int start,int end,int index){
    if(start==end){
        return A[index];
    }

    int mid=Partition(A,start,end);
    int rank=mid-start+1;
    if (rank==index){
        return A[index];
    }
    else if(rank<index)
    {
        return RandomizeAlgo(A,mid+1,end,index); 
    }
    else if(rank>index)
        return RandomizeAlgo(A,start,mid-1,index);
    
}
int  main(){
    return 0;
}











