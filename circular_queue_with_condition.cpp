#include <bits/stdc++.h>
#define pb(x) push_back(x)
#define all(x) x.begin(), x.end()
#define debug(x) cout << '>' << #x << ':' << x << endl;
#define int long long
#define ld long double
#define endl "\n";

const int mod = 1000000007;
using namespace std;

struct Node {
    int data;
    struct Node* link;
};

struct Queue {
    struct Node *front, *rear;
};

void enQueue(Queue* q, int value)
{
    struct Node* temp = new Node;
    temp->data = value;
    if (q->front == NULL)
        q->front = temp;
    else
        q->rear->link = temp;

    q->rear = temp;
    q->rear->link = q->front;
}

int deQueue(Queue* q)
{
    if (q->front == NULL) {
        printf("Queue is empty");
        return INT_MIN;
    }

    int value;
    if (q->front == q->rear) {
        value = q->front->data;
        free(q->front);
        q->front = NULL;
        q->rear = NULL;
    }
  
    else
    {
        struct Node* temp = q->front;
        value = temp->data;
        q->front = q->front->link;
        q->rear->link = q->front;
        free(temp);
    }

    if (value % 2 == 0) {
        return value;
    }
   
    else {
        enQueue(q, value + 1);
        printf("\nValue is deleted however an even value is enqueued.");
        return value;
    }
}

void displayQueue(struct Queue* q)
{
    struct Node* temp = q->front;
    printf("\nElements in Circular Queue are: ");
    
    while (temp->link != q->front) {
        printf("%d ", temp->data);
        temp = temp->link;
    }
   
    printf("%d", temp->data);
}

int32_t main()
{

    Queue* q = new Queue;
    q->front = q->rear = NULL;


    enQueue(q, 21);
    enQueue(q, 26);
    enQueue(q, 501);


    displayQueue(q);


    printf("\nDeleted value = %d", deQueue(q));
    printf("\nDeleted value = %d", deQueue(q));


    displayQueue(q);

    enQueue(q, 9);
    enQueue(q, 20);
    displayQueue(q);

    deQueue(q);

    displayQueue(q);

    return 0;
}
