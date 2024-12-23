#include<stdio.h>


#define SIZE 10

struct queue{
    int front, rear;
    int arr[SIZE];
}q,temp;

void inqueue(int item){
    if(q.rear >= SIZE - 1){
        printf("Queue is overflow");
    }
    else
    q.arr[q.rear] = item;
     q.rear++;
}

int dequeue(){
    int item;
    if(q.front == -1){
        printf("Queue underflow");
    }
    else
    item = q.arr[q.front--];
      return item;      
}

void display(){
    for(int i = 0; i <= q.rear; i++){
        printf("%d", q.arr[i]);
    }
    
}

int main(){
    q.front = 0;
    q.rear = 0;
    temp.front = 0;
    temp.rear = 0;
    int number, value, max = -1;
    printf("Please enter the number of elements to be added to the queue : \n");
    scanf("%d",&number);
    for(int i = 0; i < number; i++){
        printf("Insert numbers %d \n   ", i + 1);
        scanf("%d",&value);
        inqueue(value);
    }
    while(q.front<q.rear){
        int numbers = dequeue();
        if(numbers > max){
            max = numbers;
        }
        temp.arr[temp.rear++] = numbers;
    }
    while(temp.front<temp.rear){
        q.arr[q.rear++] = temp.arr[temp.front++];
    }
    printf("The maximum elements are: ", max);
    

    }
