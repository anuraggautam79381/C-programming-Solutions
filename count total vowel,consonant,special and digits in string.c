#include <stdio.h>

int main()
{
    char str[100];
    int consonant=0,vowel=0,digits=0,special=0;
    printf("enter string:\n");
    fgets(str,100,stdin);
    for(int i=0;str[i];i++)
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
        {
             if(str[i] =='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || 
               str[i] =='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'  )
                vowel++;
            else
                consonant++;
        }
        else if(str[i]>='0' && str[i]<='9')
        digits++;
        else
        special++;
    }
    printf("\nvowel:%d\ndigits:%d\nspecial:%d\nconsonant:%d\n",vowel,digits,special,consonant);

    return 0;
}
