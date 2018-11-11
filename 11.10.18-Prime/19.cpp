// Определить являются ли строки анаграммами
#include <iostream>

using namespace std;

bool an ();

int main () {
	cout << an();
}
bool an () {
	bool res;
	char st[200];
	gets (st);
	int nn= 0;
	while (st[nn] != 0){
		nn++;
	}
	char stt [200];
	gets (stt);
	int ll = 0;
	while (stt [ll] != 0){
		ll++;
	}
	int sh = 0;
	int q = 0, w = 0, e = 0, r = 0, t = 0, y = 0, u = 0, i = 0, o = 0, p = 0, a = 0, s = 0, d = 0, f = 0, g = 0, h = 0, j = 0, k = 0, l = 0, z = 0, x = 0, c = 0, v = 0, b = 0, n = 0, m = 0;
	if (nn == ll){
			for (int ii = 0; ii < nn; ii++){
			if (stt[ii] == 'q')
			q++;
			if (st[ii] == 'q')
			q--;
				if (stt[ii] == 'w')
			w++;
			if (st[ii] == 'w')
			w--;
				if (stt[ii] == 'e')
			e++;
			if (st[ii] == 'e')
			e--;
				if (stt[ii] == 'r')
			r++;
			if (st[ii] == 'r')
			r--;
				if (stt[ii] == 't')
			t++;
			if (st[ii] == 't')
			t--;
				if (stt[ii] == 'y')
			y++;
			if (st[ii] == 'y')
			y--;
				if (stt[ii] == 'u')
			u++;
			if (st[ii] == 'u')
			u--;
				if (stt[ii] == 'i')
			i++;
			if (st[ii] == 'i')
			i--;
				if (stt[ii] == 'o')
			o++;
			if (st[ii] == 'o')
			o--;
				if (stt[ii] == 'p')
			p++;
			if (st[ii] == 'p')
			p--;
				if (stt[ii] == 'a')
			a++;
			if (st[ii] == 'a')
			a--;
				if (stt[ii] == 's')
			s++;
			if (st[ii] == 's')
			s--;
				if (stt[ii] == 'd')
			d++;
			if (st[ii] == 'd')
			d--;
				if (stt[ii] == 'f')
			f++;
			if (st[ii] == 'f')
			f--;
				if (stt[ii] == 'g')
			g++;
			if (st[ii] == 'g')
			a--;
				if (stt[ii] == 'g')
			g++;
			if (st[ii] == 'g')
			g--;
				if (stt[ii] == 'h')
			h++;
			if (st[ii] == 'h')
			h--;
				if (stt[ii] == 'j')
			j++;
			if (st[ii] == 'j')
			j--;
				if (stt[ii] == 'k')
			k++;
			if (st[ii] == 'k')
			k--;
				if (stt[ii] == 'l')
			l++;
			if (st[ii] == 'l')
			l--;
				if (stt[ii] == 'z')
			z++;
			if (st[ii] == 'z')
			z--;
				if (stt[ii] == 'x')
			x++;
			if (st[ii] == 'x')
			x--;
				if (stt[ii] == 'c')
			c++;
			if (st[ii] == 'c')
			c--;
				if (stt[ii] == 'v')
			v++;
			if (st[ii] == 'v')
			v--;
				if (stt[ii] == 'n')
			n++;
			if (st[ii] == 'n')
			n--;
				if (stt[ii] == 'm')
			m++;
			if (st[ii] == 'm')
			m--;
			    if (stt[ii] == 'b')
			b++;
			if (st[ii] == 'b')
			b--;
			}
			/*cout << q << ' ' << w << ' ' << e << ' ' << r << ' ' << t << ' ' << y << ' ' << u << ' ' << i << ' ' << o << ' ' << p << ' ' << a << ' ' << s << ' ' << d << ' ' << f << ' ' << g << ' ' << h << ' ' << j << ' ' << k << ' ' << l << ' ' << z << ' ' << x << ' ' << c << ' ' << v << ' ' << b << ' ' << n << ' ' << m << endl;*/
		if ((q == 0) && (w == 0) && (e == 0) && (r == 0) && (t == 0) && (y == 0) && (u == 0) && (i == 0) && (o == 0) && (p == 0) && (a == 0) && (s == 0) && (d == 0) && (f == 0) && (g == 0) && (h == 0) && (j == 0) && (k == 0) && (l == 0) && (z == 0) && (x == 0) && (c == 0) && (v == 0) && (b == 0) && (n == 0) && (m == 0))
		res = true;
		else res = false;
	}
	else res = false;
	return res;
}
