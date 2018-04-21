#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node *next;
};
struct Node *curr,*head =NULL;
//int count = 0;

class cll{
	int x;
	public:
		void insert(int x,int pos){
			Node *temp = new Node();
			Node *current = head;
			if(pos==1){
				head = temp;
				temp->data = x;
				temp->next = head;
				//count++;
			}
			else{
				while(current->next!=head){
					current = current->next;
					//count++;
				}
				temp->data = x;
				temp->next = head;
				current->next = temp;
			}
		}
		void print(){
			Node *temp = head;
			while(temp->next!=head){
				cout<<temp->data<<" ";
				temp = temp->next;
			}
			cout<<temp->data;
		}
};
int main(){ cll a;
	a.insert(2,1); a.insert(4,2);;a.insert(5,3); a.print(); return 0;
}
