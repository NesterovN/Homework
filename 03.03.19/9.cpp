//Реализуйте структуру данных циклический массив пар целых чисел.Циклический массив размера N - массив в котором за последним элементом(N-1) снова идет первый(0) и так далее. В этой задаче необходимо использовать структуру pair из STL
#include <iostream>
using namespace std;
struct p
{
	int x;
	int y;
};
struct node
{
	p data;
	node *next = NULL;
};
class circle
{
	node *head;
	node *tail;
	int size;

  public:
	circle()
	{
		head = tail = NULL;
		size = 0;
	}
	circle(const circle &ar)
	{
		this->size = ar.size;
		node *temp = ar.head;
		this->push(temp->data.x, temp->data.y);
		temp = temp->next;
		while (temp != ar.head)
		{
			this->push(temp->data.x, temp->data.y);
			temp = temp->next;
		}
	}
	p operator[](int j)
	{
		int i = 0;
		node *temp = head;
		while (i != j)
		{
			temp = temp->next;
			i++;
		}
		return temp->data;
	}
	void move(int k)
	{
		node *temp = head;
		int i = 0;
		while (i != k)
		{
			temp = temp->next;
			i++;
		}
		node *tmp = head;
		head = tail = temp;
		temp = tmp;
	}
	void push(int x, int y)
	{
		node *temp = new node;
		this->size++;
		temp->data.x = x;
		temp->data.y = y;
		temp->next = head;
		head = temp;
		if (size <= 1)
		{
			tail = temp;
		}
		else
		{
			tail->next = head;
		}
	}
	void pushindex(int x, int y, int j)
	{
		node *temp = new node;
		temp->data.x = x;
		temp->data.y = y;
		this->size++;
		node *tmp = head;
		int i = 0;
		while (i != j)
		{
			tmp = tmp->next;
			i++;
		}
		temp->next = tmp->next;
		tmp->next = temp;
	}
	void del(int j)
	{
		int i = 0;
		node *temp = this->head;
		while (i != j - 1)
		{
			temp = temp->next;
			i++;
		}
		size--;
		node *tmp = temp->next;
		temp->next = tmp->next;
		delete tmp;
	}
	void show()
	{
		node *temp = head;
		while (temp->next != head)
		{
			cout << temp->data.x << " " << temp->data.y << "!!!";
			temp = temp->next;
		}
		cout << tail->data.x << " " << tail->data.y << "!!!";
	}
	~circle()
	{
		while (head != NULL)
		{
			node *temp = head;
			head = head->next;
			delete temp;
		}
	}
};
