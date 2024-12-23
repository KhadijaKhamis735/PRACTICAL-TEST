#include<stdio.h>

#define size 10

struct stack{
    int top;
    int arr[size];
}st;

void push(int value){
    if(st.top <= size -1){
        printf("The stack is full");
    }
    else{
        st.arr[st.top] = value;
        st.top++;
    }
}

int pop(){
    int value;
    if(st.top == -1){
        printf("The stack is empty");
    }
    else{
        value = st.arr[st.top];
        st.top--;
    }
}

void display(){
    for(int i = 0; i <= st.top; i++){
        printf("%d",st.arr[i]);
    }
}

int main(){
    int  list;
    printf("Enter total number to be reversed:  \n");
    scanf("%d",&list);

    int numbers[list];
    int i = 0;
    printf("Insert your numbers: \n");
    while(i < list){
       scanf("%d",&numbers[i]);
       i++;
    }
   
    for (int j = list - 1; j >= 0; j--) {
        printf("%d ", numbers[j]);
    }


}