#include <iostream>
using namespace std;

int main(){
    

    int index = 0;

    while(true){
        cout << "Enter the corresponding numbers to perform array operations" << endl;
        cout << "1 - Create" << endl;
        cout << "2 - insert" << endl;
        cout << "3 - delete" << endl;
        cout << "4 - display" << endl;
        cout << "5 - search" << endl;
        cout << "6 - exit" << endl;

        int n;
        cin >> n;
        switch(n){

            case 1:
                int arr[100];
                cout << "Enter the number of elements" << endl;
                int n;
                cin >> n;
                cout << "Enter the elements of the array" << endl;
                for(int i=0; i<n; i++){
                    cin >> arr[i];
                }
                index = n-1;
                break;
            case 2:
                cout << "Enter the value to insert" << endl;
                int insert_input;
                cin >> insert_input;
                arr[index+1] = insert_input;
                index++;
                break;
            case 3:
                cout << "Enter the index of element you want to delete" << endl;
                int delete_input;
                cin >> delete_input;
                for(int i=delete_input; i<index+1; i++){
                    arr[i] = arr[i+1];
                }
                index -= 1;
                break;
            case 4:
                for(int i=0; i<index+1; i++){
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 5:{
                cout << "Enter the element you want to search in the array" << endl;
                int search_input;
                cin >> search_input;

                int element_found = false;
                int found_index = 0;

                for(int i=0; i<index+1; i++){
                    if(arr[i] == search_input){
                        element_found = true;
                        found_index = i;
                        break;
                    }
                }

                if(element_found){
                    cout << "Element found at index " << found_index << endl;
                }else{
                    cout << "Element not found" << endl;
                }
                break;}
            case 6:
                cout << "Goodbye!";
                return 0;
            
        }
    }
}