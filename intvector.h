#ifndef INTVECTOR_H
#define INTVECTOR_H
class intvector
{
public:
	intvector();

	intvector(int length);

	intvector(const intvector &v);

	~intvector();

	void push_back(int num);

	int& at(int i) const;

	int get_size() const;

	int get_capacity() const;

	int find(int num);

	intvector& operator= (const intvector &iv);

	int& operator[] (int i);

	const int& operator[] (int i) const;

private:
	int* vp;
	int size;
	int capacity;
};

#endif
