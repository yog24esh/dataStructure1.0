				//single link list

#include<stdio.h>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *link;
};
struct Node *head = NULL;

class ll{
	int x;
	public:	
		void insert(int x,int pos){
				Node *temp = new Node();
				Node *r = head;
				if(pos==1){
					temp->data = x;
					temp->link = NULL;
					head = temp;
				}
				else{
				while(r->link!=NULL){
				r = r->link;
			}
			r->link = temp;
			temp->data = x;
			temp->link = NULL;
		}
		}
		void del(int pos){
			Node *temp = head;
			if(temp->link==NULL){
				free(temp);
				head = NULL;
			}
			else{
				Node *prev;
			while(temp->link!=NULL){
				prev = temp;
				temp  = temp->link;
			}
			prev->link = NULL;
			free(temp);
			
		}}
		void print(){
			Node *temp = head;
			while(temp!=NULL){
				cout<<temp->data<<endl;
				temp = temp->link;
			}
		}
	};

int main(){
	ll a;
	a.insert(5,1);
	a.insert(2,2);
	a.insert(4,3);
	a.print();
	a.del(3);
	a.print();
return 0;
}
