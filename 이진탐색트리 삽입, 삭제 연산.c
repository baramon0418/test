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
        inorder(root->left);   // ���ʼ���Ʈ�� ��ȸ
        printf("%d ", root->key);    // ��� �湮
        inorder(root->right);   // �����ʼ���Ʈ�� ��ȸ
    }
}

void insert_node(TreeNode** root, int key)
{
    TreeNode* p, * t; // p�� �θ���, t�� ������ 
    TreeNode* n;    // n�� ���ο� ���
    t = *root;
    p = NULL;
    // Ž���� ���� ���� 
    while (t != NULL) {
        if (key == t->key) return;
        p = t;
        if (key < t->key) t = t->left;
        else t = t->right;
    }
    // key�� Ʈ�� �ȿ� �����Ƿ� ���� ����
    n = (TreeNode*)malloc(sizeof(TreeNode));
    if (n == NULL) return;
    // ������ ����
    n->key = key;
    n->left = n->right = NULL;
    // �θ� ���� ��ũ ����
    if (p != NULL)
        if (key < p->key)
            p->left = n;
        else p->right = n;
    else *root = n;
}

void delete_node(TreeNode** root, int key)
{
    TreeNode* p, * child, * succ, * succ_p, * t;
    // key�� ���� ��� t�� Ž��, p�� t�� �θ���
    p = NULL;
    t = *root;
    // key�� ���� ��� t�� Ž���Ѵ�.
    while (t != NULL && t->key != key) {
        p = t;
        t = (key < t->key) ? t->left : t->right;
    }
    // Ž���� ����� ������ t�� NULL�̸� Ʈ���ȿ� key�� ����
    if (t == NULL) {    // Ž��Ʈ���� ���� Ű
        printf("key is not in the tree");
        return;
    }
    if ((t->left == NULL) && (t->right == NULL)) {
        if (p != NULL) {
            // �θ����� �ڽ��ʵ带 NULL�� �����.
            if (p->left == t)
                p->left = NULL;
            else p->right = NULL;
        }
        else   // ���� �θ��尡 NULL�̸� �����Ǵ� ��尡 ��Ʈ
            *root = NULL;
    }
    // �ι�° ���: �ϳ��� �ڽĸ� ������ ���
    else if ((t->left == NULL) || (t->right == NULL)) {
        child = (t->left != NULL) ? t->left : t->right;
        if (p != NULL) {
            if (p->left == t)   // �θ� �ڽİ� ���� 
                p->left = child;
            else p->right = child;
        }
        else // ���� �θ��尡 NULL�̸� �����Ǵ� ��尡 ��Ʈ
            *root = child;
    }
    else {
        // ������ ����Ʈ������ �İ��ڸ� ã�´�.
        succ_p = t;
        succ = t->right;
        // �İ��ڸ� ã�Ƽ� ��� �������� �̵��Ѵ�.
        while (succ->left != NULL) {
            succ_p = succ;
            succ = succ->left;
        }
        // �ļ����� �θ�� �ڽ��� ���� 
        if (succ_p->left == succ)
            succ_p->left = succ->right;
        else
            succ_p->right = succ->right;
        // �ļ��ڰ� ���� Ű���� ���� ��忡 ����
        t->key = succ->key;
        // ������ �ļ��� ����
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