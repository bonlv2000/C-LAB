#include<stdio.h>
#include<string.h>
#include<conio.h>
int out(char a[], int b[], int n, int max)
{
    int i; 
    printf("\n Times of appearance for each character: ");
     printf("\n");
    for(i=0;i<n;i++)
    printf("%3c",a[i]);
    printf("\n");
    for(int i=0; i<n;i++)
    printf("%3d",b[i]);
    if(max>1){
    printf("\nCharacters that appears the most: ");
    for(i=0;i<n;i++)
    if(b[i]== max) printf("%3c", a[i]);
    for(i=0;i<n;i++)
    if(b[i]==max) printf("%3d",b[i]);
    printf("\n");
    }   
	else {
    	printf("\nCharacters that appears the most: No character appeared the most\n");
	}
}
//Print out the characters and then print out many or no characters that appear much.
int main()
{   char chuoi[100],a[50];
    int key,n, dem = 0, max=0, b[50];

    do {
    	printf("nhap chuoi: ");
    	gets(chuoi);
    	for ( int i=0; i< strlen(chuoi);i++)
    	{
        	if(chuoi[i]!=' ')
        	{		
           		int  check=1;
            	for(int j=0;j<strlen(chuoi);j++)
            	{
                	if (a[j] == chuoi[i])
                	{	
                    	b[j] = b[j]+1;
                    	if ( max < b[j]) max = b[j];
                    	check =0;
                	}
            	}
            	if(check)
            	{
	                a[n] = chuoi[i];
	                a[n+1]='\0';
	                b[n]=1;
	                b[n+1]='\0';
	                n++;
            	}
        	}
    	}
		out (a,b,n,max);
		fflush(stdin);
		key=getch();
//nhap chuoi va then look for the much or no characters that appear the much.
	}while (key!=27);
}
