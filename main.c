#include<sys/utsname.h>
#include<stdio.h>

int main(void){
struct utsname dados;
uname(&dados);

printf("SO: %s\n", dados.sysname);
printf("Nodename: %s\n", dados.nodename);
printf("Vers�o da Release: %s\n",dados.release);
printf("Vers�o do Sistema: %s\n", dados.version);
printf("Vers�o do Hardware do PC: %s\n", dados.machine);

return 0;
}
