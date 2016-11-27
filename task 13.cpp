#include<iostream>
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
	cout<<a->value<<endl<<b->value<<endl<<c->value<<endl<<d->value<<endl<<e->value<<endl<<f->value;
}
