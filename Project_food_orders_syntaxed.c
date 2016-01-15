#include <stdio.h>
#include <string.h>
#include <conio.h>
struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

int order ()
{
    int n, in, qu;
    printf ("please enter your name: ");
    gets (p[order_count].name);
    p[order_count].order_number = 10000+order_count;
    items();

    printf ("How many items you want to order? ");
    scanf ("%d", &n);

    getchar ();
    p[order_count].number_of_food = n;
    p[order_count].cost = 0;
    p[order_count].number_of_food = 0;
    while (n--){
        printf ("\nEnter chosen item code\n");
        scanf ("%d", &in);
        getchar();
        switch(in){
    case 11 : {
        printf ("Enter the size of burger: 1. 200gm  2. 300gm\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (180*qu);
        break;
    }
    case 12 :{
        printf ("Enter the size of Chicken Pizza: 1. 12inch  2. 14inch  3. 16inch\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (750*qu);

        else if (i==2) p[order_count].cost += (975*qu);

        else  p[order_count].cost += (1250*qu);

        break;
    }
    case 13 :{
        printf ("Enter the amount of chicken: 1. 1 pcs  2. 4 pcs  3. 10 pcs\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (85*qu);

        else if (i==2) p[order_count].cost += (320*qu);

        else  p[order_count].cost += (790*qu);

        break;
    }
    case 14 :{
        printf ("Enter the size of grilled chicken: 1. quarter  2. half  3. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (70*qu);

        else if (i==2) p[order_count].cost += (140*qu);

        else  p[order_count].cost += (250*qu);

        break;
    }
    case 15 :{
        printf ("Enter the size of Noodles: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (130*qu);

        else p[order_count].cost += (250*qu);

        break;
    }
    case 16 :{
        printf ("Enter the size of pasta: 1. half  2. full\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (120*qu);

        else p[order_count].cost += (240*qu);

        break;
    }
    case 17 : {
        printf ("250 mg of OREO SHAKE\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (180*qu);
        break;
    }
    case 18 : {
        printf ("250 mg of Cold Coffee\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (65*qu);
        break;
    }
    case 19 : {
        printf ("250 mg of Cappuccino\n");

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;
        p[order_count].cost += (70*qu);
        break;
    }
    case 20 :{
        printf ("Enter the size of Coke: 1. 250mg  2. 500mg\n");
        int i;
        scanf ("%d", &i);
        getchar();

        printf ("Please enter the quantity: ");
        scanf ("%d", &qu);
        getchar();

        p[order_count].number_of_food +=qu;

        if (i==1) p[order_count].cost += (20*qu);

        else p[order_count].cost += (30*qu);
        break;
    }
    default : {
        printf ("Invalid selection try again\n");
        n++;
    }
        }
    }
    printf ("\nNumber of food ordered %d\n", p[order_count].number_of_food);
    printf ("\nThank you %s for your order. Your bill is %dtk.\nPlease wait while we prepare the food.\n\n", p[order_count].name, p[order_count].cost);
    order_count ++;
}
int receive ()
{
    if (order_count==0){
        printf ("Please order first\n");
        return;
    }

    else if (served_count == order_count) {
        printf ("All order served\n");
        return;
    }

    printf ("Order no. %d by %s is ready\n", p[served_count].order_number, p[served_count].name);
    printf ("Enjoy your meal\n\n");
    served_count++;
}
int display ()
{
    printf ("Total order taken: %d\n", (order_count));
    printf ("Total number of order served %d\n", served_count);
    printf ("Number of Currently waiting to be served: %d\n", (order_count-served_count));
    printf ("Currently preparing food for order no. %d\n\n", p[served_count].order_number);
}
void items ()
{
    printf("..................................MENU....................................\n");

    printf("Item Code#   Description-------------------size--------------------Price(tk)\n");

    printf("[11]---------Burger---------------------200/300gm------------------130/180\n");
    printf("[12]---------Chicken Pizza--------------12/14/16inch---------------750/975/1250\n");
    printf("[13]---------Fried Chicken--------------1/4/10 pcs-----------------85/320/790\n");
    printf("[14]---------Grilled Chicken------------quarter/half/full----------70/140/250\n");
    printf("[15]---------Noodles--------------------Half/Full------------------130/250\n");
    printf("[16]---------Pasta----------------------Half/Full------------------120/240\n");
    printf("[17]---------Oreo Shake-----------------250mg----------------------180\n");
    printf("[18]---------Cold Coffee----------------250mg----------------------65\n");
    printf("[19]---------Cappuccino-----------------250mg----------------------70\n");
    printf("[20]---------Coke-----------------------250/500mg------------------20/30\n\n");

}
int main ()
{
    printf ("\t\t     Welcome to \"cafe Error Not Found\"\n");
    while (1){
        printf ("1. Order\n2. Serve\n3. Display \n4. Exit the program\n");

        int in;
        scanf ("%d", &in);
        getchar ();
        switch (in){
            case 1 : {
                order ();
                break;
            }
            case 2 : {
                receive();
                break;
            }
            case 3 : {
                display();
                break;
            }
            case 4 : {
                system ("COLOR 2");
                printf ("We are closed come by again\n\n");
                printf ("Project submitted by Team ERROR NOT FOUND\n\n");
                printf ("Our hearty gratitude to honorable teacher\n\n");
                printf ("           Md. Nasir Uddin Eisty       \n");
                return 0;
            }
        }
    }
}
