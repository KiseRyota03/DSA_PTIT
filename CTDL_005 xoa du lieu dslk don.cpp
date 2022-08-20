#include<bits/stdc++.h>

using namespace std;
typedef struct Node* node;
struct Node{
	char data;
	Node *next;
};

// cap phat dong
node makeNode(int x) {
	node tmp = new Node();
	tmp -> data = x;
	tmp -> next = NULL;
	return tmp;
}


int main() {
	int n;
	cin >> n;
}