#include <stdio.h>
#include "Gauss.h"

#define N 3 // 4x4�s��
#define ___3

// ==================================================================
// �v���O�����̊J�n�_
// ==================================================================
int main(void)
{
	int a[N][N + 1][2] =
#ifdef ___1
	{
		{ { 5, 1 }, { -2, 1 }, { 2, 1 }, { -1, 1 } },
		{ { 3, 1 }, { -1, 1 }, { 2, 1 }, { 0, 1 } },
		{ { -2, 1 }, { 1, 1 }, { -1, 1 }, { 3, 1 } }
	};
#endif

#ifdef ___2
	// ���Ȃ�
	{
		{ { 1, 1 }, { 0, 1 }, { 1, 1 }, { -10, 1 } },
		{ { 2, 1 }, { 0, 1 }, { 2, 1 }, { 6, 1 } },
		{ { 1, 1 }, { 2, 1 }, { 0, 1 }, { 4, 1 } }
	};
#endif

#ifdef ___3
	{
		{ { 1, 1 }, { 0, 1 }, { 1, 1 }, { -10, 1 } },
		{ { 1, 1 }, { -2, 1 }, { 0, 1 }, { 3, 1 } },
		{ { 1, 1 }, { 0, 1 }, { 2, 1 }, { -20, 1 } }
	};
#endif

#ifdef ___4
	// �C�Ӓ萔
	{
		{ { 4, 1 }, { 4, 1 }, { -6, 1 }, { -24, 1 } },
		{ { 6, 1 }, { 8, 1 }, { -13, 1 }, { -60, 1 } },
		{ { -4, 1 }, { -3, 1 }, { 4, 1 }, { 12, 1 } }
	};
#endif
	int i, j, k;
	int p;                      // �s�{�b�g
	int exist = 1;              // ���̗L���i�t���O�j
	int rank = 0;               // �����N
	int prm = 0;                // �p�����[�^�̐�
	int mod[2] = { 0, 1 };      // �W��
	int tmp[2] = { 0, 1 };
	int res[2] = { 0, 1 };
	int max[2] = { 0, 1 };      // �ő�l

	char vari[4] = "xyz";
	char cof[2][3] = { "c1", "c2" };

	// �O�i����
	for(k = 0; k < N; k++)
	{
		set(max, a[k][k]);
		// �s�{�b�g�I��
		for(i = k + 1; i < N; i++)
		{
			if(greater(a[i][k], max))
			{
				set(max, a[i][k]);
				p = i;
			}
		}
		Abs(a[k][k], tmp);
		if(greater(max, tmp))
		{
			for(i = 0; i < N + 1; i++)
			{
				set(tmp, a[k][i]);
				set(a[k][i], a[p][i]);
				set(a[p][i], tmp);
			}
		}

		// ����
		for(i = k + 1; i < N; i++)
		{
			Div(a[i][k], a[k][k], mod);
			for(j = 0; j < N + 1; j++)
			{
				Mul(a[k][j], mod, tmp);
				Sub(a[i][j], tmp, a[i][j]);
			}
		}

		// �s�{�b�g���P�ɂ���
		set(tmp, a[k][k]);
		for(i = 0; i < N + 1; i++)
		{
			Div(a[k][i], tmp, a[k][i]);
		}
	}

	// ���̗L���𔻒�
	for(i = 0; i < N; i++)
	{
		for(j = 0; j < N; j++)
		{
			if(a[i][j][0] != 0)
			{
				exist = 2;
				break;
			}
			else
			{
				exist = 0;
			}
		}
		if(!exist)
		{
			if(a[i][N][0] == 0)
			{
				exist = 1;
			}
			else
			{
				exist = 0;
			}
		}
	}
	if(!exist)
	{
		printf("\a���Ȃ�\n");
		getchar();
		return 0;
	}
	
	// ��ޑ��
	for(k = N - 1; k >= 0; k--)
	{
		for(i = k - 1; i >= 0; i--)
		{
			set(mod, a[i][k]);
			for(j = k; j < N + 1; j++)
			{
				Mul(a[k][j], mod, tmp);
				Sub(a[i][j], tmp, a[i][j]);
			}
		}
	}

	// ���ʂ�\��
	if(exist == 2)
	{
		for(i = 0; i < N; i++)
		{
			printf("%c = { %3d, %3d }\n", vari[i], a[i][N][0], a[i][N][1]);
		}

		getchar();
	}
	else
	{
		for(i = 0; i < N; i++)
		{
			if(a[i][i][0] == 1 && a[i][i][1] == 1)
				rank++;
		}
		prm = N - rank;
		
		for(i = 0; i < N; i++)
		{
			k = prm - 1;
			if(a[i][i][0] != 0)
			{
				printf("%c = { %3d, %3d } ", vari[i], a[i][N][0], a[i][N][1]);
				
				for(j = i + 1; j < N; j++)
				{
					if(a[i][j][0] != 0)
						printf("+ %s { %3d, %3d } ", cof[k++], -1 * a[i][j][0], a[i][j][1]);
				}
				printf("\n");
			}
			else
			{
				printf("%c = %s\n", vari[i], cof[k++]);
			}
		}
		getchar();
	}
	return 0;
}


