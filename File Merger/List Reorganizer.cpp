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

void assignNameLen(File *file, string text, int len) {
  file->name = text;
  file->pgLength = len;
}

void assignName(File *file, string text) {
  file->name = text;
}

void assignLen(File *file, int len) {
  file->pgLength = len;
}

int main() {
  for (int i = 0; i < fileNum; i++) {
    *pInclude[i] = &include[i];
    assignNameLen(*pInclude[i], "a", i + 1);
  }
  moveTo(2, 4);
  moveTo(3, 1);
}