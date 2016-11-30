#include<iostream>
using namespace std;
class Vertex
{
public:
	int value,k,tw;
	Vertex* AdjacentList[10];
	int weight[10];
	Vertex* pre; 
	Vertex(int value)
	{
		this->value=value;
		this->k = 0;
		this->tw=1000;
	}
	void AddEdge(Vertex* v,int w)
	{
		AdjacentList[k]=v;
		k++;
	}
};

void dijkstra(Vertex** graph,Vertex* s,Vertex* d)
{
	Vertex* v=s;
    s->tw=0;
    Vertex** visited=new Vertex*[10];
    	int t=0;
    bool condition=false;
    while(v!=d)
    {
    	for(int i=0;i<v->k;i++)
    	{
    		if((v->tw+v->weight[i])<(v->AdjacentList[i]->tw))
    		{
    			v->AdjacentList[i]->tw=v->tw+v->weight[i];
    			v->AdjacentList[i]->pre=v;
    		}
    	}
        visited[t]=v;
        t++;
      int	min=1000;
    	for(int i=0;i<5;i++)
		{
			condition=false;
			for(int j=0;j<t;j++)
    	   {
		 
	            if(visited[j]->value==graph[i]->value)
		       {
		           	condition=true;
			        break;
	        	}
        	}
        	if(!condition&&graph[i]->tw<min)
		    {
	     		v=graph[i];
	    		min=v->tw;
	    	}
 	    }
    }
}

int main()
{
	Vertex* a=new Vertex(1);
	Vertex* b=new Vertex(2);
	Vertex* c=new Vertex(3);
	Vertex* d=new Vertex(4);
	Vertex* e=new Vertex(5);
	Vertex** graph=new Vertex*[5];
	graph[0] = a;
	graph[1] = b;
	graph[2] = c;
	graph[3] = d;
	graph[4] = e;
	
	
	a->AddEdge(b,1);
	a->AddEdge(e,10);
	b->AddEdge(c,5);
	c->AddEdge(e,1);
	d->AddEdge(c,2);
	d->AddEdge(e,6);
	a->AddEdge(d,3);
	dijkstra(graph,a,e);
	cout<<e->tw;
}

