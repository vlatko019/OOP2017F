////////////////////////////////////////
///Objektno Orjentisano Programiranje///
////////////////////////////////////////

Zadatak F

4.12.2017

Vitez treba da vežba za turnir i u okviru tog 
procesa treba da se bori sa izvesnim brojem aždaja, 
mantikora i belih zečeva. Svi protivnici se opisuju 
imenom, koeficijentom borbene sposobnosti (B) i 
koeficijentom magične privlačnosti (M), i posebnim
dodatnim atributima koji su svi razlomljeni brojevi
u opsegu 0 do 1.

Aždaje se dodatno opisuju sjajnošću krljušti (S), 
simetrijom krila (K), temperaturom vatre (T), i 
snagom udarca (U). Za njih se koeficijenti računaju 
kao B = T * (1 + K) * U, i M = S * K.

Mantikori se dodatno opisuju intenzitetom crvene 
boje (I), simetrijom rogova (K), stepenom efikasnosti 
otrova (O) i efektivnom snagom ugriza (U). Za njih se
koeficijenti računaju kao: B = 0.5 * (U + O) * K a
M = I * (K + O + U) / 3.

Beli zečevi se dodatno opisuju intenzitetom bele boje 
(C) i nivoom znanja korišćenja samurajskog kratkog 
maca (wakizashi skill level, W). Za njih je B = W i 
M = C.

Skup neprijatelja protiv kojih vitez treba da vežba
sastoji se od 7 aždaja, 7 mantikori i 7 belih zečeva.

Omogućite vitezu da može da sortira sve segmente puta 
po koeficijentu B ili po koeficijentu M, odštampajte 
mu oba predloga da bi mogao da se odluci kako da 
isplanira svoj trening. Kada štampate, vodite računa 
da budu odštampani svi atributi svakog protivnika, 
uključujući i koeficijente B i M.
