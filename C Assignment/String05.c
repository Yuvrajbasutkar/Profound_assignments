// 5. Eliminate vowels from string
#include <stdio.h>
int Vowel(char);
void main(){
    char a[10],r[10];
    int j=0;
    printf("Enter the String\n");
    scanf("%s",a);
    printf("The original string is %s\n",a);
    for(int i=0;a[i]!='\0';i++){
        if(!Vowel(a[i])){
            r[j]=a[i];
            j++;
        }
    }r[j]='\0';
    printf("The resulted array is\n");
    
        printf("%s",r);
    

}
int Vowel(char ch){
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}
