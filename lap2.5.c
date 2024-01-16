#include<stdio.h>

int main(){
	char ch;
	int vowels = 0;
	int consonants = 0;
	int nothers = 0;
	printf("nhap ky tu:\n");
	do{
		ch = getchar();
		if(ch >= 'A' && ch <= 'Z'){
			switch(ch){
				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
				vowels++;
				break;
				default: consonants++;
			}
		}
	else nothers++;
	}
	while(ch !='\n');
	printf("number of vowels: %d\n", vowels);
	printf("number of consonants: %d\n", consonants);
	printf("number of others: %d\n", nothers - 1);
}
