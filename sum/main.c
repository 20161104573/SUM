//
//  main.c
//  sum
//
//  Created by a20161104573 on 2017/6/16.
//  Copyright © 2017年 a20161104573. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    FILE *fr;
    FILE *fw;
    fr=fopen("//Users//a20161104573//Desktop//sum//input.txt","r+");
    fw=fopen("//Users//a20161104573//Desktop//sum//output.txt","w");
    int a,b,c;
    fscanf(fr,"%d%d",&a,&b);
    c=a+b;
    printf("%d+%d=%d\n",a,b,c);
    fprintf(fw,"%d+%d=%d\n",a,b,c);
    return 0;
}
