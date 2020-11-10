#include <stdio.h>
#include <string.h>
#include <ctype.h>
void chuanhoa(char s[]){
	char sc[51]="";
	char scpy[51];
	strcpy(scpy,s);
	char *p=strtok(s," ");
	for (int i=0;i<strlen(p);i++){
		p[i]=toupper(p[i]);
	}
	char *d=strtok(scpy," ");
	d=strtok(NULL," ");
	while (d!=NULL){
		d[0]=toupper(d[0]);
		for (int i=1;i<strlen(d);i++)
			d[i]=tolower(d[i]);
		strcat(sc,d);
		strcat(sc," ");
		d=strtok(NULL," ");
	}
	sc[strlen(sc)-1]='\0';
	strcat(sc,", ");
	strcat(sc,p);
	puts(sc);
}
main(){
	int t;
	char s[51];
	scanf ("%d",&t);
	gets(s);
	while (t--){
		gets(s);
		chuanhoa(s);
	}
}
