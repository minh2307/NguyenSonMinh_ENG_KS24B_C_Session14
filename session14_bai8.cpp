#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	char text[]="nguyen son minh";
	int size=strlen(text);
	for(int i=0; i<size; i++){
		if(i==0||text[i-1]==' '){
			if(text[i]>='a'&&text[i]<='z'){
				text[i]=toupper(text[i]);
			}
		}
	}
		printf("%s",text);



return 0;
}

