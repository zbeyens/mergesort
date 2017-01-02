#include <fcntl.h>
#include <io.h>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <sys/stat.h>
#include <sys/types.h>

class IStream13 {
private:
int offset;
int length;
int ofile13;
int B;
int Bcurrent;
char *buffer;

public:
IStream13(int b);
IStream13();
void open(char *filename);
std::vector<int> read_next();
bool end_of_stream();
};