#include"Triplet.h"
int main()
{
	Triplet Tr;
	InitTriplet(Tr, 3, 6, 9);
	printf("TR_1 = %d",Tr[0]);
	ElemType e;
	Get(Tr, 2,e);
	printf("get e = %d",e);
	return 0;
}