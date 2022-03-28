#include <bits/stdc++.h>
using namespace std;

void insert(int idx, int num, int arr[], int& len){
  for(int i = len; i > idx; i--)
  arr[i] = arr[i-1];
  arr[idx] = num, len++;
}

void erase(int idx, int arr[], int& len){
  len--; // 나는 len을 제일 마지막에 뻈었다. 하지만 그러면 의미없는 게산을 마지막에 한번 더 하게된다.
  for(int i = idx; i < len; i++)
  arr[i] = arr[i+1];
 
}

void printArr(int arr[], int& len){
  for(int i = 0; i < len; i++) cout << arr[i] << ' ';
  cout << "\n\n";
}

void insert_test(){
  cout << "***** insert_test *****\n";
  int arr[10] = {10, 20, 30};
  int len = 3;
  insert(3, 40, arr, len); // 10 20 30 40
  printArr(arr, len);
  insert(1, 50, arr, len); // 10 50 20 30 40
  printArr(arr, len);
  insert(0, 15, arr, len); // 15 10 50 20 30 40
  printArr(arr, len);
}

void erase_test(){
  cout << "***** erase_test *****\n";
  int arr[10] = {10, 50, 40, 30, 70, 20};
  int len = 6;
  erase(4, arr, len); // 10 50 40 30 20
  printArr(arr, len);
  erase(1, arr, len); // 10 40 30 20
  printArr(arr, len);
  erase(3, arr, len); // 10 40 30
  printArr(arr, len);
}

int main(void) {
  insert_test();
  erase_test();
}

int func2(int arr[], int N){
  int occur[101] = {};
  for(int i = 0; i < N; i ++){
    if(occur[100-arr[i]])
    return 1;
    occur[arr[i]]=1;
  }
  return 0;
}