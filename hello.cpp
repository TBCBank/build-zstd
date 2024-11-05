#include <cstdio>
#include <zstd.h>

int main()
{
	printf_s("Zstandard version: %s\n", ZSTD_versionString());
	return 0;
}
