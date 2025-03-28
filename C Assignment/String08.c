// WAP to reverse the sentence or string without using library function.
// for example
// “hi all”
// reverse 1: “all hi”
// reverse 2: “lla ih”
#include<stdio.h>
void main(){
char a[10];
char rev1[10],rev2[10],s,k=0,len=0;
printf("Enter the String\n");
gets(a);
printf("the String is %s\n",a);
//for “all hi”
for(int i=0;a[i]!='\0';i++){
    if(a[i]==' '){
        s=i;
    }
}
for(int i=s+1;a[i]!='\0';i++){
    rev1[k]=a[i];
    k++;
}
rev1[k]=' ';
k++;
for(int i=0;i!=s;i++){
    rev1[k]=a[i];
    k++;
}
rev1[k]='\0';
printf("%s\n",rev1);
k=0;

// for “lla ih”
for(int i=0;a[i]!='\0';i++){
    len++;
}
for(int i=len-1;i>=0;i--){
    rev2[k]=a[i];
    k++;
}
rev2[k]='\0';
printf("%s\n",rev2);


}
