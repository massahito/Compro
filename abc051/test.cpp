#include <iostream>
#include <memory>

int main()
{
	std::unique_ptr<int> uptr = std::make_unique<int>(10);
	for(int i = 0; i < 10; i++)
		*uptr = i;
}
