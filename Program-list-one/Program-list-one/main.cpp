//
//  main.cpp
//  Program-list-one
//
//  Created by kidd on 2018/9/7.
//  Copyright © 2018年 Kidd. All rights reserved.
//
//题目：设计一个高效的算法，将顺序表的所有元素逆置，要求算法的空间复杂度为O(1)

#include <iostream>
using namespace std;


#define MaxSize 50

typedef struct student
{
    int data[MaxSize];
    int length;
}SqList;

void Reverse(SqList &L){
    int temp;
    for (int i = 0; i < L.length/2; i++) {
        temp = L.data[i];
        L.data[i] = L.data[L.length-i-1];
        L.data[L.length-i-1] = temp;
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int arr[] = {1,2,3,4,5,6};
    SqList list;
    for (int i = 0; i < 6; i++) {
        list.data[i] = arr[i];
    }
    list.length = 6;
    
    for (int i = 0 ; i < 6; i++) {
        cout << list.data[i] << " ";
    }
    cout << endl;
    
    Reverse(list);
    for (int i = 0 ; i < 6; i++) {
        cout << list.data[i] << " ";
    }
    return 0;
}
