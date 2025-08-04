#include <stdio.h>
#include <stdlib.h>
struct student{
    int id;
    int maths;
    int science;
    struct student* next;
};
struct student*head=0;
struct student*temp=0;
struct student* insert(struct student*root,int id,int m,int s){
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
void del(int id){
     struct student*d=head;
     struct student*pre;
     if(head->id==id){
        head=head->next;
     }
     else{while(d!=0){
        if(d->next==0 && d->id==id){
           pre->next=0;
     }
        else if(d->id==id){
            pre->next=d->next;
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
    printf("1.insert 2.display 3.delete 4.exit");
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
         root=insert(root,id,m,s);
         break;

    case 2:
        display();
        break;
    case 3:
         printf("enter id to delete:");
         int id1;
         scanf("%d",&id1);
         del(id1);
         break;
    case 4:
        printf("exiting");
        return 0;

   }}
}
