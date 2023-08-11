//
// Created by hekaijie on 2023/8/11.
//
#include <bits/stdc++.h>
#include "Unit1.h"

using namespace std;
#define MAX_SIZE 1000

int main(int argc, char *argv[]) {
//    TODO:此处需要注意，日后可能需要加上判断Action的逻辑
    if (argc != 3) {
        printf("请提供源程序文件名称和操作名称！\n");
        return 1;
    }
    FILE *inputFile, *outputFile;
    char buffer[MAX_SIZE];

//    string filename = "E01";
//    char filename[] = "P9101";
    // 构造输入文件的完整路径
    char inputFileName[MAX_SIZE];
    snprintf(inputFileName, sizeof(inputFileName), "./%s.PL0", argv[1]);

    printf("%s\n", inputFileName);

    // 打开PL0源码文件
    inputFile = fopen(inputFileName, "r");
    if (inputFile == NULL) {
        printf("无法打开输入文件！\n");
        return 1;
    }
    // 构造输出文件路径
    char outputFileName[MAX_SIZE];
    snprintf(outputFileName, sizeof(outputFileName), "./%s.COD", argv[1]);

//    执行run方法，编译代码
    run(inputFileName, outputFileName);

//  将假数据先行注释掉
/*

    printf("%s\n", outputFileName);
    // 打开输出文件
    outputFile = fopen(outputFileName, "w");
    if (outputFile == NULL) {
        printf("无法打开输出文件！\n");
        fclose(inputFile); // 关闭输入文件
        return 1;
    }
    char str[] =
            "JMP 0 1\nINI 0 6\nLIT 0 88\nSTO 0 3\nOPR 0 16\nSTO 0 4\nLOD 0 3\nLOD 0 4\nLIT 0 3\nLOD 0 4\nOPR 0 2\nOPR 0 4\nOPR 0 2\nSTO 0 5\nLOD 0 5\nOPR 0 14\nOPR 0 15\nOPR 0 0\nERROR IN PL / 0 PROGRAM";

    // 写入字符串到文件中
    fprintf(outputFile, "%s", str);

    // 关闭文件
    fclose(inputFile);
    fclose(outputFile);

    printf("文件内容已成功复制到输出文件！\n");
*/

    return 0;


}