#pragma once

class Packager
{
private:
	short* elements;
	int tam, pack;

public:
	Packager(int size);
	~Packager();
	short &operator[](int index);
	void send();
};

