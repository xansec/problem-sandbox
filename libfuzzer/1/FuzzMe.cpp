#include <stdint.h>
#include <string.h>

bool FuzzMe(const uint8_t *data, size_t size)
{
    return size >= 3 &&
        data[0] == 'F' &&
        data[1] == 'U' &&
        data[2] == 'Z' &&
        data[3] == 'Z'; //buffer overread
}

int main () {
    const uint8_t data = 42;
    size_t size = sizeof(data);
    FuzzMe(&data, size);
    return 0;
}

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size)
{
    FuzzMe(data, size);

    return 0;
}
