#include <iostream>
using namespace std;

void printArray(int array[], int size,bool end=true) {
for (int i = 0; i < size; i++) {
cout << array[i] << " ";
}
if(end){cout << endl;}
}

void selectionSort(int array[], int size,bool asc=true) {
for (int step = 0; step < size - 1; step++) {
int min_idx = step;
for (int i = step + 1; i < size; i++) {

// To sort in descending order, change > to < in this line.
// Select the minimum element in each loop.
if (asc?array[i] < array[min_idx]:array[i] > array[min_idx])
min_idx = i;
}

// put min at the correct position
int temp = array[min_idx];
array[min_idx] = array[step];
array[step]= temp;
}
}

int returnMedian(int array[],int size){
int index = size/2;

return size%2==0?(array[index]+array[index-1])/2:array[index];
}

int eCount(int array[],int size){
int e=0;
for(int i = 0;i <size;i++){if(array[i]%2==0){
e++;
}
}
return e;
}

int main() {
int size1;
cin >> size1;
int arr[size1];
for(int i=0;i<size1;i++) {cin>>arr[i];
}
selectionSort(arr, size1);
cout << "Sorted array in Ascending Order:\n";
printArray(arr, size1);
cout << "Median: " << returnMedian(arr,size1)<<endl;

int ecount = eCount(arr,size1), ocount = size1-ecount;
int even[ecount],odd[ocount];
int x=0,y=0;
for(int i=0;i<ecount; i++){
 if(arr[i]%2==0){
even[x]=arr[i];
x++;
}else{
odd[y]=arr[i];
y++;
}
}


selectionSort(even, ecount);
selectionSort(odd, ocount,false);
 printArray(even,ecount,false);
 printArray(odd,ocount);5
for(int i=0;i<ecount;i++)
{
    arr[i]=even[i];
} 

for(int i=ecount,j=0;i<size1;i++,j++)
{ 
    arr[i]=odd[j];
}
printArray(arr, size1);

}

