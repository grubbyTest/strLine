#include "syms.h"

char A[LEN][WEI] = { {S, S, S, S, S},
					{S, P, P, P, S},
					{S, S, S, S, S},
					{S, P, P, P, S},
					{ S, P, P, P, S } };

char B[LEN][WEI] = { {S, S, S, S, P},
				{S, P, P, P, S},
				{S, S, S, S, P},
				{S, P, P, P, S},
				{ S, S, S, S, P } };

char C[LEN][WEI] = { {P, S, S, S, S},
				{S, P, P, P, P},
				{S, P, P, P, P},
				{S, P, P, P, P},
				{ P, S, S, S, S } };

char D[LEN][WEI] = { {S, S, S, S, P},
				{S, P, P, P, S},
				{S, P, P, P, S},
				{S, P, P, P, S},
				{ S, S, S, S, P } };

char E[LEN][WEI] = { {S, S, S, S, S},
				{S, P, P, P, P},
				{S, S, S, S, P},
				{S, P, P, P, P},
				{ S, S, S, S, S } };

char F[LEN][WEI] = { {S, S, S, S, S},
				{S, P, P, P, P},
				{S, S, S, S, P},
				{S, P, P, P, P},
				{ S, P, P, P, P } };

char G[LEN][WEI] = { {P, S, S, S, S},
				{S, P, P, P, P},
				{S, P, P, S, S},
				{S, P, P, P, S},
				{ P, S, S, S, S } };

char H[LEN][WEI] = {{S, P, P, P, S},
					{S, P, P, P, S},
					{S, S, S, S, S},
					{S, P, P, P, S},
					{S, P, P, P, S}};

char I[LEN][WEI] = {{S, S, S, S, S},
					{P, P, S, P, P},
					{P, P, S, P, P},
					{P, P, S, P, P},
					{S, S, S, S, S}};

char J[LEN][WEI] = {{P, S, S, S, S},
					{P, P, P, S, P},
					{P, P, P, S, P},
					{S, P, P, S, P},
					{P, S, S, S, P}};

char K[LEN][WEI] = {{S, P, P, P, S},
					{S, P, P, S, P},
					{S, S, S, P, P},
					{S, P, P, S, P},
					{S, P, P, P, S}};

char L[LEN][WEI] = {{S, P, P, P, P},
					{S, P, P, P, P},
					{S, P, P, P, P},
					{S, P, P, P, P},
					{S, S, S, S, S}};

char M[LEN][WEI] = {{S, P, P, P, S},
					{S, S, P, S, S},
					{S, P, S, P, S},
					{S, P, P, P, S},
					{S, P, P, P, S}};

char N[LEN][WEI] = {{S, P, P, P, S},
					{S, S, P, P, S},
					{S, P, S, P, S},
					{S, P, P, S, S},
					{S, P, P, P, S}};

char O[LEN][WEI] = {{P, S, S, S, P},
					{S, P, P, P, S},
					{S, P, P, P, S},
					{S, P, P, P, S},
					{P, S, S, S, P}};

char Pp[LEN][WEI] = {{S, S, S, S, P},
					{S, P, P, P, S},
					{S, S, S, S, P},
					{S, P, P, P, P},
					{S, P, P, P, P}};

char Q[LEN][WEI] = {{P, S, S, S, P},
					{S, P, P, P, S},
					{S, P, S, P, S},
					{S, P, P, S, S},
					{P, S, S, S, S} };

char R[LEN][WEI] = {{S, S, S, S, P},
					{S, P, P, P, S},
					{S, S, S, S, P},
					{S, P, P, S, P},
					{S, P, P, P, S}};

char Ss[LEN][WEI] = {{P, S, S, S, S},
					{S, P, P, P, P},
					{P, S, S, S, P},
					{P, P, P, P, S},
					{S, S, S, S, P}};

char T[LEN][WEI] = {{S, S, S, S, S},
					{P, P, S, P, P},
					{P, P, S, P, P},
					{P, P, S, P, P},
					{P, P, S, P, P}};

char U[LEN][WEI] = {{S, P, P, P, S},
					{S, P, P, P, S},
					{S, P, P, P, S},
					{S, P, P, P, S},
					{P, S, S, S, P}};

char V[LEN][WEI] = {{S, P, P, P, S},
					{S, P, P, P, S},
					{S, P, P, P, S},
					{P, S, P, S, P},
					{P, P, S, P, P}};

char W[LEN][WEI] = {{S, P, P, P, S},
					{S, P, S, P, S},
					{S, P, S, P, S},
					{S, P, S, P, S},
					{P, S, P, S, P}};

char X[LEN][WEI] = {{S, P, P, P, S},
					{P, S, P, S, P},
					{P, P, S, P, P},
					{P, S, P, S, P},
					{S, P, P, P, S}};

char Y[LEN][WEI] = {{S, P, P, P, S},
					{P, S, P, S, P},
					{P, P, S, P, P},
					{P, P, S, P, P},
					{P, P, S, P, P}};

char Z[LEN][WEI] = {{S, S, S, S, S},
					{P, P, P, S, P},
					{P, P, S, P, P},
					{P, S, P, P, P},
					{S, S, S, S, S}};


syms::syms(std::string string) {
	this->str = string;
	this->len = string.length();

	
}

void syms::output() {
	cout << "\n";
	for (int i = 0; i < LEN; i++) {
		for (int j = 0; j < len; j++) {
			cout << SPS;
			for (int k = 0; k < WEI; k++) {
				if (str[j] == 'A') {
					cout << A[i][k];
				}
				else if (str[j] == 'B') {
					cout << B[i][k];
				}
				else if (str[j] == 'C') {
					cout << C[i][k];
				}
				else if (str[j] == 'D') {
					cout << D[i][k];
				}
				else if (str[j] == 'E') {
					cout << E[i][k];
				}
				else if (str[j] == 'F') {
					cout << F[i][k];
				}
				else if (str[j] == 'G') {
					cout << G[i][k];
				}
				else if (str[j] == 'H') {
					cout << H[i][k];
				}
				else if (str[j] == 'I') {
					cout << I[i][k];
				}
				else if (str[j] == 'J') {
					cout << J[i][k];
				}
				else if (str[j] == 'K') {
					cout << K[i][k];
				}
				else if (str[j] == 'L') {
					cout << L[i][k];
				}
				else if (str[j] == 'M') {
					cout << M[i][k];
				}
				else if (str[j] == 'N') {
					cout << N[i][k];
				}
				else if (str[j] == 'O') {
					cout << O[i][k];
				}
				else if (str[j] == 'P') {
					cout << Pp[i][k];
				}
				else if (str[j] == 'Q') {
					cout << Q[i][k];
				}
				else if (str[j] == 'R') {
					cout << R[i][k];
				}
				else if (str[j] == 'S') {
					cout << Ss[i][k];
				}
				else if (str[j] == 'T') {
					cout << T[i][k];
				}
				else if (str[j] == 'U') {
					cout << U[i][k];
				}
				else if (str[j] == 'V') {
					cout << V[i][k];
				}
				else if (str[j] == 'W') {
					cout << W[i][k];
				}
				else if (str[j] == 'X') {
					cout << X[i][k];
				}
				else if (str[j] == 'Y') {
					cout << Y[i][k];
				}
				else if (str[j] == 'Z') {
					cout << Z[i][k];
				}
			}
		}
		cout << "\n";
	}
}