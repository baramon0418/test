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

//삽입함수
void enqueue(QueueType* q, element item)
{
    q->queue[q->rear] = item;
    q->rear++;
}

//삭제함수

element dequeue(QueueType* q)
{
    return q->queue[q->front++];
}

//삭제함수
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
    printf("고객 %d이 %d분에 들어옵니다.서비스시간은 %d분입니다.\n", customer.id, customer.arrival_time, customer.service_time);
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
    printf("고객 %d이 %d분에 서비스를 시작합니다.대기시간은 %d분이었습니다.\n",
        customer.id, clock,
        clock - customer.arrival_time);
    return service_time;
}

void print_stat()
{
    printf("서비스받은 고객수 = %d\n", served_customers);
    printf("전체 대기 시간 = %d분\n", waited_time);
    printf("1인당 평균 대기 시간 = %f분\n", (double)waited_time / served_customers);
    printf("아직 대기중인 고객수 = %d\n", customers - served_customers);
}

void main()
{
    int service_time = 0;

    clock = 0;
    while (clock < durattion) {
        clock++;
        printf("현재시각=%d\n", clock);
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