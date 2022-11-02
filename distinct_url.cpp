// C++ program to print distinct URLs using Trie and Doubly Linked List

#include <bits/stdc++.h>

using namespace std;

const int ALPHABET_SIZE = 256;

struct DLLNode {
	string data;
	DLLNode* next, * prev;
};

struct TrieNode {
	TrieNode* children[ALPHABET_SIZE];
	bool isLeaf;
	DLLNode* LLptr;
};

void push(DLLNode*& head_ref, string new_data) {
	DLLNode* new_node = new DLLNode;
	new_node->data = new_data;
	new_node->next = (head_ref);
	new_node->prev = NULL;
	if(head_ref != NULL)
		head_ref->prev = new_node;
	head_ref = new_node;
}

void deleteNode(DLLNode*& head_ref, DLLNode* del) {
	if (head_ref == NULL || del == NULL)
		return;
	if (head_ref == del)
		head_ref = del->next;
	if (del->next != NULL)
		del->next->prev = del->prev;
	if (del->prev != NULL)
		del->prev->next = del->next;
	delete(del);
	return;
}

TrieNode* getNewTrieNode(void) {
	TrieNode* pNode = new TrieNode;
	if (pNode) {
		pNode->isLeaf = false;
		for (int i = 0; i < ALPHABET_SIZE; i++)
			pNode->children[i] = NULL;
		pNode->LLptr = NULL;
	}
	return pNode;
}

void insert(TrieNode* root, string key, DLLNode*& head)
{
	int index;
	TrieNode* pCrawl = root;
	for (int level = 0; level < key.length(); level++) {
		index = int(key[level]);
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNewTrieNode();
		pCrawl = pCrawl->children[index];
	}
	if (pCrawl->isLeaf) {
		if (pCrawl->LLptr)
			deleteNode(head, pCrawl->LLptr);
		pCrawl->LLptr = NULL;
	} else {
		pCrawl->isLeaf = true;
    push(head, key);
		pCrawl->LLptr = head;
	}
}

int main() {
	string urls[] = {
		"https://www.geeksforgeeks.org",
		"https://write.geeksforgeeks.org",
		"http://quiz.geeksforgeeks.org",
		"http://qa.geeksforgeeks.org",
		"https://practice.geeksforgeeks.org",
		"https://ide.geeksforgeeks.org",
		"http://quiz.geeksforgeeks.org",
		"https://practice.geeksforgeeks.org",
		"https://ide.geeksforgeeks.org",
		"http://quiz.geeksforgeeks.org",
		"http://qa.geeksforgeeks.org",
		"https://practice.geeksforgeeks.org"
		};
	TrieNode* root = getNewTrieNode();
	DLLNode* head = NULL;
	int n = sizeof(urls)/sizeof(urls[0]);
	for (int i = 0; i < n; i++)
		insert(root, urls[i], head);
  cout << head->data << endl;
	return 0;
}
