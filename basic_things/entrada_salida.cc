#include <bits/stdc++.h>
using namespace std;

//Numero de casos dado
void num_casos() {
	int t;
	scanf("%d", &t);

	while(t--) {
		int a, b; scanf("%d %d", &a, &b);
		printf("%d\n", a+b);
	}
}

//Los casos acaban con un valor especial
void end_especial() {
	int a, b;
	while (scanf("%d %d", &a, &b), (a || b))
		printf("%d\n", a+b);
}

//Los casos acaban con la señal EOF
void end_eof() {
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF) printf("%d\n", a+b);
}

void casos_esp() {
	int a, b, c = 1;
	while (scanf("%d %d", &a, &b) != EOF) printf("Case %d: %d\n\n", c++, a+b);
}

void casos_esp2() {
	int a, b, c = 1;
	while (scanf("%d %d", &a, &b) != EOF) {
		if (c > 1) printf("\n");
		printf("Case %d: %d\n", c++, a+b);
	}
}

// un numero dado de elementos por linea 
void entrada_variable() {
	int k;
	while (scanf("%d", &k) != EOF) {
		int ans = 0, v;
		while (k--) {scanf("%d", &v); ans += v;}
		printf("%d\n", ans);	
	}
}


//Puede ser mas dificil si no nos dicen el num de elementos por linea
//Esta version es la que no usa getline, usa EOL y un dummy char
void entrada_variable2_1() {
	while (1) {
		int ans = 0, v;
		char dummy;
		while (scanf("%d%c", &v, &dummy) != EOF) {
			ans += v;
			if (dummy == '\n') break;
		}
		if (feof(stdin)) break;
		printf("%d\n", ans);
	}
}

//La segunda version que usa getline, esta es preferible, todo mas sencillo
void entrada_variable2_2() {
	string line;
	while (getline(cin, line)) {
		istringstream stream(line);
		int ans = 0, v;
		while (stream >> v) ans += v;
		printf("%d\n", ans);
	}
}

//Si quiero printear numero PI con n decimales
//printf("%.*lf\n", n, M_PI);

int main() {
	// si quiero usar cin y cout, para ir mas rapido
	// puedo evitar la sincronizacion constante
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	//num_casos();
	//end_especial();
	//end_eof();
	//casos_esp();
	//casos_esp2();
	//entrada_variable();
	//entrada_variable2_1();
	entrada_variable2_2();
}





















