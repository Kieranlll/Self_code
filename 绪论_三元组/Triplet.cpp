#ifndef TRIPLET_CPP
#define TRIPLET_CPP

#include"Triplet.h"

Status InitTriplet(Triplet& T, ElemType v1, ElemType v2, ElemType v3)
{
	T = (ElemType*)malloc(3 * sizeof(ElemType));
	if (!T)exit(OVERFLOW);
	T[0] = v1;	T[1] = v2;	T[2] = v3;
	return OK;
}
//������Ԫ��T

Status DestoryTriplet(Triplet& T)
{
	free(T);	T = NULL;
	return OK;
}
//�����Ԫ��T

Status Get(Triplet T, ElemType i, ElemType& e)
{
	if(i<1 || i>3)return ERROR;
	e = T[i - 1];
	return OK;
}
//��e����T�ĵ�i��ֵ

Status Put(Triplet& T, ElemType i, ElemType e)
{
	if (i < 1 || i>3)return ERROR;
	T[i - 1] = e;
	return OK;
}
//�ı�T�ĵ�i��Ԫ�ص�ֵΪe

Status IsAscending(Triplet T)
{
	if (T[0] <= T[1] && T[1] <= T[2])return TURE;
	return FALSE;
}
//���T��Ԫ��Ϊ�����򷵻�1�����򷵻�0

Status IsDescending(Triplet T)
{
	return (T[0] >= T[1]) && (T[1] >= T[2]);
}
//���T��Ԫ�ؽ������С��򷵻�1�����򷵻�0

Status Max(Triplet T, ElemType& e)
{
	e = (T[0] >= T[1]) ? ((T[0] >= T[2]) ? T[0] : T[2]) : ((T[1] > T[2]) ? T[1] : T[2]);
	return OK;
}
//����T������ֵ

Status Min(Triplet T, ElemType& e)
{
	if (T[0] <= T[1] && T[0] <= T[2])e = T[0];
	else
	{
		if (T[1] <= T[0] && T[1] <= T[2])e = T[1];
		else e = T[2];
	}
	return OK;
}
//����T����С��ֵ

#endif // !TRIPLET_CPP