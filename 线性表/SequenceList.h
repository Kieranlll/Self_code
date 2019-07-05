#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H

#include<Status.h>
#include<stdio.h>
#include<stdlib.h>

#define LIST_INIT_SIZE	100		//�洢�ռ��ʼ������
#define LISTINCREMENT		10	//�洢�ռ��������

typedef int Elemtype;

typedef struct 
{
	Elemtype * elem;
	int length;	//��ǰ����
	int listsize;	//��ǰ�洢�ռ���������sizeof��Elemtype��Ϊ��λ
}SqList;		//��̬����˳��洢����

Status InitList_Sq(SqList& L)//��������Ա�
{
	L.elem = (Elemtype*)malloc(LIST_INIT_SIZE * sizeof(Elemtype));
	//L.elemΪһ��Elemtype���͵�ָ��
	
	if (!L.elem)return OVERFLOW;
	L.length = 0;
	L.listsize = LIST_INIT_SIZE;
	return OK;
}
//malloc��������һ��ָ�� �����˴洢�ռ�ĵ�ַ ��ָ�롣

void print_list(SqList L) {
	for (int i = 0; i < L.length; i++)printf("%d\n", L.elem[i]);
}//������Ա�

void DestroyList_Sq(SqList& L);//������Ա�

int LocateElem()

void ClearList_Sq(SqList& L);//����Ϊ�ձ�

void GetElem_Sq(SqList L, int i, Elemtype& e);//��e����L�е�i��ֵ

Status ListInsert_Sq(SqList& L, int i, Elemtype e)//�ڵ�i��λ��֮ǰ����һ����Ԫ��e����+1
{
	if (i<1 || i>L.length + 1)return ERROR;
	if (L.length >= L.listsize) {
		Elemtype *newbase = (Elemtype*)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(Elemtype));
		L.elem = newbase;
		//���Ӵ洢�ռ�����
	}
	for (int p = L.length; p >= i; p--)L.elem[p]=L.elem[p-1];
	//ָ�����ע��
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