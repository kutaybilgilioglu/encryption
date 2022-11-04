#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
	int i,a;
char sifreleme [25];
printf("sifreleme(buyukharf): ");
gets(sifreleme);
char sifrelemet [25];
for(i=0;i<26;i++){
	sifrelemet[i]=sifreleme[i];
	
}

char giris[25];
printf("giris: ");
gets(giris);
char girist[25];
char girist1[25];
for(i=0;i<=25;i++){
	girist[i]=giris[i];
	girist1[i]=girist[i];
}

int b;
for	(i=0;i<=25;i++){

	 if((int)giris[i]<65 || (int)giris[i]>122 || ((int)giris[i]>90 && (int)giris[i]<97)){
		girist[i]=' ';
		continue;
	}
	else if((int)giris[i]>=65 && (int)giris[i]<=90 ){
		girist[i]=sifrelemet[((int)girist1[i]-65)];
	}
	else if((int)giris[i]>=97 && (int)giris[i]<=122){
		girist[i]=tolower(sifrelemet[(int)girist1[i]-97]);
	}
	for(b=0;b<=25;b++){
	
	girist1[b]=giris[b];
}
}
printf("cikis: ");
	for(b=0;b<=25;b++){
		printf("%c",girist[b]);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
