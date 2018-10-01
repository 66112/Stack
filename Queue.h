#pragma once
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
typedef int DataType;
typedef struct QueueNode
{
	DataType data;
	struct QueueNode* _next;
}QueueNode;
typedef struct Queue
{
	QueueNode* _head;
	QueueNode* _tail;
}Queue;
void QueueInit(Queue* q);
void QueuePush(Queue* q, DataType x);
void QueuePop(Queue* q);
DataType QueueFront(Queue* q);
DataType QueueBack(Queue* q);
size_t QueueSize(Queue* q);
int QueueEmpty(Queue* q);
void QueueDestory(Queue* q);