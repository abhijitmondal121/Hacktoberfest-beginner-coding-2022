#include<bits/stdc++.h>
using namespace std;
//implementing queue using arrays

class Queue{
private:
int front;
int rear;
int*q;
int size;
public:
Queue(int size);
void Enqueue(int x);
int Dequeue();
bool isFull();
bool isEmpty();
void Display();
};
Queue::Queue(int size){
  this->size=size;
  front=rear=0;
  q=new int[size];
}
bool Queue:: isFull(){
  if(((rear+1)%size)==front) return true;
  return false;
}
bool Queue::isEmpty(){
  if(rear==front)return true;
  return false;
}

void Queue::Enqueue(int x){
  if(isFull())cout<<"Queue is Full"<<endl;
  else
    rear=(rear+1)%size;
    q[rear]=x;
} 
int Queue::Dequeue(){
  int xi=INT_MIN;
  if(isEmpty())cout<<"Queue is Empty!"<<endl;
  else{
    front=(front+1)%size;
    q[front]=xi;
  }
  return xi;
}
void Queue::Display() {
    int i = front + 1;
    do {
        cout << q[i] << flush;
        if (i < rear) {
            cout << " <- " << flush;
        }
        i = (i + 1) % size;
    } while (i != (rear + 1) % size);
}
int main() {
 
    int A[] = {1, 3, 5, 7, 9};
 
    Queue cq(sizeof(A)/sizeof(A[0]) + 1);
 
    // Enqueue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.Enqueue(A[i]);
    }
 
    // Display
    cq.Display();
    cout << endl;
 
    // Overflow
    cq.Enqueue(10);
 
    // Dequeue
    for (int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        cq.Dequeue();
    }
 
    // Underflow
    cq.Dequeue();
 
    return 0;
}
