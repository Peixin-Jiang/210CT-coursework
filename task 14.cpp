#include<iostream>
#include<stack>
#include<queue>
#include<fstream>

using namespace std;

class Vertex
{
public:
	int value,k;
	Vertex* AdjacentList[10];
	Vertex(int value)
	{
		this->value=value;
		this->k = 0;
	}
	void AddEdge(Vertex* v)
	{
		AdjacentList[k]=v;
		k++;
	}
};

Vertex** DepthFirstSearch(Vertex* v)
{
	stack<Vertex*> mystack;
	Vertex** visited = new Vertex*[10];
	int t=0;
	mystack.push(v);
	for(int i=0;i<10;i++)
	{
		visited[i]=NULL;
	}
	while(!mystack.empty())
	{
		Vertex* u= mystack.top();
		mystack.pop();
		int condition=false,t=0;
    	while(visited[t])
    	{
		 
	        if(visited[t]->value==u->value)
		    {
		    	condition=true;
			    break;
	    	}
	    	else
	    	{
		    	t++;
	    	}
    	}
		if(!condition)
		{
			visited[t]=u;
			for(int i=0;i<u->k;i++)
			{
				mystack.push(u->AdjacentList[i]);
			}
		}
	}
	return visited; 
}
Vertex** BreathFirstSearch(Vertex* v)
{
	queue<Vertex*> myqueue;
	Vertex** visited = new Vertex*[10];
	for(int i=0;i<10;i++)
	{
		visited[i]=NULL;
	}
	myqueue.push(v);
	while(!myqueue.empty())
	{
		Vertex* u=myqueue.front();
		myqueue.pop();
		int condition=false,t=0;
		while(visited[t])
		{
			if(visited[t]->value==u->value)
			{
				condition=true;
				break;
			}
			else
			{
				t++;
			}
		}
		if(!condition)
		{
			visited[t]=u;
			for(int i=0;i<u->k;i++)
			{
				myqueue.push(u->AdjacentList[i]);
			}
		}
	}
	return visited;
}

int main()
{
	Vertex* a=new Vertex(2);
	Vertex* b=new Vertex(3);
	Vertex* c=new Vertex(4);
	Vertex* d=new Vertex(5);
	Vertex* e=new Vertex(6);
	Vertex* f=new Vertex(1);
	a->AddEdge(f);
	a->AddEdge(b);
	f->AddEdge(a);
	b->AddEdge(a);
	b->AddEdge(c);
	b->AddEdge(d);
	c->AddEdge(b);
	d->AddEdge(b);
	d->AddEdge(e);
	e->AddEdge(d);
	
	ofstream myfile;
	myfile.open("nodes traversed.txt");
	
	Vertex** visited=DepthFirstSearch(a);
	
	myfile<<"DFS"<<endl;
	for(int i=0;i<6;i++)
	myfile<<visited[i]->value<<endl;
	
visited=BreathFirstSearch(a);
myfile<<"BFS"<<endl;
	for(int i=0;i<6;i++)
	myfile<<visited[i]->value<<endl;
	
	myfile.close();
	
	return 0;
}
