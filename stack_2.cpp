void MyQueue :: push(int x)
{
       arr[rear]=x;
       rear++;
}

/*The method pop which return the element 
  poped out of the queue*/
int MyQueue :: pop()
    {if(front==rear)
    {
    front=0;
    rear=0;
    return -1;
    }
    int a=arr[front];
    front++;
    return a;
    
   
}

