#ifndef ___GAUSS_H
#define ___GAUSS_H

// ユ-クリッド
int Euclid(int a, int b);

// 分母が負の数なら分母分子に-1をかける
void Den(int a[]);

// 絶対値
void Abs(int a[], int b[]);

// 分数の加算
void Add(int a[], int b[], int c[]);

// 分数の減算
void Sub(int a[], int b[], int c[]);

// 分数の乗算
void Mul(int a[], int b[], int c[]);

// 分数の除算
void Div(int a[], int b[], int c[]);

// 分数の約分
void Red(int a[], int b[]);

// 分数の比較（a > b）
int greater(int a[], int b[]);

// 分数の比較（a == b）
int equal(int a[], int b[]);

// 分数の代入（a = b）
void set(int a[], int b[]);

#endif