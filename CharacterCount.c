#include <stdio.h>
int main(void)
{
    char ch;    
    int count[26] = {0};

    do{
        scanf("%c", &ch);
        if(ch == ' ') continue;

        if(ch >= 'a' && ch <= 'z')
            count[ch - 'a']++;
        
        else if(ch >= 'A' && ch <= 'Z')
            count[ch - 'A']++;
        
    }while(ch != '\n');

    for(int i = 0; i<26; i++){
        if(count[i])
            printf("%c - %d\n", (i + 'a'), count[i]);
    }
  
}