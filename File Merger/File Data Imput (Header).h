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