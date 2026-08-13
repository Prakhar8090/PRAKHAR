// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
 struct node{
        int info ;
        struct node *link;
    }*first;

    // =====>>>>>>.

    void create()
    {
        struct node *ptr, *cpt;
        char ch;

        ptr = (struct node*)malloc(sizeof(struct node));
        printf("Enter First Node INformation = ");
        scanf("%d",&ptr->info);
        first = ptr;

        do{
            cpt = (struct node*)malloc(sizeof(struct node));
            printf("Enter the next node info = ");
            scanf("%d",&cpt->info);
            ptr->link = cpt;
            ptr = cpt;
            printf("Press 'Y/N' for more node = ");
            scanf(" %c", &ch); 
            
        }while(ch == 'Y');
        ptr->link = NULL;
    

    }
    // =====>>>>>.
    void traversal(){
        struct node *ptr;
        printf("node infoprmation in linked list = ");
        ptr = first;
        while(ptr != NULL){
            printf("%d",ptr->info);
            ptr=ptr->link;
        }
        
    }
    // =====>>>>
    void insert_beg(){
        struct node *ptr;
        ptr = (struct node*)malloc(sizeof(struct node));
        printf("enter the data = ");
        scanf("%d",&ptr->info);
        ptr->link = first;
        first = ptr;
    }




void main() {
    while(1){
        printf("\n 1 for Create \n ");
        printf("2 for traversal \n ");
        printf("3 for insertion at beg \n ");
        printf("4 foir insertion at end \n ");
        printf("5 for insertion at given info \n ");
        printf("6 for deletion from beg \n ");
        printf("7 fir deletion at end \n ");
        printf("8 for deletion in given info \n");
        printf("9 for exist \n ");
        printf("Enter your choice \n");
        int ch;

        scanf("%d",&ch);
        

        switch(ch){
            case 1 : create();
                     break;
            case 2 : traversal();
                     break;
            case 3 : insert_beg();
                     break;
            // case 4 : insert_end();
            //          break;
            // case 5 : insert_info();
            //          break;
            // case 6 : del_beg();
            //          break;
            // case 7 : del_end();
            //          break;
            // case 8 : del_info();
            //          break;
            case 9 : exit(0);
        
        }                            
    }
}
   
    
























