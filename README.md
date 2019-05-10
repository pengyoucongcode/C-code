# binary-tree-struct
** Using this program, you can create, traverse the binary tree, 
and calculate the number of leaves of the binary tree, 
determine whether a node is a leaf node 
and calculate the total node of the binary tree. **

## rule
* The binary tree construction rule uses the preorder rule to construct the binary tree. 
* If the first root node is followed by the left node at the right node, 
* if the input is an integer-1, the left or right subtree of the positive integer just entered in front of it is empty. 
* The last number 0 in the array indicates that all the positive integers that make up the tree have been entered.

## template
```
5 4 -1 3 2 -1 -1 1 -1 -1 6 -1 7 8 -1 -1 9 -1 -1 0
```
* Enter the above set of data in the console window and the result of running the program will be as shown in the following:
```
============================================================
                二叉树构造规则
采用先序规则构造二叉树，先根节点后左节点在右节点
如果输入的是整数 -1，
则表示其前面刚输入的正整数的左或右子树为空。
数组里最后出现的数字0
表示构成该树的所有正整数已输入完毕。
============================================================
请按照构造规则输入二叉树的结点数据：
5 4 -1 3 2 -1 -1 1 -1 -1 6 -1 7 8 -1 -1 9 -1 -1 0
先序递归遍历二叉树：
5 4 3 2 1 6 7 8 9
先序非递归遍历二叉树：
5 4 3 2 1 6 7 8 9
中序递归遍历二叉树：
4 2 3 1 5 6 8 7 9
中序非递归遍历二叉树：
4 2 3 1 5 6 8 7 9
后序递归遍历二叉树:
2 1 3 4 8 9 7 6 5
后序非递归遍历二叉树：
2 1 3 4 8 9 7 6 5
该二叉树的叶子结点的数目：4
该二叉树的深度：4
该二叉树总节点数目：9
```
* The compiler I use is Microsoft's Visual Studio 2017
