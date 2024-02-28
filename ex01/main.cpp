
#include "Data.h"
#include "Serializer.h"

int main(void)
{
	{
		Data data(10);
		uintptr_t	uintptr = Serializer::serialize(&data);
		Data		*data1 = Serializer::deserialize(uintptr);
		std::cout << data1 << std::endl;
	}
}