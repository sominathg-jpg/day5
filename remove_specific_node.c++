#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
// this is a node creation functtion create a node and return it
struct Node *create_node(int data)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
// travesing and display the list
void diplay_list(struct Node *head)
{
    if (head == NULL)
    {
        printf("list is empty...\n");
    }
    else
    {
        while (head != NULL)
        {
            printf("[%d|%p]\t", head->data, head->next);
            head = head->next;
        }
    }
}
// deleting node from the list
struct Node *deleting_node(struct Node *head, int data)
{
    struct Node *temp = head;
    if (temp == NULL)
    {
        printf("there is no list...\n");
    }
    else
    {
        while (temp != NULL)
        {
            // if seleceted node is a head node
            if (temp->data == data && temp == head)
            {
                temp = temp->next;
                printf("selected node is head node that why head pointer shifted on the next step\n");
                return temp;
            }
            else if (temp->next->data == data)
            {
                temp->next = temp->next->next;
                printf("node deleted..\n");
                return temp;
            }
            temp = temp->next;
        }
    }
    return temp;
}
// this a way to creating a dynamic memory allocation in the heap memory

// delete a node from the given position

struct Node *deleteFromGivenPosition(struct Node *head, int position)
{

    if (position == 0)
    {
        head = head->next;
        printf("list is created..");
        return head;
    }
    else
    {

        int count = 0;
        while (head != NULL)
        {

            if (count + 1 == position)
            {

                head->next = head->next->next;
                printf("node deleted..\n");
                return head;
            }
            else
            {
                head = head->next;
                count++;
            }
        }
    }
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));

    // creating an node

    // struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    head = NULL;
    int choice;
    int ele_data;
    struct Node *newNode, *temp;
    do
    {
        printf("\n1.Inset Element\n");
        printf("2.delete element\n");
        printf("3.diplay list\n");
        printf("4.delete element from the given position\n");
        printf("Enter choice=\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter a data for node:\n");
            scanf("%d", &ele_data);
            newNode = create_node(ele_data);

            // if list is not present then creata a new list with head newnode
            if (head == NULL)
            {
                head = newNode;
                printf("List is created...\n");
                diplay_list(head);
            }
            else
            {
                // list is already present then add the node on the starting of the lis and shift head pointer on the new node that is a new head
                temp = head;
                newNode->next = head;
                head = newNode;
                printf("Node attached\n");
                diplay_list(head);
            }
            break;

        case 2:
            printf("Enter a data for deleting node:\n");
            scanf("%d", &ele_data);
            head = deleting_node(head, ele_data);
            diplay_list(head);
            break;
        case 4:
            printf("Enter the position that you want to delete node:\n");
            scanf("%d", &ele_data);
            head = deleteFromGivenPosition(head, ele_data);
            diplay_list(head);
            break;

        case 3:
            diplay_list(head);
            break;
        default:
            printf("Invalid choice\n");

            break;
        }

    } while (1);

    return 0;
}