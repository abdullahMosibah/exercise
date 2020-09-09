/* if you are reading this

please note that the person who wrote this is so stupid, its acualty not funny
*/
#include <stdio.h>
#define MAX	80
int getNextLine(char currentline[]);/* takes input from user as line */
void copyArray(char from[], char to[]); /* copy one array to another */
void reverse(char line[], char result[]); /* given an array it reverse it */

int main(){
/*
char max_line[MAX];
char Line[MAX];
int max_len =  0;
int len;
while((len = getNextLine(Line)) >  0){
	if(len > max_len){
		max_len = len;
		copyArray(Line, max_line);
	}

}
if(max_len > 0){
	printf("%s", max_line);
	}
*/
char Line[MAX];
char result[MAX];

int len = getNextLine(Line);
reverse(Line,result);
printf("%s", result);
return 0;
}

int getNextLine(char currentLine[]){
	int  c,i;
	i = 0;
	
	/* max-1, becuase at the end we should put \n */
	while( i < MAX-1 ){
		
		c = getchar();
		if(c == EOF){
			break;
		}
		else if ( c == '\n'){
		currentLine[i++]  = c;
		break;
		}
		currentLine[i++] = c;
	}
	currentLine[i] = '\0';
	return i;
}
 
void copyArray(char from [] , char to []){
	int i = 0;	
	while( (to[i] = from[i]) != '\0')
		i++;

	/* the guy who wrote this code should go to jail, because this code is
		way too samrt.( lookig at you karrigahn) so baiscally this works like a do-while loop.
		first do the copy and then check if what we just copyed is \0,
		if it is it will terminate the loop, if it is not it will cont.
		
		i fucking love smart code. 
	*/
}
void reverse(char line[], char result[]){
	int i = 0;
	int j = 0;
	while(line[i] != '\0')
		i++;
	
	i--;
	// say we have 10 chars with '\0', the i will 9, and if we are 	counting on index down we gonna copy first thing '0' and the resuilt will be nothing so we --1 so the first index taken is 8 . get gud kid
	while( i > 0){
		result[j] = line[i];
		j++;
		i--;
	}
	j++;
	result[j] = '\0';
	}	
