#include <iostream>
#include <fstream>
#include "header/input.h"
#include "header/output.h"
#include "header/proses.h"

int main() {
  input input;
  input.cetak();
  input.kirimdata();

  proses proses;
  proses.getdata();
  proses.senddata();

  Output output;
  output.getData();
  output.cetak();

  return 0;
}