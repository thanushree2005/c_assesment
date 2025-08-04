#include <stdio.h>
#include <stdlib.h>
//stack-LIFO
struct student{
    int id;
    int maths;
    int science;
    struct student* next;
};
struct student*head=0;
struct student*temp=0;
struct student* push(struct student*root,int id,int m,int s){
    if(root==0){
        root=(struct student*)malloc(sizeof(struct student));
        head=temp=root;
        root->id=id;
        root->maths=m;
        root->science=s;
        root->next=0;
    }
    else{
        root=(struct student*)malloc(sizeof(struct student));
        temp->next=root;
        root->id=id;
        root->maths=m;
        root->science=s;
        root->next=0;
        temp=root;
    }
    return root;
}
void pop(){
     struct student*d=head;
     struct student*pre;
    {while(d!=0){
        if(d->next==0){
           printf("poped: \nid: %d maths:%d science:%d\n",d->id,d->maths,d->science);
           pre->next=0;
     }

        pre=d;
        d=d->next;
    }}
}
void display(){
    struct student*d=head;
    while(d!=0){
        printf("id: %d maths:%d science:%d\n",d->id,d->maths,d->science);
        d=d->next;
    }
}
int main()
{   struct student* root=0;
    printf("1.push 2.display 3.pop 4.exit");
    while(1){int c;
    printf("enter choice:");
    scanf("%d",&c);
    switch(c){
    case 1:
    printf("enter id:");
    int id;
    scanf("%d",&id);

         int m,s;
         printf("enter maths and science marks");
         scanf("%d %d",&m,&s);
         root=push(root,id,m,s);
         break;

    case 2:
        display();
        break;
    case 3:
         pop();
         break;
    case 4:
        printf("exiting");
        return 0;

   }}
}
