#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    char data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* newNode(char data);

struct TreeNode* arrayToTree(char arr[], int start, int end);

struct TreeNode* newNode(char data)
{
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct TreeNode* arrayToTree(char arr[], int start, int end)
{
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    struct TreeNode* root = newNode(arr[mid]);

    root->left = arrayToTree(arr, start, mid - 1);
    root->right = arrayToTree(arr, mid + 1, end);

    return root;
}

void preorder(struct TreeNode* node)
{
    if (node == NULL) {
        return;
    }

    printf("%c", node->data);
    preorder(node->left);
    preorder(node->right);
}

void reverseArray(char* arr, int start, int end)
{
    while (start < end) {
        char temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

vold updateArray(char *arr, int n) [

561

int size;

571 for (size-0; arr[size]!='\0'; ++size);

381 reverseArray( arr, 0, size - 1);

59 reverseArray( arr, e, n1):

se reverseArray( arr, n, size 1):

AP-1

int main()

MIT

451 Car worl] "Jardint main()

65 | char arr[] = "jaaen*zrdpm";

461

67 int n;

68 for (n-0; arr[n]!='\0'; ++n);

691

781 struct TNode root arrayToTree(arr, 0, -1);

711 preorder(root);

721

printf("-");

731

741 updateArray(arr, 4);

75 |

root = arrayToTree(arr, 8, n-2);

161 preorder(root);

77 |

printf("-");

791

dateArray(arr, 2);

Moet- arrayletree(arr, e, n-13:

#1

procdertroet);for(m-4, arr[n]'\0'; n):

stract Node root arrayToTree(arr, 9, 1);

111 preorder(root);

72

| printf(":");

14 updateArray(arr, 4);

75 root arrayToTree(arr, 0, n-2);

76 | priorder(root):

77 | 78 1

printf("-");

79

updateArray(arr, 2);

861 root = arrayToTree(arr, 9, n-1); 811

preorder (root);

82

printf("-");

831

updateArray(arr, 1);

84

85 root = arrayToTree(arr, 8, n-3);

preorder (root);

return 0;