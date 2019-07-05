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
//创建三元组T

Status DestoryTriplet(Triplet& T)
{
	free(T);	T = NULL;
	return OK;
}
//损毁三元组T

Status Get(Triplet T, ElemType i, ElemType& e)
{
	if(i<1 || i>3)return ERROR;
	e = T[i - 1];
	return OK;
}
//用e返回T的第i个值

Status Put(Triplet& T, ElemType i, ElemType e)
{
	if (i < 1 || i>3)return ERROR;
	T[i - 1] = e;
	return OK;
}
//改变T的第i个元素的值为e

Status IsAscending(Triplet T)
{
	if (T[0] <= T[1] && T[1] <= T[2])return TURE;
	return FALSE;
}
//如果T的元素为升序，则返回1，否则返回0

Status IsDescending(Triplet T)
{
	return (T[0] >= T[1]) && (T[1] >= T[2]);
}
//如果T的元素降序排列。则返回1，否则返回0

Status Max(Triplet T, ElemType& e)
{
	e = (T[0] >= T[1]) ? ((T[0] >= T[2]) ? T[0] : T[2]) : ((T[1] > T[2]) ? T[1] : T[2]);
	return OK;
}
//返回T中最大的值

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
//返回T中最小的值

#endif // !TRIPLET_CPP