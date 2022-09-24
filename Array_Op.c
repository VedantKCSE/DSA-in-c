// program
#include <stdio.h>
#include <stdlib.h>
int a[100],n, i, value, position;

void create();
void display();
void insert();
void del();
void search();

int main()
{
    int choice = 1;
    while (choice<=6)
    {
        printf("\n\n--------MENU-----------\n");
        printf("1.CREATE\n");
        printf("2.DISPLAY\n");
        printf("3.INSERT\n");
        printf("4.DELETE\n");
        printf("5.SEARCH\n");
        printf("6.EXIT\n");
        printf("-----------------------");
        printf("\nENTER YOUR CHOICE:\t");

        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            search();
        case 6:
            exit(0);
        default:
            printf("\nInvalid choice:\n");
            break;
        }
    }
    return 0;
}

// creatng array elements
void create()
{
    printf("\nEnter the size of the array elements:\t");
    scanf("%d", &n);
    printf("\nEnter the elements for the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
}


// displaying an array elements
void display()
{
    int i;
    printf("\nThe array elements are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}


// inserting an element into an array
void insert()
{
    printf("\nEnter the position for the new element:\t");
    scanf("%d", &position);
    printf("\nEnter the element to be inserted :\t");
    scanf("%d", &value);
    for (i = n - 1; i >= position-1; i--)
    {
        a[i + 1] = a[i];
    }
    a[position-1] = value;
    n = n + 1;
}


// deleting an array element
void del()
{
    printf("\nEnter the position of the element to be deleted:\t");
    scanf("%d", &position);
    value = a[position-1];
    for (i = position-1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n = n - 1;
    printf("\nThe deleted element is =%d", value);
}

// Searching element in an array 
void search()
{
    int ele;
    printf("\nEnter the element which you want to  search : \t");
    scanf("%d", &ele);
    
    for (i =0; i < n - 1; i++)
    {
        if(a[i] == ele){
            printf("%d",i);
        }
    }
    
}
