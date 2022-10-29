#include <iostream>
using namespace std;

class node {
public:
    node* prev;
    int data;
    node* next;
    node* loop;
 
    node(int value)
    {
        prev = NULL;   
        data = value;
        next = NULL;
        loop = NULL;       
    }
};
 
 
void display(node* head)
{
    node* arr[1000] = {};
    int index = 0;
    bool found = false;


    node* temp = head;
    // while (temp != NULL) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
    
    // cout << endl;
    // while (temp != NULL) {
    //     for(int k=0; k<index; k++){
    //         if(arr[k] == temp-> next){
    //             found = true;
    //         }
    //     }

    //     if(!found){
    //         arr[index] = temp;
    //         index++;
    //         cout << temp -> data << " --> ";
    //         temp = temp->next;

    //     }else{
    //         cout << temp->data << " --> ";
    //         cout << temp->next->data;
    //     }

        
    // }

    while(temp != NULL){
        cout << temp->data << " ";
        
        if(temp->loop != NULL){
            node* temp_loop = temp->loop;
            // cout << temp->loop->data << " ";
            while(temp_loop!=temp){
                cout << temp_loop ->data << " ";
                temp_loop = temp_loop->prev;
            }
            cout << temp->data << " ";
            temp = temp->loop;
        }else{
        }
        temp = temp->next;
    }

    cout << endl;



    // cout << "NULL" << endl;
}
 
 

void insert_at_head(node*& head, int value)
{
 
    node* n = new node(value);
    n->next = head;
 
    if (head != NULL) {
        head->prev = n;
    }
 
    head = n;
}
 
void insert_at_tail(node*& head, int value)
{
 
    if (head == NULL) {
        insert_at_head(head, value);
        return;
    }
 
    node* n = new node(value);
    node* temp = head;
 
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

int main() {
    int n;
    cin >> n;
    node* head = NULL;
    int counter = 0;
    
    for(int i=0; i<n; i++){
        char letter;
        int value;
        int pos1, pos2;

        
        cin >> letter;
        // cout << letter << endl;
        if(letter == 'I'){
            cin >> value;

            if(counter%2 == 0){
                insert_at_head(head, value);
            }else{
                insert_at_tail(head, value);
            }
            
            counter++;
            
            display(head);
        }else if(letter == 'D'){
            display(head);
        }else if(letter == 'S'){
            int pos1,pos2;
			cin >> pos1;
			cin >> pos2; 
			node *p1,*p2;


			int x =1;
			node *trav;
			trav = head;

            node* last = head;
            while(last->next != NULL){
                last = last->next;
            }


			while(x<=counter){
				if(x==pos1){
					p1 = trav;
				}
				if(x==pos2){
					p2 = trav;
				}
				trav = trav->next;
				x++;
			}

            cout << "p1 " << p1->data << endl;
            cout << "p2 " << p2->data << endl;
            
			// now that we have the nodes, we have to make a circular linked list 
			node *p1Prev = p1->prev;
			node *p2Next = p2->next;

            node* loop_trav = head;
            // bool cond = true;

            x = 1;
            // while(cond == true){
            while(x<=counter){
                // cout << "loop data " << loop_trav->loop->data << " ";

                if(loop_trav->loop != NULL){
                    cout << "Condition met" << endl;
                    loop_trav->next->loop = loop_trav->loop;
                    loop_trav->loop = NULL;
                    break;
                }

                loop_trav = loop_trav->next;
                x++;
            }
            cout << endl;
            
            //     cond = false;
            // }


            p1->loop = p2; // forming circular link


            
            // placing at end
            p2->next = NULL;

            p1->prev = last;
            last->next = p1;


            p1Prev->next = p2Next;
            p2Next->prev = p1Prev;


			// // breaking the link of p1 and p2 linked list
			// p1Prev->next = NULL;
			// p1->prev = NULL;

			// p2Next->prev = NULL;
			// p2->next = NULL;

			// // now forming a circular linked list within p1 and p2
			// p1->prev = p2;
			// p2->next = p1;

			// p1Prev->next = p2Next;
			// p2Next->next = p1;

			
		}


        // }
        
        
    }

	return 0;
}