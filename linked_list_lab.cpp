#include <iostream>
using namespace std;

// ১. নোডের স্ট্রাকচার তৈরি
struct Node {
    int data;
    Node* next;

    // কনস্ট্রাক্টর (সহজে নোড তৈরির জন্য)
    Node(int value) {
        data = value;
        next = NULL;
    }
};

// গ্লোবাল হেড পয়েন্টার
Node* head = NULL;

// ২. নোড তৈরি করার ফাংশন
Node* newNode(int value) {
    return new Node(value);
}

// ৩. শুরুতে নোড যুক্ত করার ফাংশন
void addToLinkedList(Node* NN) {
    NN->next = head;
    head = NN;
}

// ৪. লিংকড লিস্ট প্রিন্ট / ট্রাভার্স করার ফাংশন
void traverseLinkedList() {
    Node* ptr = head;
    while (ptr != NULL) {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    cout << endl;
}

int main() {
    Node* NN = NULL;
    head = NULL;

    // লুপ চালিয়ে ১০, ২০, ৩০ ... ১০০ ইনসার্ট করা
    for (int i = 0; i <= 10; i++) {
        NN = newNode(10 * i);
        addToLinkedList(NN);
        traverseLinkedList(); // প্রতি ধাপে লিস্ট প্রিন্ট করা
    }

    return 0;
}