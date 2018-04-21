				//double link list

#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

struct Node{
	int data;
	Node *left;
	Node *right;
};

struct Node *head = NULL;
class dll{
	int x;
	public:
		void insertion(int x,int pos){
			Node *temp = new Node();
			if(pos==1){
				temp->data = x;
				head = temp;
				temp->left = NULL;
				temp->right = NULL;
			}
			else{
				Node *tempHead = head;
				while(tempHead->right!=NULL){
					tempHead = tempHead->right;
				}
				temp->data = x;
				temp->left = tempHead;
				tempHead->right = temp;
				temp->right = NULL;
			}
		}
		void del(int pos){
			if(pos==1){
				Node *temp = head;
				head = temp->right;
				free(temp);
			}
			else{
				Node *tempHead = head;
				while(tempHead->right!=NULL){
					tempHead = tempHead->right;
				}
				tempHead->left->right = NULL;
				free(tempHead);
				
			}
		}
		void print(){
			Node *temp = head;
			while(temp!=NULL){
				cout<<temp->data<<" ";
				temp = temp->right;
			}
		}
};

int main(){
	dll a;
	a.insertion(5,1);
	a.insertion(8,2);
	a.insertion(3,3);
	a.insertion(2,4);
	a.print();
	
}
