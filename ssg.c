#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help() {
  printf("   ssg init\tto init a website\n");
}

void init() {
  system("mkdir src dst");
  system("mkdir src/pages src/images src/css");
  system("touch src/index.html src/_header src/_footer");
  system("touch src/css/global.css src/css/header.css src/css/footer.css");
  system("git init");
}

int main(int argc, char *argv[]) {

  if (argc == 2 && strcmp(argv[1], "init") == 0)
    init();
  else
    help();

  return 0; }
