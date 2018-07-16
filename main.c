/*************************************************************************
	> File Name: main.c
	> Author: HarryHao
	> Mail: 954487858@qq.com 
	> Created Time: 2018年07月16日 星期一 11时27分31秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include"Bintree.h"

int main()
{
	int level = 1;
	BinTree* t = (BinTree*)malloc(sizeof(BitNode));
	CreateBinTree(t);
	printf("Construct tree succeed!\n");
	printf("PreOderTraverse:\n");
	PreOrderTraverse(*t);
	printf("InOderTraverse:\n");
	InOrderTraverse(*t);
	printf("PostOderTraverse:\n");
	PostOrderTraverse(*t);
	return 0;
}
