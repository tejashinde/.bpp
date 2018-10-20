//Use of pointers to create array with low processing time
int main()
{
  int num[10],cnt;
  int* ptr;
  ptr = num;
  for (cnt = 0; cnt < 10; ++cnt, ++ptr)//ptr = ptr + 1 * size of datatype
  {
    *ptr = cnt;
  }
  return 0;
}
//Returning exit success and exit failures assures you the portability of code to some extent
