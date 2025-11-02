#include <stdio.h>
int main(){
    char str[100];
    int v=0, c=0, i;
    printf("Enter a word:\n");
    scanf("%[^\n]", str);
    for(i=0; str[i]!='\0'; i++){
        char ch=str[i];
        if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
            if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
                v++;
            else
                c++;
        }
    }
    printf("Vowels: %d\nConsonants: %d\n", v, c);
    return 0;
}

