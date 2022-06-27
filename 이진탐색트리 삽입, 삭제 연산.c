#include<stdio.h>

typedef struct TreeNode {
    int key;
    struct TreeNode* left, * right;
} TreeNode;

TreeNode n1 = { 3, NULL, NULL };
TreeNode n2 = { 12, NULL, NULL };
TreeNode n3 = { 7, &n1, &n2 };
TreeNode n4 = { 22, NULL, NULL };
TreeNode n5 = { 26, &n4, NULL };
TreeNode n6 = { 18, &n3, &n5 };
TreeNode n7 = { 99, NULL, NULL };
TreeNode n8 = { 68, NULL, &n7 };
TreeNode n9 = { 35, &n6, &n8 };
TreeNode* root = &n9;
TreeNode* p = &root;

inorder(TreeNode* root)
{
    if (root) {
        inorder(root->left);   // 왼쪽서브트리 순회
        printf("%d ", root->key);    // 노드 방문
        inorder(root->right);   // 오른쪽서브트리 순회
    }
}

void insert_node(TreeNode** root, int key)
{
    TreeNode* p, * t; // p는 부모노드, t는 현재노드 
    TreeNode* n;    // n은 새로운 노드
    t = *root;
    p = NULL;
    // 탐색을 먼저 수행 
    while (t != NULL) {
        if (key == t->key) return;
        p = t;
        if (key < t->key) t = t->left;
        else t = t->right;
    }
    // key가 트리 안에 없으므로 삽입 가능
    n = (TreeNode*)malloc(sizeof(TreeNode));
    if (n == NULL) return;
    // 데이터 복사
    n->key = key;
    n->left = n->right = NULL;
    // 부모 노드와 링크 연결
    if (p != NULL)
        if (key < p->key)
            p->left = n;
        else p->right = n;
    else *root = n;
}

void delete_node(TreeNode** root, int key)
{
    TreeNode* p, * child, * succ, * succ_p, * t;
    // key를 갖는 노드 t를 탐색, p는 t의 부모노드
    p = NULL;
    t = *root;
    // key를 갖는 노드 t를 탐색한다.
    while (t != NULL && t->key != key) {
        p = t;
        t = (key < t->key) ? t->left : t->right;
    }
    // 탐색이 종료된 시점에 t가 NULL이면 트리안에 key가 없음
    if (t == NULL) {    // 탐색트리에 없는 키
        printf("key is not in the tree");
        return;
    }
    if ((t->left == NULL) && (t->right == NULL)) {
        if (p != NULL) {
            // 부모노드의 자식필드를 NULL로 만든다.
            if (p->left == t)
                p->left = NULL;
            else p->right = NULL;
        }
        else   // 만약 부모노드가 NULL이면 삭제되는 노드가 루트
            *root = NULL;
    }
    // 두번째 경우: 하나의 자식만 가지는 경우
    else if ((t->left == NULL) || (t->right == NULL)) {
        child = (t->left != NULL) ? t->left : t->right;
        if (p != NULL) {
            if (p->left == t)   // 부모를 자식과 연결 
                p->left = child;
            else p->right = child;
        }
        else // 만약 부모노드가 NULL이면 삭제되는 노드가 루트
            *root = child;
    }
    else {
        // 오른쪽 서브트리에서 후계자를 찾는다.
        succ_p = t;
        succ = t->right;
        // 후계자를 찾아서 계속 왼쪽으로 이동한다.
        while (succ->left != NULL) {
            succ_p = succ;
            succ = succ->left;
        }
        // 후속자의 부모와 자식을 연결 
        if (succ_p->left == succ)
            succ_p->left = succ->right;
        else
            succ_p->right = succ->right;
        // 후속자가 가진 키값을 현재 노드에 복사
        t->key = succ->key;
        // 원래의 후속자 삭제
        t = succ;
    }
}

void main()
{
    inorder(root);
    printf("\n");
    insert_node(p, 9);
    inorder(root);
    printf("\n");
    delete_node(p, 18);
    inorder(root);
    printf("\n");
}