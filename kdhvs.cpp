#include <iostream>
#include <vector>
using namespace std;
void add(vector<string> arr, string new_task){
    cout <<" break it with '#'\n";
    bool a=true;
while(a){
    for( int i=0; i<1; i++){
        cin>>arr[i];
        if (arr[i]=="#"){
            break;
            }
        }
    }
}
void remove(vector<string> arr){
    int index;
    if(arr.size()>0){
            cout <<"enter the number of the task you wanna delete\n";
            for( int j=0 ; j<arr.size();j++){
                cout << j+1<<arr[j]<<endl;
            }
            cout <<"enter (1-"<<arr.size()<<")"<<endl;
               cin>>index;
                if(index>=1 || index >arr.size()){
                    arr.pop_back();
                }
    }
    else{
        cout<<"the ped is empty"<<endl;
    }
}
void completed(vector<string> arr){
    
}

int main(){
vector<string> inproses;
vector<string> completed;
string task;  
int menu ,order;  
cout<<" 1- add new task \n";
cout<<" 2- remove a task \n";
cout<<" 3- completed tasks \n";
cout<<" enter(1-3) : \n";
cin>>order;
if(order==1){
    add(inproses,task);
}
    return 0;
}
