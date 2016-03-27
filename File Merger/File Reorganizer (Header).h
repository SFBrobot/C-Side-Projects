struct {
  string name;
  int pgLength;
} File;

const int fileNum 10;

File *pInclude[fileNum],
  include[fileNum];

void moveTo(int entryNum, int pos) {
  if (entryNum < pos) {
    for (int i = entryNum - 1; i < pos - 1; i++) {
      *pInclude[i] = *pInclude[i+1];
    }
  }
  else if (entryNum > pos) {
    for (int i = entryNum - 1; i > pos - 1; i--) {
      *pInclude[i] = *pInclude[i-1];
    }
  }
  *pInclude[pos-1] = *pInclude[entryNum-1];
}