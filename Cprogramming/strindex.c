#include <stdio.h>
#define MAX 100

int getLine(char line[]);
int strindex(char line[], char pattern[]);

char pattern[] = "how";
int main(){

	char line[MAX];	
	int found = 0;
	while(getLine(line) > 0)
		if( strindex(line,pattern) >= 0){
		printf("%s", line);
		found++;
		}
	return found;
}

int getLine(char line[]){
	int i = 0,c;	
	int lim = MAX;
	while( --lim > 0&& (c = getchar()) != EOF && c != '\n' )
		line[i++] = c;

	if(c == '\n'){
		line[i++] = c;
	}
	line[i] = '\0';
	return i;
}

int strindex(char line[], char pattern[]){
	int i,j,k;	
	for( i = 0; line[i] != '\0';i++){
		for(j = i, k =0; pattern[k] != '\0' && line[j] == pattern[k]; j++,k++)
			;
	if(  k > 0 && pattern[k] == '\0')
		return i;
}

	return -1;
}		
