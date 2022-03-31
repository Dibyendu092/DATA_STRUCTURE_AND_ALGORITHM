#include <bits/stdc++.h>
using namespace std;
int v[7],n=7,front=0, rear=0;

void Enque(int data){
    if(n == rear){
        cout<<"Queue is Full"<<endl;
        return;
    }
    else{
        v[rear]= data;
        cout<<"Enque Element is :"<<v[rear]<<endl;
        rear++;
        
    }
    return;
}
void Deque(){
    if(front == rear){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    else{
        cout<<"Deque Element is :"<<v[0]<<endl;
        for(int i=0;i<rear-1; i++){
            v[i] = v[i+1];
        }
        rear--;
    }
    return;
}
void GetFront(){
    if(front == rear){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    else{
        cout<<"Front Element is:"<<v[front]<<endl;
    }
    return;
}

void DisplayQueue(){
    if(front == rear){
        cout<<"Queue is Empty"<<endl;
        return;
    }
    else{
        cout<<"Element in the Queue"<<endl;
        for(int i=front ; i<rear; i++){
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    cout<<"            1.ENQUE OPERATION"<<endl;
    cout<<"            2.DEQUE OPERATION"<<endl;
    cout<<"            3.DISPLAY FRONT ELEMENT"<<endl;
    cout<<"            4.DISPLAY QUEUE"<<endl;
    cout<<"            5.EXIT"<<endl;
    while(1){
        cout<<"            ENTER THE CHOICE:"<<endl;
        int ch;
        cin >>ch;
        switch(ch){
            case 1:
                    cout<<"Enter The Element To Be Enqued"<<endl;
                    int d;
                    cin>>d;
                    Enque(d);
                    break;
            case 2:
                    Deque();
                    break;
            case 3:
                    GetFront();
                    break;
            case 4:
                    DisplayQueue();
                    break;
            case 5:
                    cout<<"EXIT FROM THE QUEUE"<<endl;
                    exit(0);
                    break;
            default:
                    cout<<"Invalid Option"<<endl;
                    break;
        }
    }
    return 0;
}

