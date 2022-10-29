#include <iostream>
using namespace std;

struct node{
	node *prev;
	int val;
	node *next;
} *head, *list = NULL;


int main(){
	int n,count=0; // count stores the number of nodes in the linked list
	cin >> n;
	n++;

	int i =0;
	while(n--){
		char op;
		cin >> op;

		if(op=='I'){
			int x;
			cin >> x;
			node *temp = new node;
			temp->val = x;

			if(head==NULL && list==NULL){
				temp->prev = NULL;
				temp->next = NULL;
				head = temp;
				list = temp;
			} else{
				if(i%2!=0){
					// add to the front of the list
					list->next = temp;
					temp->prev = list;
					list = list->next;
					list->next = NULL;
				} else{
					// add to the back of the head
					temp->next = head;
					head->prev = temp;
					head = head->prev;
					head->prev = NULL;
				}
			}
			count++;
		}

		if(op=='D'){
			// display tbe linked list
			node *display = head;

			for(int k=0;k<count;k++){
				cout << display->val << " " ;
				display = display->next;
			}
			if(list->next!=NULL){
				cout << display->val << " " ;
			}
			cout << endl;
		}

		if(op=='S'){
			// shuffle the linked list 
			int pos1,pos2;
			cin >> pos1;
			cin >> pos2; 
			node *p1,*p2;


			int x =1;
			node *trav;
			trav = head;
			while(x<count){
				if(x==pos1){
					p1 = trav;
				}
				if(x==pos2){
					p2 = trav;
				}
				trav = trav->next;
				x++;
			}

			// now that we have the nodes, we have to make a circular linked list 
			node *p1Prev = p1->prev;
			node *p2Next = p2->next;

			// breaking the link of p1 and p2 linked list
			p1Prev->next = NULL;
			p1->prev = NULL;

			p2Next->prev = NULL;
			p2->next = NULL;

			// now forming a circular linked list within p1 and p2
			p1->prev = p2;
			p2->next = p1;

			p1Prev->next = p2Next;
			p2Next->next = p1;

			
		}

		i++;
	}

	return 0;
}