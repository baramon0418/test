#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define TRUE 1
#define FALSE 0
#define MAX_QUEUE_SIZE 100
typedef struct {
    int id;
    int arrival_time;
    int service_time;
} element;

typedef struct {
    element queue[MAX_QUEUE_SIZE];
    int front, rear;
} QueueType;
QueueType queue;

//
void error(char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}
void init(QueueType* q)
{
    q->front = q->rear = 0;
}
int is_empty(QueueType* q)
{
    return (q->front == q->rear);
}
int is_full(QueueType* q)
{
    return((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

//�����Լ�
void enqueue(QueueType* q, element item)
{
    q->queue[q->rear] = item;
    q->rear++;
}

//�����Լ�

element dequeue(QueueType* q)
{
    return q->queue[q->front++];
}

//�����Լ�
element peek(QueueType* q)
{
    return q->queue[q->front++];
}
double random()
{
    return rand() / (double)RAND_MAX;
}

int durattion = 10;
double arrival_prob = 0.7;
int max_serv_time = 5;
int clock;

int customers;
int served_customers;
int waited_time;

int is_customer_arrived()
{
    if (random() < arrival_prob)
        return TRUE;
    else return FALSE;
}

void insert_customer(int arrival_time)
{
    element customer;

    customer.id = customers++;
    customer.arrival_time = arrival_time;
    customer.service_time = (int)(max_serv_time * random()) + 1;
    enqueue(&queue, customer);
    printf("�� %d�� %d�п� ���ɴϴ�.���񽺽ð��� %d���Դϴ�.\n", customer.id, customer.arrival_time, customer.service_time);
}

int remove_customer()
{
    element customer;
    int service_time = 0;

    if (is_empty(&queue)) return 0;
    customer = dequeue(&queue);
    service_time = customer.service_time - 1;
    served_customers++;
    waited_time += clock - customer.arrival_time;
    printf("�� %d�� %d�п� ���񽺸� �����մϴ�.���ð��� %d���̾����ϴ�.\n",
        customer.id, clock,
        clock - customer.arrival_time);
    return service_time;
}

void print_stat()
{
    printf("���񽺹��� ���� = %d\n", served_customers);
    printf("��ü ��� �ð� = %d��\n", waited_time);
    printf("1�δ� ��� ��� �ð� = %f��\n", (double)waited_time / served_customers);
    printf("���� ������� ���� = %d\n", customers - served_customers);
}

void main()
{
    int service_time = 0;

    clock = 0;
    while (clock < durattion) {
        clock++;
        printf("����ð�=%d\n", clock);
        if (is_customer_arrived()) {
            insert_customer(clock);
        }
        if (service_time > 0)
            service_time--;
        else {
            service_time = remove_customer();
        }
    }
    print_stat();
}