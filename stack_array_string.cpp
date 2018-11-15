#include<iostream>
#include<string.h>
using namespace std;
	int push(char *,int);
	int pop(char *,int);
	void display(char *,int);
	char display_top(char *,int);
	int isfull(int ,int);
	int isempty(int);
int main()
{

	int c,arrsize=10,top=-1;
	char arrstring[arrsize],ch;
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Push \n 2.pop \n 3.Display \n 4.Display top \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{
                if(isfull(top,arrsize)==1)
                {
                    cout<<"\n Stack overflow!!!";
                }
                else
                {
                    top=push(arrstring,top);
                }
				break;
				}
			case 2:{
                    if(isempty(top)==1)
                    {
                        cout<<"\n Stack underflow!!!";
                    }
                    else
                    {
                        top=pop(arrstring,top);
                    }
                    break;
                }
			case 3:{
			    cout<<"\n The element(s) in the stack is/are:";
				display(arrstring,top);
				break;
				}
			case 4:{
			    cout<<"\n the top element is:"<<display_top(arrstring,top);
				break;
				}
			 default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<5 && c>0);
	return 0;
}

	int push(char *arrstring,int top)
	{
	    char ch;
	    cout<<"\n Enter the element to be pushed to stack:";
        cin>>ch;
        arrstring[++top]=ch;
        return top;
	}
int pop(char *arrstring,int top){
    cout<<"\n The element popped is:"<<arrstring[top--];
    return top;
}

	void display(char *arrstring,int top)
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

    char display_top(char *arrstring,int top){
        return arrstring[top];
    }

int isfull(int top,int arrsize){
    if((top+1)==arrsize)//top+2 as the last position is holding '/0'
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
