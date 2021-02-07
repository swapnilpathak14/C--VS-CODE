#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();    //to clear the buffer ahead. We can use flush as well.

    int currlen=0;
    int maxlen=0;
    for(int x=0;x<n;x++){
        if(arr[x]==' ' || arr[x]=='\0'){
            if(currlen>maxlen){
                maxlen=currlen;
            }
            currlen=0;
        }
        else{
            currlen++;
        }
        
        if(arr[x]=='\0'){
            break;
        }
    }
    cout<<maxlen<<endl;
}