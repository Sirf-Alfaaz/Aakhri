# include<iostream>
using namespace std;
int main(){
int i,j,k;
int arr[10]={1,15,2,45,62,2,4,84,32,6};
k=arr[0];
j=arr[0];
for(i=0;i<10;i++){
        if(k>=arr[i]){
            continue;
        }
        else{
            k=arr[i];
        }
}
for(i=0;i<10;i++){
    if(arr[i]>=j&&arr[i]<k)
        j=arr[i];
}
cout<<"The Second largest element is: "<<j;
return 0;}
