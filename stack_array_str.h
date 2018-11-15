int push(char *arrstring,int top)//pass the address of the string array,top index of the stack
	{
	    char ch;
	    cout<<"\n Enter the element to be pushed to stack:";
        cin>>ch;
        arrstring[++top]=ch;
        return top;
	}


int pop(char *arrstring,int top)//pass the address of the string array,top index of the stack
{
    cout<<"\n The element popped is:"<<arrstring[top--];
    return top;
}


 char display_top(char *arrstring,int top)//pass the address of the string array,top index of the stack
 {
        return arrstring[top];
}


void display(char *arrstring,int top)//pass the address of the string array,top index of the stack
{
        if(top==-1){
            cout<<"\n stack is empty";
        }else
        {
            cout<<"\n top "<<"\n  :\n";
            for(int i=top;i>=0;i--)
            {
                cout<<"| "<<arrstring[i]<<" |"<<"\n";
            }
        }
}



int isfull(int top,int arrsize){
    if((top+1)==arrsize)//top+1 as top array starts from 0
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isempty(int top){
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
