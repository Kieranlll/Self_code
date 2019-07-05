#ifndef TRIPLET_H
#define TRIPLET_H
#include<stdio.h>
#include<stdlib.h>
#include<Status.h>

typedef int ElemType;

typedef ElemType *Triplet;

Status InitTriplet(Triplet &T,ElemType v1,ElemType v2,ElemType v3);
//������Ԫ��T

Status DestoryTriplet(Triplet &T);
//�����Ԫ��T

Status Get(Triplet T, ElemType i, ElemType &e);
//��e����T�ĵ�i��ֵ

Status Put(Triplet &T, ElemType i, ElemType e);
//�ı�T�ĵ�i��Ԫ�ص�ֵΪe

Status IsAscending(Triplet T);
//���T��Ԫ��Ϊ�����򷵻�1�����򷵻�0

Status IsDescending(Triplet T);
//���T��Ԫ�ؽ������С��򷵻�1�����򷵻�0

Status Max(Triplet T, ElemType &e);
//����T������ֵ

Status Min(Triplet T, ElemType &e);
//����T����С��ֵ

#endif