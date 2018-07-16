/*************************************************************************
	> File Name: Bintree.h
	> Author: HarryHao
	> Mail: 954487858@qq.com 
	> Created Time: 2018年07月16日 星期一 11时27分31秒
 ************************************************************************/

#ifndef _BINTREE_H_
#define _BINTREE_H_
typedef int ElementType;
typedef struct bnode {
	ElementType Data;
	struct bnode* leftChild;
	struct bnode* rightChild;
}BitNode,*BinTree;
void CreateBinTree(BinTree* t);
void PreOrderTraverse(BinTree t);
void InOrderTraverse(BinTree t);
void PostOrderTraverse(BinTree t);
#endif // !_BINTREE_H_
