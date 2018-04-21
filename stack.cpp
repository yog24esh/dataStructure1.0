//stack
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;


class stack1{
	int arr[10];
	int top;
	public:
		stack1(){
			top=0;
		}
		void push(int x){
			arr[top] = x;
			top++;			
		}
		void pop(){
			top--;
		}
		void print(){
		//	cout<<arr[0];
			for(int i=0;i<top;i++){
				cout<<arr[i]<<" ";
			}
		}
		
		
};

int main(){
	stack1 a;
	a.push(4);
	a.push(2);
	a.push(10);
	a.print();
	a.pop();
	a.print();
return 0;	
}
