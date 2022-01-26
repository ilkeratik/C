#include <stdio.h>
#include <string.h>

char toKucuk(char c){
	int ascii_c = c;
	char yeni = c;
	if(ascii_c >= 65 && ascii_c <= 90){
		yeni = ascii_c + 32;
	}
	return yeni;
}

char toBuyuk(char c){
	int ascii_c = c;
	char yeni = c;
	if(ascii_c >= 97 && ascii_c <= 122 ){
		yeni = ascii_c - 32;
	}
	return yeni;
}

bool isHarf(char c){
	int ascii_c = c;
	bool snc = 0;
	if(ascii_c >= 97 && ascii_c <= 122 || ascii_c >= 65 && ascii_c <= 90){
		snc = 1;
	}
	return snc;
}

bool isRakam(char c){
	int ascii_c = c;
	bool snc = 0;
	if(ascii_c >= 48 && ascii_c <= 57 ){
		snc = 1;
	}
	return snc;
}

bool isBosluk(char c){
	int ascii_c = c;
	bool snc = 0;
	if(ascii_c == 32 ){
		snc = 1;
	}
	return snc;
}

void toIlkHarfiBuyuk(char *c){
	char ilkHarf = toBuyuk(c[0]);
	c[0] = ilkHarf;
	int length = strlen(c);
	for(int i=1; i< length; i++){
		c[i]= toKucuk(c[i]);
	}
}

void harfVeRakamSay(char* dosyayolu){
	char veriler[1000], ch;
	FILE *fp=fopen(dosyayolu,"r");
	//fscanf(fp,"%s",veriler);
	int j = 0;
	do {
        ch = fgetc(fp);
        veriler[j] = ch;
 		j++;
 		
    } while (ch != EOF);
    
	printf("%s", veriler);
	int s_rakam=0,s_bharf=0, s_kharf=0,s_bosluk=0;
	int length = strlen(veriler);
	for(int i=0; i<length; i++){
		int ascii_c = veriler[i];
		
		if(isRakam(veriler[i])){
			s_rakam++;
		}
		else if(isBosluk(veriler[i])){
			s_bosluk++;
		}
		else if(ascii_c >= 97 && ascii_c <= 122){//kucuk harf
			s_kharf++;
		
		}
		else if (ascii_c >= 65 && ascii_c <= 90){//buyuk harf
			s_bharf++;
		}
	}
	
	printf("%d tane buyuk harf, %d tane kucuk harf , %d tane rakam, %d tane bosluk bulunmaktadir.", s_bharf, s_kharf, s_rakam, s_bosluk);
}

int main(){
	char c[] = "yaz.txt";
	/*int ic = c;*/
	harfVeRakamSay(c);
	printf("%s", c);
	
	return 0;
}
