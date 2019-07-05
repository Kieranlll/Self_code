#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include<Status.h>
#include<stdio.h>
#include<stdlib.h>

#define LIST_INIT_SIZE	100		//存储空间初始分配量
#define LISTINCREMENT		10	//存储空间分配增量

typedef int Elemtype;

typedef struct 
{
	Elemtype * elem;
	int length;	//当前长度
	int listsize;	//当前存储空间容量，以sizeof（Elemtype）为单位
}SqList;		//动态分配顺序存储机构

Status InitList_Sq(SqList& L)//构造空线性表
{
	L.elem = (Elemtype*)malloc(LIST_INIT_SIZE * sizeof(Elemtype));
	//L.elem为一个Elemtype类型的指针
	
	if (!L.elem)return OVERFLOW;
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}
//malloc函数返回一个指向 分配了存储空间的地址 的指针。

void print_list(SqList L) {
	for (int i = 0; i < L.length; i++)printf("%d\n", L.elem[i]);
}//输出线性表

void DestroyList_Sq(SqList& L);//损毁线性表

int LocateElem()

void ClearList_Sq(SqList& L);//重置为空表

void GetElem_Sq(SqList L, int i, Elemtype& e);//用e返回L中第i个值

Status ListInsert_Sq(SqList& L, int i, Elemtype e)//在第i个位置之前插入一个新元素e，表长+1
{
	if (i<1 || i>L.length + 1)return ERROR;
	if (L.length >= L.listsize) {
		Elemtype *newbase = (Elemtype*)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(Elemtype));
		L.elem = newbase;
		//增加存储空间容量
	}
	for (int p = L.length; p >= i; p--)L.elem[p]=L.elem[p-1];
	//指针操作注意
	L.elem[i-1] = e;
	L.length++;
	return OK;
}
/*void union(SqList& La, SqList Lb) {
	int La_len = La.length, Lb_len = Lb.length;
	for (i = 0; i < Lb_len; i++) {

	}
}*/

#endif // !1