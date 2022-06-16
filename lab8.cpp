#include<iostream>
#define size 5
using namespace std;

int arry[size];
int i, postion, temp=0;

void create(){
    cout<<"Arry created succesfuly!."<<endl;
}


int insert(){
    cout<<"---inserting element----\n"<<endl;
    for(i = 0; i<size; i++){
        cout<<"Enter element to index "<<i<<" Is:  ";
        cin>>arry[i];
    }
}

void del(int postion){
    for(i=postion; i<size; i++){
        temp = arry[i];
        arry[i] = arry[i+1];
        arry[i+1] = temp;
    }
}


void display(){
    cout<<"----displaying element-----"<<endl;
    for(i = 0; i<size; i++){
        cout<<arry[i]<<"   ";
    }
    cout<<endl;
}

int main(){
    int t=1, temp;
    
    while(t--){
        int choice;
        cout<<"Select 1. for create"<<endl;
        cout<<"Select 2. for insert"<<endl;
        cout<<"Select 3. for delete"<<endl;
        cout<<"Select 4. for display"<<endl;
        cin>>choice;

        switch(choice){
            case 1:
                create();
                break;
            case 2:
                insert();
                break;
            case 3:
                int postion;
                cout<<"Enter positon to delete: ";
                cin>>postion;
                del(postion);
                break;
            case 4:
                display();
                break;
            default:
                cout<<"invleid key press! \a"<<endl;
                break;
        }
        cout<< "1. Run agin"<<endl;
        cout<< "0. Terminate the programe"<<endl;
        cin>>temp;
        switch(temp){
            case 0:
                t = temp;
                break;
            case 1:
                t= temp;
                break;
            default:
                cout<<"Invalid typing"<<endl;
            break;
        }
    }
}