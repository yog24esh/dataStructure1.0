#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

class queue1{
	int arr[10];
	int front,rear;
	public:
		queue1(){
			front=rear=0;
		}
		void enQueue(int x){
			arr[rear]=x;
			rear++;
		}
		void deQueue(){
			front++;
		}
		void print(){
			for(int i=front;i<rear;i++){
				cout<<arr[i]<<" ";
			}
		}
};
int main(){
	queue1 a;
	a.enQueue(5);
	a.enQueue(2);
	a.enQueue(3);
	a.print();
	a.deQueue();
	a.print();
	return 0;   
}
