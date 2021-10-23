// Huffman coding assigns variable length codewords to fixed length input characters based on their frequencies/probabilities of occurrence. Given an array of characters along with their frequency of occurrences. Write a menu driven programming to perform the following functions.

#include <stdio.h>
#include <stdlib.h>
#define MAX_TREE_HT 100
struct MinHeapNode
{
    char d_517;
    unsigned f_517;
    struct MinHeapNode *left, *right;
};
struct MinHeap
{
    unsigned size_517;
    unsigned capacity;
    struct MinHeapNode **array;
};
struct MinHeapNode *newNode(char d_517, unsigned f_517)
{
    struct MinHeapNode *temp = (struct MinHeapNode *)malloc(sizeof(struct MinHeapNode));
    temp->left = temp->right = NULL;
    temp->d_517 = d_517;
    temp->f_517 = f_517;
    return temp;
}
struct MinHeap *createMinHeap(unsigned capacity)
{
    struct MinHeap *minHeap = (struct MinHeap *)malloc(sizeof(struct MinHeap));
    minHeap->size_517 = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode **)malloc(minHeap->capacity * sizeof(struct MinHeapNode *));
    return minHeap;
}
void swapMinHeapNode(struct MinHeapNode **a,struct MinHeapNode **b)
{
    struct MinHeapNode *t = *a;
    *a = *b;
    *b = t;
}
void minHeapify(struct MinHeap *minHeap, int idx)
{
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;
    if (left < minHeap->size_517 && minHeap->array[left]->f_517 < minHeap->array[smallest]->f_517)
    smallest = left;
    if (right < minHeap->size_517 && minHeap->array[right]->f_517 < minHeap->array[smallest]->f_517)
        smallest = right;
    if (smallest != idx)
    {
        swapMinHeapNode(&minHeap->array[smallest],&minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}
int isSizeOne(struct MinHeap *minHeap)
{
    return (minHeap->size_517 == 1);
}
struct MinHeapNode *extractMin(struct MinHeap *minHeap)
{
    struct MinHeapNode *temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size_517 - 1];
    --minHeap->size_517;
    minHeapify(minHeap, 0);
    return temp;
}
void insertMinHeap(struct MinHeap *minHeap,struct MinHeapNode *minHeapNode)
{
    ++minHeap->size_517;
    int i = minHeap->size_517 - 1;
    while (i && minHeapNode->f_517 < minHeap->array[(i - 1) / 2]->f_517)
    {
        minHeap->array[i] = minHeap->array[(i - 1) / 2];
        i = (i - 1) / 2;
    }
    minHeap->array[i] = minHeapNode;
}
void buildMinHeap(struct MinHeap *minHeap)
{
    int n = minHeap->size_517 - 1;
    int i;
    for (i = (n - 1) / 2; i >= 0; --i)
    minHeapify(minHeap, i);
}
void printArr(int arr_517[], int n)
{
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr_517[i]);
    printf("\n");
}
int isLeaf(struct MinHeapNode *root)
{
    return !(root->left) && !(root->right);
}
struct MinHeap *createAndBuildMinHeap(char d_517[],int f_517[], int size_517)
{
    struct MinHeap *minHeap = createMinHeap(size_517);
    for (int i = 0; i < size_517; ++i)
       minHeap->array[i] = newNode(d_517[i], f_517[i]);
    minHeap->size_517 = size_517;
    buildMinHeap(minHeap);
    return minHeap;
}
struct MinHeapNode *buildHuffmanTree(char d_517[],int f_517[], int size_517)
{
    struct MinHeapNode *left, *right, *top;
    struct MinHeap *minHeap = createAndBuildMinHeap(d_517, f_517, size_517);
    while (!isSizeOne(minHeap))
    {
        left = extractMin(minHeap);
        right = extractMin(minHeap);
        top = newNode('$', left->f_517 + right->f_517);
        top->left = left;
        top->right = right;
        insertMinHeap(minHeap, top);
    }
    return extractMin(minHeap);
}
void printCodes(struct MinHeapNode *root, int arr_517[],int top)
{
    if (root->left)
    {
        arr_517[top] = 0;
        printCodes(root->left, arr_517, top + 1);
    }
    if (root->right)
    {
        arr_517[top] = 1;
        printCodes(root->right, arr_517, top + 1);
    }
    if (isLeaf(root))
    {
        printf("%c: ", root->d_517);
        printArr(arr_517, top);
    }
}
void huffman_517(char d_517[], int f_517[], int size_517)
{
    struct MinHeapNode *root = buildHuffmanTree(d_517, f_517, size_517);
    int arr_517[MAX_TREE_HT], top = 0;
    printCodes(root, arr_517, top);
}
int main()
{
    char arr_517[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int f_517[] = {6,17,32,45,67,78};
    int size_517 = sizeof(arr_517) / sizeof(arr_517[0]);
    printf("Huffman Codes for corresponding characters are:\n");
    huffman_517(arr_517, f_517, size_517);
    return 0;
}