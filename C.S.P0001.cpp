#include <stdio.h>
#include <string.h>
#include <conio.h>

//nhap chuoi
void daonguocchuoi(char str[] ){
     for(int i=strlen(str)-1;i>=0;i--) 
	        {
			if(str[i]==' '){
				str[i]='\0';
				printf("%s ", &str[i]+1);
			}
         }
}
 
int main() {
	char s[50];
	char key;
	do{
		printf("nhap chuoi: ");
		gets(s);
        printf("chuoi da nhap: %s\n",s);
        printf("chuoi da dao nguoc: ");
        daonguocchuoi(s);
		printf("%s ", s);
		printf("\nPress enter to continue another reverse, ESC to exit :>!\n");
		key=getch();
	} while(key!=27);
	return 0;
	//Output chuoi dao nguoc và tiep tuc nhap chuoi dao nguoc
}
