#include "ostream13.h"

using namespace std;

OStream13::OStream13() {}

void OStream13::create(char *filename) {
  int ofile = _open(filename, _O_WRONLY);

  if (ofile == -1) {
    cout << "Error";
    exit(1);
  }

  ofile13 = ofile;
}

void OStream13::write(vector<int> elems) {

  cout << "hey" << elems[0] << endl;
  // marche pas...
  _write(ofile13, &elem, 4);
}

void OStream13::close() { _close(ofile13); }
