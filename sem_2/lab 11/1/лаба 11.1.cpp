#include <iostream>

using namespace std;

struct tot {
	int data = 0;
		tot* next = nullptr;
	};
struct list {
	tot* next = nullptr;
};

void h(list* pp, int k, int n) {
	tot* rg = pp->next;
	for (int i = 0; i < n-1; i++)
	{
		rg = rg->next;
	}
	for (int i = 0; i < k; i++) {
		tot* jj = rg->next->next;
		delete rg->next;
		rg->next = jj;
	}

}
void op(list* pp, int j)
{
	for (int i = 0; i < j; i++) {
		if (pp->next == nullptr)
		{
			pp->next = new tot(12, nullptr);

		}

		else {
			tot* ff = pp->next;
			while (ff->next != nullptr)
			{
				ff = ff->next;
			}
			ff->next = new tot(((float)rand()/RAND_MAX)*50, nullptr);
		}
	}

}

void xxx(list* pp, int j)
{
	tot* ff = pp->next;
	
	for (int i = 0; i < j-1; i++)
	{
		ff = ff->next;

	}
	tot* fd = ff->next;
	ff->next = new tot(((float)rand() / RAND_MAX) * 50, fd);

}

int main() {

	list kl;

	op(&kl, 10);
	tot* lk = kl.next;
	while (lk != nullptr)
	{
		cout << lk->data << endl;
		lk = lk->next;
	}
	cout << "  " << endl;

	h(&kl, 4, 3);
	lk = kl.next;
	while (lk != nullptr)
	{
		cout << lk->data << endl;
		lk = lk->next;
	}

	xxx(&kl, 5);
	cout << "  " << endl;
	lk = kl.next;
	while (lk != nullptr)
	{
		cout << lk->data << endl;
		lk = lk->next;
	}


	lk = kl.next;
	tot* d = lk;
	while (d != nullptr)
	{
		d = d->next;
		delete lk;
		lk = d;
	}
}