#ifndef ___GAUSS_H
#define ___GAUSS_H

// ƒ†-ƒNƒŠƒbƒh
int Euclid(int a, int b);

// •ª•ê‚ª•‰‚Ì”‚È‚ç•ª•ê•ªq‚É-1‚ğ‚©‚¯‚é
void Den(int a[]);

// â‘Î’l
void Abs(int a[], int b[]);

// •ª”‚Ì‰ÁZ
void Add(int a[], int b[], int c[]);

// •ª”‚ÌŒ¸Z
void Sub(int a[], int b[], int c[]);

// •ª”‚ÌæZ
void Mul(int a[], int b[], int c[]);

// •ª”‚ÌœZ
void Div(int a[], int b[], int c[]);

// •ª”‚Ì–ñ•ª
void Red(int a[], int b[]);

// •ª”‚Ì”äŠria > bj
int greater(int a[], int b[]);

// •ª”‚Ì”äŠria == bj
int equal(int a[], int b[]);

// •ª”‚Ì‘ã“üia = bj
void set(int a[], int b[]);

#endif