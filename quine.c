#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<time.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<assert.h>
int main() {
	char f[]=" #include<stdio.h>%c#include<string.h>%c#include<unistd.h>%c#include<time.h>%c#include<stdlib.h>%c#include<sys/wait.h>%c#include<assert.h>%cint main() {%c%cchar f[]=%c%s%c;%c%cchar b[4096];%c%csrand(time(NULL));%c%cint n = rand() %c 10;%c%cchar* const msgs[] = {%cself-reflecting...%c, %cpracticing gratitude...%c, %cpainting a painting...%c, %ctaking a break...%c, %cmeditating...%c, %cloving myself...%c, %cout for a walk...%c, %cchatting with friends...%c, %cpracticing joy...%c, %crebuilding self...%c};%c%cchar* const args[] = {%cgcc%c, %cquineout.c%c, %c-o%c, %cquineout%c, NULL};%c%csprintf(b, f, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, f, 34, 10, 9, 10, 9, 10, 9, 37, 10, 9, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10, 9, 34, 34, 34, 34, 34, 34, 34, 34, 10, 9, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 10, 9, 34, 37, 92, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 34, 34, 10, 9, 10, 9, 34, 92, 92, 34, 10, 9, 34, 34, 34, 34, 10, 9, 10);%c%cFILE* x=fopen(%cquineout.c%c, %cw%c);%c%cfwrite(b, sizeof(char), strlen(b), x);%c%cfclose(x);%c%cprintf(%c%cs%cn%c, msgs[n]);%c%csleep(2);%c%cint p = fork();%c%cif(!p)%c%c%cexecv(%c/usr/bin/gcc%c, args);%c%cwaitpid(p, NULL, 0);%c%cprintf(%cstarting anew!%cn%cn%c);%c%cexecl(%c./quineout%c, %c./quineout%c, (char*) NULL);%c%creturn 1;%c}";
	char b[4096];
	srand(time(NULL));
	int n = rand() % 10;
	char* const msgs[] = {"self-reflecting...", "practicing gratitude...", "painting a painting...", "taking a break...", "meditating...", "loving myself...", "out for a walk...", "chatting with friends...", "practicing joy...", "rebuilding self..."};
	char* const args[] = {"gcc", "quineout.c", "-o", "quineout", NULL};
	sprintf(b, f, 10, 10, 10, 10, 10, 10, 10, 10, 9, 34, f, 34, 10, 9, 10, 9, 10, 9, 37, 10, 9, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 34, 10, 9, 34, 34, 34, 34, 34, 34, 34, 34, 10, 9, 10, 9, 34, 34, 34, 34, 10, 9, 10, 9, 10, 9, 34, 37, 92, 34, 10, 9, 10, 9, 10, 9, 10, 9, 9, 34, 34, 10, 9, 10, 9, 34, 92, 92, 34, 10, 9, 34, 34, 34, 34, 10, 9, 10);
	FILE* x=fopen("quineout.c", "w");
	fwrite(b, sizeof(char), strlen(b), x);
	fclose(x);
	printf("%s\n", msgs[n]);
	sleep(2);
	int p = fork();
	if(!p)
		execv("/usr/bin/gcc", args);
	waitpid(p, NULL, 0);
	printf("starting anew!\n\n");
	execl("./quineout", "./quineout", (char*) NULL);
	return 1;
}