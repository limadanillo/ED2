
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <stdio.h>

using namespace std;

#define min(x, y)   (x < y ? x : y)

#define ALPHABET_INITIAL 'a'
#define ALPHABET_FINAL   '}'

int **trans_table;
int rows;

int colchar(char c) {
  return (int) (c - ALPHABET_INITIAL);
}

bool issuffix(string x, string y) {
  if (x.length() == 0)
    return true;

  if (x.length() > y.length())
    return false;

  return x == y.substr(y.length() - x.length(), x.length());
}

void print_table() {
  int r, code;
  char c;

 
  for (r = 0; r < rows; r++) {
    //printf("[%2d,", r);
    for (c = ALPHABET_INITIAL; c <= ALPHABET_FINAL; c++){
        code = (unsigned int)  c;
        switch (code){
            case 123:
                //c = ' ';
                //cout <<p[q]<<"\n\n";
                printf("[%d,' ']: %d\n",r,trans_table[r][colchar(c)]);
                break;
            case 124:
                //c = ',';
                //cout <<p[q]<<"\n\n";
                printf("[%d,,]: %d\n",r,trans_table[r][colchar(c)]);
                break;
            case 125:
                //c = '.';
                //cout <<p[q]<<"\n\n";
                printf("[%d,.]: %d\n",r,trans_table[r][colchar(c)]);
                break;
            default:
                printf("[%d,%c]: %d\n", r,c ,trans_table[r][colchar(c)]);
        }
       // printf(" %c %2d",c ,trans_table[r][colchar(c)]);
    }

    //printf("\n");
  }
  //printf("\n");
}

/* Builds the automaton. */
void comp_trans_table(string p) {
  int m = p.length();
  string Pq;
  int k, q;

  rows = m + 1;
  trans_table = (int **) malloc(rows * sizeof(int *));
  for (k = 0; k <= m; k++)
    trans_table[k] = (int *) malloc(((int)(ALPHABET_FINAL - ALPHABET_INITIAL) + 1) * sizeof(int));

  for (q = 0; q <= m; q++) {

    Pq = p.substr(0, q);
    for (char a = ALPHABET_INITIAL; a <= ALPHABET_FINAL; a++) {
      k = min(m + 1, q + 2);

      do { k--; } while (!issuffix(p.substr(0, k), Pq + a));
      trans_table[q][colchar(a)] = k;
    }
  }
}

string ajustar_string(string p){
    int k, q;
    string Pq;
    int code;
    for (q = 0; q <= p.length(); q++) {
        //Pq = p.substr(0, q);
        code = (unsigned int)  p[q];
        switch (code){
            case 32:
                p[q] = '{';
                //cout <<p[q]<<"\n\n";
                break;
            case 44:
                p[q] = '|';
                //cout <<p[q]<<"\n\n";
                break;
            case 46:
                p[q] = '}';
                //cout <<p[q]<<"\n\n";
                break;
        }
    }
    return p;
}
/*---------------------------------------------------*/

/* Finite automaton matcher. */
void finite_automaton_matcher(string T, int m) {
  int n = T.length();
  int q = 0;
  for (int i = 0; i < n; i++) {
    //cout << "Go to q=" << q << " T[i]=" << T[i] << " i=" << i << endl;
    q = trans_table[q][colchar(T[i])];
    if (q == m)
      cout << i - m +2<< endl;
  }
}

int main(int argc, char **argv) {
  char comando;
  int i =0;
    int qtd;
    int j = 0;
    string txt;
    string pattern;
  scanf("%d\n", &qtd);
  getline(cin,txt);//string pattern = "dam,";
  getline(cin,pattern);
  pattern = ajustar_string(pattern);
  comp_trans_table(pattern);

  while(comando!='e'){
		fflush(stdin);
		comando = getchar();

		switch(comando){
            case 's':
                finite_automaton_matcher(ajustar_string(txt), pattern.length());
                break;

            case 'u':
                print_table();
                break;

            case 'e':
                break;

            default:
                break;

        }
    }
  return 0;
}
