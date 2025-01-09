
#include<iostream>


void flength(){

    char s[1000] = "development";
    
int i =0;
int count = 0;

while(s[i] != '\0'){

    count++;
   
    i++;
};
 printf("length: %d", count);

}

int main(){



flength();


}
