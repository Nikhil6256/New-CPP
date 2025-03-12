//Merge Two Sorted array
#include<bits/stdc++.h>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];                        //arr3[k++]=arr1[i++];  then don't use next two line                           
            k++;                            
            i++;
        }
        else{
            arr3[k]=arr2[j];                        //arr3[k++]=arr2[j++];  then don't use next two line
            k++;
            j++;
        }
    }
    //Copy First array ke element ko
    while(i<n){
        arr3[k]=arr1[i];                            //arr3[k++]=arr1[i++];  then don't use next two line
        k++;
        i++;
    }
    //Copy Second array ke element ko
    while(j<m){
        arr2[k]=arr2[j];                            //arr2[k++]=arr2[j++];  then don't use next two line
        k++;
        j++;
    }
}

void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[3]={2,4,6};

    int arr3[8]={0};

    merge(arr1, 5, arr2, 3, arr3);

    print(arr3, 8);
    return 0;

}