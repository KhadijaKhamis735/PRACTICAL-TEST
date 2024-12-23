#include<stdio.h>
#include<string.h>

#define size 20

struct stack{
    int top;
    int age[size];
    char name[size][20];
}st;

int full(){
    if(st.top>=size-1){
        return 1;
    }
    else
    return 0;
}

int empty(){
    if(st.top == -1){
        return 1;
    }
    else
    return 0;
}

void push(int age, char name[]){
    st.age[st.top] = age;
    strcpy(st.name[st.top], name);
    st.top++;
}

void pop(){
    printf("The removed student is : \n",st.age[st.top],st.name[st.top]);
}

void display(){
    for(int i = 0; i <= st.top; i++){
        printf("The studeny name and age is:'\n",st.name[i],st.name[i]);
    }
}
int main(){
    int choice = 1;
    int age;
    char name;

    while(choice == 1){
        printf("1. Push \n");
        printf("2. pop \n");
        printf("3. Display \n ");

        printf("Please enter your choice");
        scanf("%d",&choice);

        switch(choice){
            case 1:
            printf("Enter the name of the student");
            scanf("%c", name);
            printf("Enter the age of the student");
            scanf("%d",age);
            push( char name, int age);
            break;
             
             case 2:
            
            if(age != -1 && name != -1){
                printf("The deleted value is \n ", age,name);
            }
            break;

            case 3:
            display();
            break;
        }
    }
}

