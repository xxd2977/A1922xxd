#ifndef dlb.h
#define dlb.h

#include<stdio.h>
#include<malloc.h>
#define MaxSize 100
#define ElemType int

typedef struct LNode*List;
struct LNode{
	ElemType Data[Maxsize];
	int Last;
};
struct LNode L;

List PtL;
List MakeEmpty()
{
	List ptrL;
	Ptrl=(List)malloc(sizeof(struct LNode));
	PtrL->Last=-1;
	return PtrL;
}
void CretlL(List PtrL);
void PrintL(List PtrL);
void Find(List PtrL);
void Insert(List PtrL);
void Delete(List PtrL);

#endif
