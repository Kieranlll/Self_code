#include<SequenceList.h>
int main()
{
	SqList Li;
	InitList_Sq(Li);
	Li.elem[0] = 3;
	Li.elem[1] = 5;
	Li.elem[2] = 7;
	Li.elem[3] = 9;
	Li.length = 4;
	ListInsert_Sq(Li, 2, 666);
	print_list(Li);
	return 0;
}