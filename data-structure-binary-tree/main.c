// 二叉树和常见算法问题

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

//////////
// 测试
//////////

void TestBFS() {
    printf("bfs:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    BFS(root);
    printf("\n");
    FreeTree(root);
}

void TestPreOrder() {
    printf("pre order i:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    PreOrder(root);
    printf("\n");
    FreeTree(root);
}

void TestPreOrderII() {
    printf("pre order ii:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    PreOrderII(root);
    printf("\n");
    FreeTree(root);
}

void TestInOrder() {
    printf("in order i:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    InOrder(root);
    printf("\n");
    FreeTree(root);
}

void TestInOrderII() {
    printf("in order ii:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    InOrderII(root);
    printf("\n");
    FreeTree(root);
}

void TestPostOrder() {
    printf("post order i:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    PostOrder(root);
    printf("\n");
    FreeTree(root);
}

void TestPostOrderII() {
    printf("post order ii:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    PostOrderII(root);
    printf("\n");
    FreeTree(root);
}

void TestLevelOrder() {
    printf("level order:");
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    printf("\n");
    LevelOrder(root);
    FreeTree(root);
}

void TestCount() {
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *root = NewTree(a, 10);
    assert(Count(root) == 10);
    FreeTree(root);
}

void TestMaxDepth() {
    int a[] = {0, 1, 2, -1, -1, -1, 3, -1, 4};
    TreeNode *root = NewTree(a, 9);
    assert(MaxDepth(root) == 4);
    FreeTree(root);
}

void TestMinDepth() {
    int a[] = {0, 1, 2, -1, -1, -1, 3, -1, 4};
    TreeNode *root = NewTree(a, 9);
    assert(MinDepth(root) == 2);
    FreeTree(root);
}

void TestIsSymmetric() {
    int a[] = {1, 2, 2, 3, 4, 4, 3};
    TreeNode *root = NewTree(a, 7);
    assert(IsSymmetric(root));
    FreeTree(root);

    int b[] = {1, 2, 2, -1, 3, -1, 3};
    TreeNode *root1 = NewTree(b, 7);
    assert(!IsSymmetric(root1));
    FreeTree(root1);
}

void TestIsBalanced() {
    int a[] = {3, 9, 20, -1, -1, 15, 7};
    TreeNode *root = NewTree(a, 7);
    assert(IsBalanced(root));
    FreeTree(root);

    int a1[] = {1, 2, 2, 3, 3, -1, -1, 4, 4};
    TreeNode *root1 = NewTree(a1, 8);
    assert(!IsBalanced(root1));
    FreeTree(root1);
}

void TestIsBST1() {
    int a[] = {5, 3, 7, 2, 4, 6, 8};
    TreeNode *root = NewTree(a, 7);
    assert(IsBST1(root));
    FreeTree(root);

    int a1[] = {2, 1, 3};
    TreeNode *root1 = NewTree(a1, 3);
    assert(IsBST1(root1));
    FreeTree(root1);

    int a2[] = {5, 1, 4, -1, -1, 3, 6};
    TreeNode *root2 = NewTree(a2, 7);
    assert(!IsBST1(root2));
    FreeTree(root2);
}

void TestToArrayAndFromArray() {
    int n1 = 10;
    int a1[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    TreeNode *r1 = FromArray(a1, n1);
    IntArray *b1 = ToArray(r1);
    TreeNode *r11 = FromArray(IntArrayUnwrap(b1), IntArraySize(b1));
    assert(IsArrayEqual(a1, n1, IntArrayUnwrap(b1), IntArraySize(b1)));
    assert(Compare(r1, r11));
    FreeTree(r1);
    FreeIntArray(b1);
    FreeTree(r11);

    int n2 = 8;
    int a2[] = {2, 3, -1, 4, -1, 5, -1, 6};
    TreeNode *r2 = FromArray(a2, n2);
    IntArray *b2 = ToArray(r2);
    TreeNode *r21 = FromArray(IntArrayUnwrap(b2), IntArraySize(b2));
    assert(IsArrayEqual(a2, n2, IntArrayUnwrap(b2), IntArraySize(b2)));
    assert(Compare(r2, r21));
    FreeTree(r2);
    FreeIntArray(b2);
    FreeTree(r21);

    int n3 = 9;
    int a3[] = {2, -1, 3, -1, 4, -1, 5, -1, 7};
    TreeNode *r3 = FromArray(a3, n3);
    IntArray *b3 = ToArray(r3);
    TreeNode *r31 = FromArray(IntArrayUnwrap(b3), IntArraySize(b3));
    assert(IsArrayEqual(a3, n3, IntArrayUnwrap(b3), IntArraySize(b3)));
    assert(Compare(r3, r31));
    FreeTree(r3);
    FreeIntArray(b3);
    FreeTree(r31);
}

int main(void) {
    TestBFS();
    TestPreOrder();
    TestPreOrderII();
    TestInOrder();
    TestInOrderII();
    TestPostOrder();
    TestPostOrderII();
    TestLevelOrder();
    TestCount();
    TestMaxDepth();
    TestMinDepth();
    TestIsSymmetric();
    TestIsBalanced();
    TestIsBST1();
    TestToArrayAndFromArray();
    return 0;
}
