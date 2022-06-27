#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void help() {
  printf("   ssg init\tto init a website\n");
}

void init() {
  system("mkdir src src/pages src/images src/css");
  system("touch src/css/global.css src/css/header.css src/css/footer.css");
  system("touch src/pages/index.md");
  system("touch src/_header.html src/_footer.html");
}

int main(int argc, char *argv[]) {

  if (argc == 2 && strcmp(argv[1], "init") == 0)
    init();
  else
    help();

  return 0; }
