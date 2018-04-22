#include<bits/stdc++.h>
#include<stdlib.h>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
node *root = NULL;
class queue1{
	public:
	node *arr[10];
	int front,rear;
		queue1(){
			front=rear=0;
		}
		void enQueue(node* x){
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
		int isEmptyQueue(){
			if(rear==front) return 0;
			else return 1;
		} 
		
};
class binaryTree : public queue1{
	int x;
	public:
		void inOrder(node *root){
			if(root){
			inOrder(root->left);
			cout<<root->data<<" ";
			inOrder(root->right);
		}}
		void levelOrder(node *root){
			node *temp;
			queue1 an ;
			an.enQueue(root);
			while(!isEmptyQueue()){
				 deQueue(); temp  = arr[front];	
				 cout<<temp->data;	
				 if(temp->left) enQueue(temp->left);
				 if(temp->right) enQueue(temp->right);
			}
		}
		void inOrder1(node *root1,node *temp){
			if(root1==NULL){
				root = temp;
				return;	
			}	
			else if(root1->left==NULL) {
				root1->left = temp;
				return;		
			}
			else if(root1->right==NULL){
				root1->right = temp;
				return;
			}
			inOrder1(root1->left,temp);
			//inOrder1(root1->right,temp); skew making
		}
		void insertion(int x){
			node *temp = new node();
			temp->data=x;
			temp->left = NULL;
			temp->right = NULL;
			node *root1 = root;
			inOrder1(root1,temp);
			}};
int main(){
	binaryTree a;
	a.insertion(5);
	a.insertion(2);
	a.insertion(4);
	a.insertion(5);
	a.inOrder(root);
	a.levelOrder(root);
	return 0;
}
