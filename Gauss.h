#ifndef ___GAUSS_H
#define ___GAUSS_H

// ��-�N���b�h
int Euclid(int a, int b);

// ���ꂪ���̐��Ȃ番�ꕪ�q��-1��������
void Den(int a[]);

// ��Βl
void Abs(int a[], int b[]);

// �����̉��Z
void Add(int a[], int b[], int c[]);

// �����̌��Z
void Sub(int a[], int b[], int c[]);

// �����̏�Z
void Mul(int a[], int b[], int c[]);

// �����̏��Z
void Div(int a[], int b[], int c[]);

// �����̖�
void Red(int a[], int b[]);

// �����̔�r�ia > b�j
int greater(int a[], int b[]);

// �����̔�r�ia == b�j
int equal(int a[], int b[]);

// �����̑���ia = b�j
void set(int a[], int b[]);

#endif