#include <stdio.h>
#include "KISA_SHA256.h"
#include <string.h>
//https://seed.kisa.or.kr/kisa/Board/21/detailView.do
int main(void){
    //https://www.blockchain.com/btc/block/0000000000000000000c5d59b39d802a918931437c0a1e37cb17f1e37dc1184b
    int max_nonce = 1e10;
    int difficulty = 5;
    int Blocknumber = 670247;
    char Blocknumber_str[10];
    itoa(Blocknumber,Blocknumber_str,10);
    char *transaction = "A->B : 10, D->A : 999, C->Z : 3";
    https://www.blockchain.com/btc/block/0000000000000000000b89b0e239aa663515a30d644cb6b8e08fb79d9093c2c8
    char* previous_hash = "0000000000000000000b89b0e239aa663515a30d644cb6b8e08fb79d9093c2c8";
    char new_hash[256];
    char text[1024]='\0';
    int nonce;
    for(nonce = 0;nonce<max_nonce;nonce++){
        char nonce_str[50];
        itoa(nonce,nonce_str,10);
        strcat(text,Blocknumber_str);
        strcat(text,transaction);
        strcat(text,previous_hash);
        strcat(text,nonce_str);
        SHA256_Encrpyt(text,strlen(text),new_hash);

        int i;
        for(i=0;i<difficulty && new_hash[i]=='0';i++){

        }
        if(i<difficulty){

        }
        else{
            printf("new hash : %s",new_hash);
            printf("Nonce : %s",nonce_str);
            nonce = max_nonce;
        }
    }

    BYTE *str = "hello world";
    BYTE str256[256];
    SHA256_Encrypt(str,strlen(str),str256);
}