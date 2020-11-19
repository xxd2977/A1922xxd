#include<stdio.h>
#include<malloc.h>
#define MaxSize 100
#define ElemType int
typedef struct LNode*List;//定义一个单链表
struct LNode{
	         ElemType Data[MaxSize];
		           int Last;
};
struct LNode L;
List PtrL;
List MakeEmpty()//初始化，创建一个空表
{
	         List PtrL;
		           PtrL=(List)malloc(sizeof(struct LNode));
			              PtrL->Last=-1;
				                  return PtrL;
}
void CretList(List PtrL)//创建链表
{
	         int n,i;
		           printf("请输入想要创建的单链表长度:");
			              scanf("%d",&n);
				                  if(n<1||n>MaxSize)
							                       printf("输入长度非法");
						               printf("请输入%d个数：",n);
							                     for(i=0;i<n;i++){
										                            scanf("%d",&L.Data[i]);
													                            L.Last++;
																                             }
									                    printf("创建成功!\n");
}
void PrintList(List PtrL)//输出当前链表表中所有元素
{
	         printf("当前链表所有元素：");
		           for(int i=0;i<L.Last;i++)
				                      {
							                                   printf("%d ",L.Data[i]);
											                                 }
			              printf("\n");
}
void Find(List PtrL)//查找元素X的位置
{
	            ElemType X;int flag=0;
		                    printf("请输入想查找的元素：");
				                        scanf("%d",&X);
							                     for(int i=0;i<L.Last;i++)
										                                   { if(L.Data[i]==X)
															                                              {
																					                                                               printf("%d位于第%d个位置\n",X,i+1);flag=1;
																												                                                                  }

																				                                                  }
									                           if(flag==0)
													                                  printf("输入数据非法\n");

}
void Insert(List PtrL) //在位置i插入元素X
{   ElemType X;
	         int i,j;
		           printf("你想在那个位置插入元素:");
			              scanf("%d",&i);
				                  if(L.Last>MaxSize-1)
							                       {
										                                     printf("表满，无法插入\n");
														                                    return;
																		                         }
						                  if(i<1||i>L.Last+2){
									                              printf("位置不合法，无法插入\n");
												                                      return;
																                      }
								                  printf("你想插入什么元素：");
										                  scanf("%d",&X);
												                  for(j=L.Last;j>=i-1;j--)
															                          L.Data[j+1]=L.Data[j];
														                  L.Data[i-1]=X;
																                  L.Last++;
																		                  printf("插入成功\n");
}
void Delete(List PtrL) //删除第i个元素
{
	         int j,i;
		           printf("你想删除第几个元素：");
			              scanf("%d",&i);
				                  if(i<1||i>L.Last+1)
							                       {
										                                      printf("第%d个元素不存在",i);
														                                       return;
																		                                         }
						               for(j=i;j<=L.Last;j++)
								                             L.Data[j-1]=L.Data[j];
							                     L.Last--;
									                    printf("删除成功\n");
}
int main()
{
	         List L;
		           L=MakeEmpty();
			              CretList(L);
				                  PrintList(L);
						               Find(L);
							                      Insert(L);
									                       PrintList(L);
											                         Delete(L);
														                    PrintList(L);
																                        return 0;
																			        }
