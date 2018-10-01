#include "Queue.h"
QueueNode* BuyNode(DataType x)
{
	QueueNode* newNode = (QueueNode*)malloc(sizeof(struct QueueNode));
	assert(newNode);
	newNode->data = x;
	newNode->_next = NULL;
	return newNode;
}
void QueueInit(Queue* q)
{
	assert(q);
	q->_head = q->_tail = NULL;
}
void QueuePush(Queue* q, DataType x)
{
	if (q->_head==NULL)
		q->_head = q->_tail=BuyNode(x);
	else
	{
		q->_tail->_next = BuyNode(x);
		q->_tail = q->_tail->_next;
	}
}
void QueuePop(Queue* q)
{
	QueueNode* flag = q->_head;
	q->_head = q->_head->_next;
	free(flag);
}
DataType QueueFront(Queue* q)
{
	assert(q);
	return q->_head->data;
}
DataType QueueBack(Queue* q)
{
	assert(q);
	return q->_tail->data;
}
size_t QueueSize(Queue* q)
{
	size_t cout = 0;
	while (q->_head)
	{
		cout++;
		q->_head = q->_head->_next;
	}
	return cout;
}
int QueueEmpty(Queue* q)
{
	return QueueSize(q) == 0 ? 0 : 1;
}
void QueueDestory(Queue* q)
{
	assert(q);
	while (q->_head)
	{
		QueueNode* del = q->_head;
		q->_head = q->_head->_next;
		free(del);
	}
}
void test(Queue* q)
{
	assert(q);
	QueuePush(q, 1);
	QueuePush(q, 2);
	QueuePush(q, 3);
	QueuePush(q, 4);
	//QueuePop(q);
	/*while (q->_head)
	{
		printf("%d ", q->_head->data);
		q->_head = q->_head->_next;
	}*/
	/*if (QueueEmpty(q)==0)
		printf("空队列\n");
	else
		printf("非空队列\n");*/
	printf("首元素：%d\n", QueueFront(q));
	printf("尾元素：%d\n", QueueBack(q));
	printf("大小：%d\n", QueueSize(q));
}
int main()
{
	Queue q;
	QueueInit(&q);
	test(&q);
	QueueDestory(&q);
	return 0;
}