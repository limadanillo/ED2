# ED2
Algoritmo de Busca por Palavras com Uso de Autômato


1 Descrição Geral do Trabalho
Neste trabalho o aluno implementará o algoritmo de busca de cadeias de caracteres
com o uso de autômato finito, descrito em sala de aula. O programa
lerá uma linha de texto e um padrão e executará um conjunto de operações. O
trabalho deve assumir a definição de entrada e saída como indicada na seção a
seguir.
2 Formato da Entrada e Saída
A entrada conterá inicialmente três linhas. A primeira linha conterá um inteiro,
que indica quantos caracteres possui a linha de texto. A segunda linha conterá a
linha de texto. A terceira linha conterá um padrão. O aluno assumirá o seguinte
formato de entrada:
1. o tamanho do padrão (número de caracteres) será menor ou igual ao
tamanho do texto;
2. no texto e no padrão somente poderão ocorrer os seguintes caracteres:
letras minúsculas, sem acento; ponto (’.’); vírgula (’,’) ou espaço. O espaço
não ocorrerá como último caractere do texto, nem do padrão.
Após o padrão, haverá uma sequência de operações, uma por linha. O
conjunto de operações a serem implementadas e seus formatos são os seguintes:
1. busca padrão: esta operação consistirá de uma única linha contendo a
letra ’s’. Esta operação indica a partir de quais posições do texto o padrão
ocorre. A posição do primeiro caractere do texto é a posição 1.
A saída desta operação deve indicar, uma por linha, as posições a partir
das quais o padrão ocorre. Caso o padrão não ocorra no texto, esta
operação não gera nenhuma saída.

2. impressão da tabela δ: esta operação conterá apenas uma linha, contendo
a letra ’u’. Esta operação imprime a tabela δ.
A saída deverá ser da seguinte forma. Na primeira linha, deve aparecer
"Tabela Delta:". As linhas seguintes indicarão o valor de delta para cada
uma das combinações de estado e caractere, um valor por linha, na seguinte
sequência: δ(0,’a’), δ(0,’b’), ..., δ(0,’z’), δ(0,’.’), δ(0,’,’), δ(0,’ ’), δ(1,’a’),
δ(1,’b’), .... Cada linha terá o seguinte formato: para a entrada para o
estado s e para o caractere c, a linha conterá o caractere ’[’ seguido do
valor do estado, seguido por uma vírgula, seguida de um espaço, seguido
do caractere, seguido por dois pontos (’:’), seguido de um espaço, seguido
do valor da tabela para o estado e caractere. Por exemplo, suponha que
δ(3, ’g’)=4, ou seja, suponha que o valor da tabela para o estado 3 e o
caractere ’g’ seja 4. A linha correspondente a esta entrada na tabela será:
[3, g]: 4
O caractere espaço deve aparecer como a sequência de caracteres apóstrofe,
espaço, apóstrofe (’ ’).
3. término da sequência de comandos: a sequência de comandos será
terminada por uma linha com a letra ’e’.
3 Observações
Trabalho individual. O aluno deve entregar seu trabalho através da plataforma
Moodle, em um único arquivo (caso haja mais de um arquivo, comprima-os em
um único arquivo).


Search algorithm for words with Use Automaton


1 Overview of Work
In this work the student will implement the search algorithm of strings
with the use of finite automaton described in the classroom. The program
read a line of text and a pattern and execute a set of operations. O
work must take the input setting and output as indicated in section
follow.
2 Input and Output Format
The entrance will initially contain three lines. The first line contains an integer,
which indicates how many characters have the line of text. The second line will contain the
text line. The third line contains a pattern. The student will take the following
Input format:
1 Standard size (number of characters) is less than or equal to
text size;
2. the text and pattern may occur only the following characters:
lowercase letters without accent; Score ('.'); comma ( ',') or space. The space
not occur as the last character of the text, not the standard.
After the pattern, there will be a sequence of operations, one per line. O
assembly operations to be implemented and their formats are:
1. Standard search: this operation will consist of a single line containing the
letters'. This operation indicates from which the standard text positions
occurs. The position of the first character of the text is the position 1.
The output of this operation shall indicate one per line, positions from the
of which the pattern occurs. If the pattern does not occur in the text, this
operation does not generate any output.

2. Print δ table: this operation will contain just one line containing
the letter 'u'. This operation prints the δ table.
The output should be as follows. In the first line, should appear
"Table Delta". The following lines indicate the delta value for each
one of the state and character combinations, one per line, the following
sequence: δ (0, 'a'), δ (0, 'b'), ..., δ (0, 'z'), δ (0, '.'), δ (0 '') , δ (0 ''), δ (1, 'a'),
δ (1 'b'), .... Each line has the following format: for entry into the
s state and the character c, the line will contain the character '[' followed by
state value, followed by a comma followed by a space followed
character, followed by a colon ( ':') followed by a space, followed
Table value for the state and character. For example, suppose
δ (3, g) = 4, ie, assume that the table value for the state 3 and
character 'g' is 4. The line corresponding to this entry in the table will be:
[3 g]: 4
The space character must appear as the result of apostrophe character,
space, apostrophe ( ').
3. End the command sequence: a sequence of commands will
terminated by a line with the letter 't'.
3 Comments
Individual work. The student must deliver their work across the platform
Moodle in a single file (if there is more than one file, compress them into
a single file).
