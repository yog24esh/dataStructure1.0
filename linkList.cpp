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
					int num = 1;
					Node *prev;
				while(r->link!=NULL&&num<pos){
				prev = r;
				r = r->link;
				num++;
			}
			temp->link = r->link;
			temp->data = x;
			r->link = temp;
		}
		}
		void del(int pos){
			Node *temp = head;
			if(temp->link==NULL||pos==1){
				free(temp);
				head = NULL;
			}
			else{
				Node *prev;
				int num = 1;
			while(temp->link!=NULL&&num<pos){
				prev = temp;
				temp  = temp->link;
				num++;
			}
			
			prev->link = temp->link;
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
	a.insert(5,4);
	a.print();
//	a.del(2);
//	a.print();
	a.insert(24,3);
	a.insert(0,2);
	a.print();
return 0;
}
