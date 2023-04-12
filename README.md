# Explicatii


#### Connect 4 este un joc de strategie pentru doi jucători, care se joacă pe o tablă formată din 7 coloane și 6 rânduri. Scopul jocului este să plasezi patru piese de aceeași culoare într-o linie, fie verticală, orizontală sau diagonală. Regulile jocului Connect 4 sunt următoarele:
* 	Jocul începe cu tabla goală. Fiecare jucător alege o culoare și primește un set de 21 de piese de aceeași culoare.
* 	Jucătorii alternează plasarea pieselor pe tabla de joc, începând cu jucătorul care a ales culoarea roșie. Piesele se plasează într-o coloană la alegere, iar ele căzând pe cel mai de jos rând liber din acea coloană.
*   Scopul jocului este să creezi o linie de patru piese de aceeași culoare, fie verticală, orizontală sau diagonală. Linia poate fi creată în orice moment al jocului, pe parcursul mutărilor celor doi jucători.
* 	Jocul se termină atunci când unul dintre jucători reușește să creeze o linie de patru piese de aceeași culoare, sau când toate cele 42 de locuri de pe tabla de joc sunt ocupate și nu mai există o linie de patru piese de aceeași culoare.
* 	În cazul în care jocul se termină din cauza umplerii tablei de joc, jocul este considerat o remiză.

#### În cod, tabloul de joc este reprezentat de o matrice bidimensională de caractere de dimensiunea RANDURI x COLOANE, unde RANDURI = 6 și COLOANE = 7. Inițial, tabloul este umplut cu caractere "-".  Funcția creare_tabla( ) este responsabilă pentru afișarea tabloului de joc pe ecran. Funcția este_posibila_miscarea(int coloana) returnează adevărat dacă este posibil să se plaseze o piesă în coloana specificată (coloana numerotată de la 1 la 7) și fals altfel.
#### Funcția realizare_miscare(int coloana, char jucator) este responsabilă pentru plasarea unei piese a jucătorului în cea mai de jos rând disponibil din coloana specificată.
#### Funcția a_castigat(char jucator) verifică dacă jucătorul specificat a câștigat jocul prin verificarea tuturor posibilităților de a avea patru piese în linie pe tabloul de joc. Verificarea se face pentru toate rândurile, coloanele și diagonalele. 
#### În funcția main(), tabloul de joc este inițializat cu caractere "-". Jocul începe cu jucătorul "X", care alege o coloană în care să plaseze piesa. Dacă mutarea este validă, piesa jucătorului este plasată în cea mai de jos poziție disponibilă din coloană.
#### Apoi, funcția a_castigat() este apelată pentru a verifica dacă jucătorul curent a câștigat jocul. Dacă a câștigat, jocul se încheie, iar mesajul "Jucatorul [X/O] castiga!" este afișat. În caz contrar, tura este trecută jucătorului următor (de la "X" la "O" sau invers). Jocul continuă până când unul dintre jucători câștigă sau până când toate spațiile de pe tablă sunt ocupate și jocul se termină într-un egal.


