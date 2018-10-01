//#include "Stack.h"
//void StackInit(Stack* ps)
//{
//	ps->_size = 0;
//	ps->_top = -1;
//}
//void StackPush(Stack* ps,DataType x)
//{
//	assert(ps);
//	ps->_array[++ps->_top] = x;
//	ps->_size++;
//}
//void StackPop(Stack* ps)
//{
//	assert(ps);
//	ps->_size--;
//	ps->_top--;
//}
//DataType StackTop(Stack* ps)
//{
//	assert(ps);
//	return ps->_array[ps->_top];
//}
//size_t StackSize(Stack* ps)
//{
//	assert(ps);
//	return ps->_size;
//}
//
//int StackEmpty(Stack* ps)
//{
//	return ps->_size == 0 ? 0 : 1;    //¿Õ 0  £¬  ·Ç¿Õ  1
//}
//
//void StackDestroy(Stack* ps)
//{
//	assert(ps);
//	ps->_size = 0;
//	ps->_top = -1;
//}
//
//void Print(Stack* ps)
//{
//	assert(ps);
//	while (StackEmpty(ps))
//	{
//		printf("%d ", StackTop(ps));
//		StackPop(ps);
//	}
//	printf("\n");
//}
//void test()
//{
//	Stack s;
//	StackInit(&s);
//	StackPush(&s, 1);
//	StackPush(&s, 2);
//	StackPush(&s, 5);
//	StackPush(&s, 4);
//	StackPop(&s);
//}
//
//int main()
//{
//	test();
//	return 0;
//}