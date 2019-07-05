#ifndef TRIPLET_H
#define TRIPLET_H
#include<stdio.h>
#include<stdlib.h>
#include<Status.h>

typedef int ElemType;

typedef ElemType *Triplet;

Status InitTriplet(Triplet &T,ElemType v1,ElemType v2,ElemType v3);
//创建三元组T

Status DestoryTriplet(Triplet &T);
//损毁三元组T

Status Get(Triplet T, ElemType i, ElemType &e);
//用e返回T的第i个值

Status Put(Triplet &T, ElemType i, ElemType e);
//改变T的第i个元素的值为e

Status IsAscending(Triplet T);
//如果T的元素为升序，则返回1，否则返回0

Status IsDescending(Triplet T);
//如果T的元素降序排列。则返回1，否则返回0

Status Max(Triplet T, ElemType &e);
//返回T中最大的值

Status Min(Triplet T, ElemType &e);
//返回T中最小的值

#endif