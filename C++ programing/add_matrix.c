#include <iostream>
using namespace std;

void insertItem(int array[], int &length, int itemToInsert) {
    int insertIndex = -1;
    
    for (int i = 0; i < length; i++) {
        if (array[i] == itemToInsert) {
            insertIndex = i;
            break;
        } else if (array[i] > itemToInsert) {
            insertIndex = i;
            break;
        }
    }
    
    if (insertIndex == -1) {
        insertIndex = length;
    }
    
    for (int i = length; i > insertIndex; i--) {
        array[i] = array[i - 1];
    }
    
    array[insertIndex] = itemToInsert;
    length++;
}

int main() {
    int array[] = {10, 20, 30, 40, 50};
    int length = sizeof(array) / sizeof(array[0]);
    int itemToInsert = 35;
    
    insertItem(array, length, itemToInsert);
    
    cout << "Array after insertion: ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << " ";
    }
    
    return 0;
}