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
   html++++
    <!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
    <link rel="stylesheet" href="style.css">
</head>
<body>
    <center>

    <head>
        <h1> SPIDERMAN DHABHA  </h1>  
        <h2> BY-Mr.PRAKHAR SHARMA </h2>
        <title>spidermandhabha</title>
    </head>
    
    <img src="https://i.pinimg.com/236x/35/15/1c/35151cce83d1a75d8db85648464271cb.jpg" height = 320px>
    
    <img src="https://i.pinimg.com/236x/e5/24/ef/e524efba40cb0b780f2e5f85c5b69e55.jpg " height = 320px>

    <head>  
        <body>  
            <div id="main">
                <p>spider man dhabha is the unique dhbha in the world</p>
            </div>

            <div id="form">
                <h3>Login for Dhabha</h3>
                <form action=""method="">
                    <label> User Id </label><input type="text" placeholder=" Enter Your Name "><br><br>
                    <label> password </label><input type="text" placeholder="Enter your Password"><br><br>
                    <label> City </label><input type="text" placeholder="Enter Your city"><br><br>
                    <label> Mobile </label><input type="text" placeholder="Enter Your Phone number"><br><br>
                    <button>Enter DHABBHA </button>
                </form>

            </div>
        </body>
    </head>




    <p>MENU BAR </p>
    <table>
        <tr>
            <td>Sr.NO</td>
            <td>DISH</td>
            <td>PRICE</td>
        </tr>

        <tr>
            <td>1*</td>
            <td>MAGGI</td>
            <td>$120</td>
        </tr>

        <tr>
            <td>2*</td>
            <td>KADHAI PANNER</td>
            <td>$12000</td>
        </tr>
        
        <tr>
            <td>3*</td>
            <td>NAN ROTTI</td>
            <td>$50</td>
        </tr>

    </table>
   
    <div class="video">
    <iframe
        src="https://www.youtube.com/embed/dQw4w9WgXcQ"
        title="YouTube video"
        allowfullscreen>
    </iframe>
</div>

<style>
.video {
    width: 100%;
    max-width: 800px;
    aspect-ratio: 16 / 9;
}

.video iframe {
    width: 100%;
    height: 100%;
    border: 0;
}
</style>


   

    <a href="">Clickable Text Here</a>
    </center>
</body>
</html>


++++>>>>css




body{
    background-color: blanchedalmond;
}


h1{
    background-color: d palevioletred;
    color: pink;
}
h2{
    color :lightblue
}




    
























