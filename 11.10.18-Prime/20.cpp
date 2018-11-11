// Удаление лишних пробелов из строки
#include <iostream>

using namespace std;

int main () {
	char st [100];
	gets (st);
	char stt [100];
	int i, j = 0;
	for (i = 0; i < 100; i++){
		if ((st[i] == 'q') || (st[i] == 'w') || (st[i] == 'e') || (st[i] == 'r') || (st[i] == 't') || (st[i] == 'y') || (st[i] == 'u') || (st[i] == 'i') || (st[i] == 'o') || (st[i] == 'p') || (st[i] == 'a') || (st[i] == 'd') || (st[i] == 'f') || (st[i] == 'g') || (st[i] == 'h') || (st[i] == 'j') || (st[i] == 'k') || (st[i] == 'l') || (st[i] == 'z') || (st[i] == 'x') || (st[i] == 'c') || (st[i] == 'v') || (st[i] == 'b') || (st[i] == 'n') || (st[i] == 'm') || (st[i] == ' ')) {
		if (st[i] != ' '){
		stt[j] = st[i];
		j++;
		}
		else {
			while (st[i] == ' '){
				i++;
			}
			stt[j] = ' ';
			j++;
			stt[j] = st[i];
			j++;
		}
		}
		else break;
	}
		for (i = 0; i < j; i++){
			cout << stt[i];
		}
	return 0;
}
