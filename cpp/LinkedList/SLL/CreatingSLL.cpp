
class node{
int data;
node *next;    //next storing address of node

//for initializing value using constructor
//node(int val){
//head->data=5;
//head->next=NULL;
//}
};

class SLL{
    private:
    node *head;
    public:
    void creatlist();
    void display();
};

void SLL :: creatlist(){
    node *temp;
    node *newnode;
    int val,flag=1;
    do{
    cout<<"enter the data ";
    newnode->data=val;
    newnode->next=NULL;

    if(flag==1){
        head=newnode;
        temp=head;
        flag=0;
        }

    else{
    temp->next=newnode;
    temp=newnode;
    }

    cout<<"do you want to continue (1:Yes 0:No)"
    cin>>ans;
    }while(ans!=0);
}

void SLL::display(){
    node *temp;
    temp=head;
    if(temp==NULL)
       cout<<"list is empty"
    while(temp!=NULL){
        cout<<"\n"<<temp->data;
        temp=temp->next;
    }
}

int main(){
//creating a node in dynamic way
//(static way would be by creating object of class)
node *head;
//creating node
head = new  node();
head->data=5;
head->next=NULL;

return 0;
}