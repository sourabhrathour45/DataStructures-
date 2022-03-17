#include <iostream>
using namespace std;

int binarySearch(int arr[] , int size , int key){

int start = 0;
int end = size - 1;
int mid = start + (end-start)/2;

while (start<=end){
    if (arr[mid]==key){
        return mid;
    }
    else if (key>arr[mid]){
        start = mid + 1;
    } 
    else end = mid - 1;

    mid = start + (end-start)/2;
}

return -1;

}

int main() {

int array[100];
cout << "Enter the size of the array : ";
int size;
cin >> size;
cout << "Enter the elements of the array : ";
for (int i =0 ; i < size ; i++){
    cin >> array[i];
}
cout << "Enter the item to be searched : " ;
int item;
cin >> item;

int index = binarySearch(array, 8 , item);
cout << "Index : " << index << endl;


}