#include <stdio.h>
#include <string.h>

void removeCharacter(char *str, char value) {
    int i, j = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != value) {
            str[j++] = str[i];
        }
    }

    str[j] = '\0'; 
}

int main(){
	char string[100]="Nguyen Son Minh";
	char value;
    printf("Chuoi ban dau: %s\n", string);
    printf("Nhap vao ky tu can xoa: ");
    scanf(" %c", &value);
    removeCharacter(string, value);
    printf("Chuoi sau khi xoa ky tu '%c': %s\n", value, string);

    return 0;



return 0;
}

