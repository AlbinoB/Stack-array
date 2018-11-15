#include<iostream>
#include<stack_array_str.h>
#include<string.h>
using namespace std;

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
