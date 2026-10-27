# Circuita · Dossier de muntatge físic

La versió HTML té guia de connexions, calibrador i descàrrega de programes. Revisió documental no equival a prova amb el vostre maletí.

## M0 · Primer circuit documentat

Preparació docent i 4t de primària. Reproducció de les connexions de la làmina oficial 1; revisada visualment, no provada al vostre maletí.

Material: Font Cirkids de 4,5 V amb 3 piles AAA; Resistència de 100 Ω; Mòdul LED vermell; 3 cables banana compatibles.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Font + | R 100 Ω · extrem 1 |
| 2 | R 100 Ω · extrem 2 | LED + |
| 3 | LED − | Font − |

1. Situa font, resistència i LED com a la làmina. A la quadrícula original: R entre C4–C6, LED entre D2–F2, font a la dreta. La base posiciona; no és una protoboard amb files conductores.
2. Amb la font inactiva, fes les tres connexions numerades. Els extrems de la resistència es poden intercanviar. El LED sí que té polaritat.
3. Revisa + i −. Activa segons el procediment de la font del vostre model. Si només alimenta amb TEST premut, mantén-lo per a la prova; no el pontis.
4. Observa. Desactiva abans de canviar qualsevol cable. No afegeixis l’USB ni el controlador a aquest circuit de piles.

| Prova | Esperat |
|---|---|
| Font inactiva | LED apagat |
| Camí correcte i font activa | LED encès; si no, revisa piles, contactes i polaritat amb la font inactiva |

Errors i revisió:

- LED apagat: comprova l’estat de la font, els borns, el valor 100 Ω i la polaritat. No retiris la resistència per aconseguir més llum.
- La quadrícula no substitueix cap cable: col·locar dues peces al costat no les connecta.

Guió: No necessita programació.

Font: S1 · pàgina 1.

## M1 · Llum amb interruptor

4t de primària; continuïtat a 5è. Adaptació pròpia del circuit S1: afegir un comandament en sèrie.

Material: M0: font, R 100 Ω i LED; 1 interruptor Cirkids; 4 cables.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Font + | Interruptor · terminal 1 |
| 2 | Interruptor · terminal 2 | R 100 Ω · extrem 1 |
| 3 | R 100 Ω · extrem 2 | LED + |
| 4 | LED − | Font − |

1. Comença amb el M0 provat i desconnectat. Identifica els dos terminals de l’interruptor, no el confonguis amb el commutador de tres.
2. Insereix l’interruptor en el camí positiu segons la taula: cal un cable més que a M0.
3. Revisa el retorn i activa la font. Prova obert i tancat.
4. Per investigar una avaria, desactiva la font, retira només el retorn, reactiva breument i observa. Desactiva, repara i repeteix.

| Prova | Esperat |
|---|---|
| Interruptor obert | Apagat |
| Interruptor tancat, font activa | Encès |
| Retorn desconnectat amb la font prèviament inactiva | Apagat quan tornes a activar |

Errors i revisió:

- Si l’interruptor no controla: comprova que no hi hagi un cable que el ponti.
- Si no s’encén en tancar: contrasta primer el circuit M0.

Guió: No necessita programació.

Font: S1 + adaptació Circuita.

## M2 · Avís amb polsador

4t de primària; continuïtat a 5è. Adaptació pròpia de M0: substituir el comandament per un polsador.

Material: Font de piles, R 100 Ω, LED; 1 polsador Cirkids; 4 cables.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Font + | Polsador · terminal 1 |
| 2 | Polsador · terminal 2 | R 100 Ω · extrem 1 |
| 3 | R 100 Ω · extrem 2 | LED + |
| 4 | LED − | Font − |

1. Prepara el circuit amb la font inactiva. Usa el mòdul BUTTON/polsador de dos terminals.
2. Completa les connexions i comprova que no has fet un camí que eviti el polsador.
3. Activa la font i compara repòs, premut i alliberat. El polsador no conserva per si sol la demanda.
4. Acompanya l’avís amb una llegenda en paraula i símbol. Si el grup necessita una altra via perceptiva, acorda-la sense canviar l’objectiu de comprendre el polsador.

| Prova | Esperat |
|---|---|
| Repòs | Apagat |
| Premut i alimentat | Encès |
| Alliberat | Apagat |

Errors i revisió:

- Si es manté encès sense prémer: comprova el mòdul triat i si hi ha algun pont.
- Si la font també exigeix prémer TEST, cal mantenir l’alimentació durant tota la comparació; pot fer-ho una altra persona.

Guió: No necessita programació.

Font: S1 + adaptació Circuita.

## M3 · Dues branques amb els comandaments del kit

6è de primària. Disseny propi de dues branques; polaritat del mòdul bicolor contrastada amb S2, pàgina 190.

Material: Font de piles; LED vermell i LED bicolor; R 100 Ω i R 1 kΩ; Interruptor i polsador; 8 unions de cable; alguns nodes han d’acceptar més d’un conductor segons els connectors del kit.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Font + | Interruptor · terminal 1 |
| 2 | Interruptor · terminal 2 | R 100 Ω · extrem 1 |
| 3 | R 100 Ω · extrem 2 | LED vermell + |
| 4 | LED vermell − | Font − |
| 5 | Font + · mateix node | Polsador · terminal 1 |
| 6 | Polsador · terminal 2 | R 1 kΩ · extrem 1 |
| 7 | R 1 kΩ · extrem 2 | Bicolor · GREEN |
| 8 | Bicolor · RED | Font − · mateix node |

1. Comprova M1 abans d’afegir la segona branca. Desactiva la font.
2. Munta A amb interruptor, R 100 Ω i LED vermell. Munta B amb polsador, R 1 kΩ i bicolor. Cada branca porta la seva resistència.
3. Comparteix només els nodes Font + i Font −. Si els connectors no permeten les derivacions de manera estable, fes les proves per torns o usa M9; no forcis ni apilis connexions insegures.
4. Activa i prova els quatre estats. B és momentani: una persona ha de mantenir el polsador. Els controls commutables A/B de l’app són una simplificació d’aquesta acció.

| Prova | Esperat |
|---|---|
| A obert, B lliure | Totes apagades |
| A tancat, B lliure | Només A encesa |
| A obert, B premut | Només B encesa |
| A tancat, B premut | Les dues enceses; no cal que tinguin la mateixa brillantor |

Errors i revisió:

- B molt feble: les resistències i els LEDs són diferents. Atenua la llum ambiental per observar; no eliminis resistències. Si no és observable, registra-ho i usa M9 per comparar estats.
- Si una branca depèn de l’altra, segueix cada camí fins a la font: pot haver quedat una connexió en sèrie.

Guió: No necessita programació. Alternativa amb controlador: M9.

Font: Disseny Circuita; S1 i S2 per als components.

## M4 · Comparació física amb sèrie

6è de primària; ampliació ESO. Experiment propi de comparació amb dues càrregues diferents; el model virtual no prediu la brillantor.

Material: Font de piles; Interruptor; R 100 Ω; LED vermell i bicolor; 5 cables.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Font + | Interruptor · terminal 1 |
| 2 | Interruptor · terminal 2 | R 100 Ω · extrem 1 |
| 3 | R 100 Ω · extrem 2 | LED vermell + |
| 4 | LED vermell − | Bicolor · GREEN |
| 5 | Bicolor · RED | Font − |

1. Desmunta M3 amb la font inactiva. Representa ara un únic camí amb els dos receptors.
2. Revisa les dues polaritats i la resistència abans d’activar.
3. Observa el resultat sense exigir que els dos LEDs siguin brillants. Amb 4,5 V i dos mòduls, poden lluir poc o no fer-ho de manera observable. Això depèn de la seva resposta elèctrica, no només de la continuïtat.
4. Desactiva abans d’obrir un cable. Compara el camí compartit amb M3. Si vols demostrar només la topologia, usa també el model virtual; no augmentis la tensió de la font.

| Prova | Esperat |
|---|---|
| Camí únic obert | No hi ha corrent de branca; LEDs apagats |
| Camí tancat | Registra l’observació real: brillantor no garantida amb aquesta font i aquests mòduls |
| Unió entre LEDs interrompuda amb font inactiva abans del canvi | Tots dos queden sense camí complet |

Errors i revisió:

- Dos LEDs apagats amb camí tancat no demostren per si sols una avaria. Pot faltar marge de tensió per a les dues càrregues.
- No comparis quantitats de consum a partir de la brillantor.

Guió: No necessita programació.

Font: Disseny experimental Circuita.

## M5 · Primera sortida del microcontrolador

Preparació docent; 6è de primària i ESO. Connexió del mòdul LED a un pin digital i GND documentada a S2, pàgina 190. La resistència de sortida d’1 kΩ és una protecció addicional de Circuita.

Material: Controlador Cirkids compatible UNO; Mòdul LED vermell; 3 cables; Ordinador i cable USB de dades compatible; R 1 kΩ en sèrie amb el LED: protecció addicional proposada per Circuita.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Controlador · D11 | R 1 kΩ · extrem 1 |
| 2 | R 1 kΩ · extrem 2 | Mòdul LED + |
| 3 | Mòdul LED − | Controlador · GND |

1. A la sortida digital posa també R 1 kΩ en sèrie amb el LED. És una adaptació pròpia per limitar el corrent del pin; la font consultada representa el mòdul connectat directament.
2. Retira el circuit de piles i desconnecta l’USB per preparar. Aquest muntatge s’alimenta per USB: no hi afegeixis la font de 4,5 V.
3. Localitza per inscripció D11 i GND al controlador. Uneix-los al mòdul LED com indica la taula. No és una instrucció per a un LED solt.
4. Connecta el cable de dades, selecciona el dispositiu adequat i carrega 00_Prova_LED.
5. Comprova encès/apagat lent. Si la càrrega funciona però no la llum, revisa D11, polaritat i GND amb USB desconnectat.

| Prova | Esperat |
|---|---|
| Programa 00 carregat | Alterna aproximadament 1,5 s encès i 1,5 s apagat |
| USB desconnectat | Sense alimentació des d’aquest USB |

Errors i revisió:

- No apareix cap port: prova un cable USB de dades, permisos i connexió; no concloguis que el kit està espatllat.
- No instal·lis un controlador USB genèric a l’atzar: identifica primer el dispositiu i la documentació del fabricant.

Guió: INICIALITZA: configura D11 com a sortida. BUCLE: encén D11 → espera 1,5 s → apaga D11 → espera 1,5 s. Aquest guió serveix per a una prova de llum, no per a una aturada prioritària.

Font: S2, pàgina 190; programa propi.

## M6 · Sensor de llum, calibratge i habilitació

1r d’ESO; ampliació de 6è de primària. Topologia sensor–resistència–entrada documentada a S2, pàgines 187–188. Valor 10 kΩ, A0 i programes: selecció de treball de Circuita. La resistència de sortida d’1 kΩ és una protecció addicional de Circuita.

Material: Controlador i USB de dades; Sensor de llum Cirkids; R 10 kΩ; Mòdul LED vermell; 7 unions bàsiques; 2 unions opcionals per a habilitació; Interruptor opcional per a habilitació; R 1 kΩ en sèrie amb el LED: protecció addicional proposada per Circuita.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | Controlador · 5V | Sensor · + |
| 2 | Sensor · − | Controlador · A0 · node N |
| 3 | Node N (sensor − i A0) | R 10 kΩ · extrem 1 |
| 4 | R 10 kΩ · extrem 2 | Controlador · GND |
| 5 | Controlador · D11 | R 1 kΩ · extrem 1 |
| 6 | R 1 kΩ · extrem 2 | Mòdul LED + |
| 7 | Mòdul LED − | Controlador · GND · mateix node |
| 8 | Opcional: controlador · D2 | Interruptor · terminal 1 |
| 9 | Interruptor · terminal 2 | GND · mateix node (opcional) |

1. A la sortida digital posa també R 1 kΩ en sèrie amb el LED. És una adaptació pròpia per limitar el corrent del pin; la font consultada representa el mòdul connectat directament.
2. Desconnecta USB i piles. Munta el sensor segons la taula. El node N és una unió compartida de tres punts: sensor −, A0 i un extrem de R. GND arriba a l’altre extrem de R.
3. No posis sensor − directament a GND: desapareixeria el senyal útil d’aquest muntatge. Prepara derivacions només amb connexions compatibles i estables.
4. Carrega 01_Calibratge i obre el monitor a 9600 bauds. Pren cinc lectures amb el sensor cobert i cinc amb la llum de treball. Calcula les dues mitjanes al calibrador del dossier.
5. Genera 02, 03 o 05 amb aquestes dades. Llum 0 és la condició coberta; 100 és la condició de referència clara, no lux. Les dues mitjanes han de diferir almenys 20 comptes ADC per a aquesta proposta.
6. Per al repte d’habilitació afegeix l’interruptor entre D2 i GND amb USB desconnectat. INPUT_PULLUP fa que tancat sigui LOW; el programa ho interpreta com habilitat.
7. Carrega, prova i anota la lectura normalitzada i la sortida. El cas exactament 30 és més fàcil de validar al simulador; el soroll pot impedir mantenir-lo físicament.

| Prova | Esperat |
|---|---|
| Calibratge encara pendent | Els programes 02/03/05 subministrats mantenen el LED apagat i avisen al monitor |
| 02 amb lectura normalitzada < 30 | LED encès |
| 02 amb lectura ≥ 30 | LED apagat |
| 03 amb llum baixa i interruptor obert | LED apagat |
| 03 amb llum baixa i interruptor tancat | LED encès |

Errors i revisió:

- Lectura sempre 0 o 1023: revisa A0, node N, R i alimentació; pot haver-hi saturació o una unió incorrecta.
- Les lectures augmenten en cobrir: no ho amaguis. El calibrador admet els dos sentits perquè usa les mitjanes, però revisa la correspondència amb el sensor del kit.
- Si canvia la il·luminació o l’emplaçament, repeteix el calibratge.

Guió: INICIALITZA: port sèrie 9600; D11 sortida; per a l’habilitació, D2 entrada amb pull-up. BUCLE: llegeix A0 → normalitza amb els dos valors mesurats → calcula L < 30 → combina amb habilitat si escau → escriu la sortida → envia la lectura al monitor. No facis servir «espera» llarga si després afegeixes una aturada.

Font: S2, pàgines 187–190; adaptació de calibratge pròpia.

## M7 · Seqüència amb aturada i rearme

2n d’ESO. Sortida documentada a S2; entrades INPUT_PULLUP i temporització sense bloqueig segons Arduino. Disseny del programa i rearme propis. La resistència de sortida d’1 kΩ és una protecció addicional de Circuita.

Material: Controlador amb USB; LED vermell; Interruptor (aturada); Polsador (rearme); 7 cables/unions; R 1 kΩ en sèrie amb el LED: protecció addicional proposada per Circuita.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | D11 | R 1 kΩ · extrem 1 |
| 2 | R 1 kΩ · extrem 2 | Mòdul LED + |
| 3 | Mòdul LED − | GND |
| 4 | D2 | Interruptor ATURADA · terminal 1 |
| 5 | Interruptor ATURADA · terminal 2 | GND · mateix node |
| 6 | D8 | Polsador REARME · terminal 1 |
| 7 | Polsador REARME · terminal 2 | GND · mateix node |

1. A la sortida digital posa també R 1 kΩ en sèrie amb el LED. És una adaptació pròpia per limitar el corrent del pin; la font consultada representa el mòdul connectat directament.
2. Desconnecta USB i prepara les sis unions. D2 i D8 són entrades amb pull-up; els comandaments tanquen cap a GND, mai cap a 5V en aquest esquema.
3. Carrega 04_Sequencia_aturada. A l’inici, la sortida és apagada i espera rearme.
4. Amb l’aturada oberta, prem i deixa anar REARME. Comprova dos segons encès i dos apagat.
5. Tanca ATURADA mentre és encès: el programa apaga a la següent iteració sense esperar que acabi la fase. Obre ATURADA: es manté apagat. Prem REARME per començar de nou.
6. Repeteix l’aturada durant una fase apagada. Prem REARME amb ATURADA encara activa: no ha de començar.

| Prova | Esperat |
|---|---|
| En arrencar | Apagat fins a rearme |
| Rearme amb aturada oberta | Cicle lent 2 s encès / 2 s apagat |
| Aturada tancada en qualsevol fase | Apagat amb prioritat |
| Retirar l’aturada | Continua apagat |
| Nou pols de rearme amb aturada oberta | Nou cicle des de la primera fase |

Errors i revisió:

- No arrenca: cal un nou pols de rearme, no mantenir-lo premut des d’abans d’obrir l’aturada.
- Rebot del polsador: el programa filtra l’entrada de rearme 30 ms. L’aturada no espera aquest filtre.
- Un LED de maqueta no és un sistema d’emergència certificat.

Guió: INICIALITZA: aturada enclavada, LED apagat. REPETEIX: llegeix ATURADA; si activa, enclava i apaga. Si no, detecta un NOU pols de REARME. Només aleshores allibera l’aturada i inicia el rellotge. Calcula fase amb temps transcorregut, sense espera bloquejant. Fases 0/1 encès; 2/3 apagat.

Font: S2 + Arduino InputPullupSerial / BlinkWithoutDelay; programa propi.

## M8 · Histèresi amb el sensor real

2n d’ESO. Mateix maquinari que M6 sense habilitació; regla d’estat pròpia. La resistència de sortida d’1 kΩ és una protecció addicional de Circuita.

Material: M6: controlador, sensor, R 10 kΩ i LED; Calibratge de la ubicació fet; R 1 kΩ en sèrie amb el LED: protecció addicional proposada per Circuita.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | 5V | Sensor + |
| 2 | Sensor − | A0 i un extrem de R 10 kΩ |
| 3 | Altre extrem de R 10 kΩ | GND |
| 4 | D11 | R 1 kΩ · extrem 1 |
| 5 | R 1 kΩ · extrem 2 | LED + |
| 6 | LED − | GND |

1. A la sortida digital posa també R 1 kΩ en sèrie amb el LED. És una adaptació pròpia per limitar el corrent del pin; la font consultada representa el mòdul connectat directament.
2. Conserva el muntatge M6 verificat. Torna a calibrar si has canviat la llum o el lloc.
3. Genera 05_Histeresi amb les dues mitjanes mesurades i carrega’l. L’estat inicial és apagat.
4. Baixa L sota 30; després situa’l entre 30 i 40. Observa que conserva l’encesa.
5. Puja sobre 40; torna entre 30 i 40. Ara conserva l’apagat. Anota d’on venies en cada prova.

| Prova | Esperat |
|---|---|
| L = 29 partint d’apagat (o valor físic < 30) | S’encén |
| L = 35 venint d’encesa | Conserva encesa |
| L = 41 (o valor físic > 40) | S’apaga |
| L = 35 venint d’apagat | Conserva apagada |
| L = 30 o 40 exactes al model virtual | Conserva l’estat anterior |

Errors i revisió:

- Una mateixa lectura intermèdia pot donar dues sortides correctes: falta saber l’estat anterior.
- No substitueixis els dos llindars per un únic si/altrament: perdries la memòria dins de la banda.

Guió: INICIALITZA: estat = apagat. BUCLE: llegeix i normalitza L. SI L < 30: estat = encès. SI NO, SI L > 40: estat = apagat. SI NO: no canviïs estat. Escriu estat a D11.

Font: M6 + desenvolupament propi.

## M9 · Dues zones programades, alternativa

6è de primària amb modelatge; ESO. D11 per al LED i D10 per al bicolor documentats a S2, pàgina 190. Controls i programa propis. S’hi afegeixen dues R d’1 kΩ com a protecció de les sortides.

Material: Controlador USB; LED vermell i mòdul bicolor; Interruptor i polsador; 10 unions; 2 resistències d’1 kΩ: si el maletí només en té una, cal compartir la segona amb un altre kit o mantenir M3 com a alternativa sense programar.

| Cable | Des de | Fins a |
|---|---|---|
| 1 | D11 | R A 1 kΩ · extrem 1 |
| 2 | R A 1 kΩ · extrem 2 | LED vermell + |
| 3 | LED vermell − | GND |
| 4 | D10 | R B 1 kΩ · extrem 1 |
| 5 | R B 1 kΩ · extrem 2 | Bicolor · GREEN |
| 6 | Bicolor · RED | GND |
| 7 | D2 | Interruptor A · terminal 1 |
| 8 | Interruptor A · terminal 2 | GND |
| 9 | D8 | Polsador B · terminal 1 |
| 10 | Polsador B · terminal 2 | GND |

1. Aquesta ampliació afegeix dues resistències d’1 kΩ, una per sortida. És una adaptació pròpia; comprova disponibilitat abans de triar-la.
2. Desconnecta USB. Prepara les dues sortides amb els mòduls del kit, no LEDs solts.
3. Prepara els controls com a entrades amb pull-up: cadascun tanca a GND.
4. Carrega 06_Dues_zones. A manté estat segons l’interruptor; B dura mentre el polsador està premut.
5. Compara els quatre casos. Aquí es controlen dos pins diferents; no és el mateix muntatge passiu de piles que M3.

| Prova | Esperat |
|---|---|
| A obert, B lliure | Totes apagades |
| A tancat, B lliure | Només A |
| A obert, B premut | Només B |
| A tancat, B premut | Totes dues |

Errors i revisió:

- Mai uneixis D10 i D11: són sortides diferents, no un node comú.
- Si el bicolor és vermell en comptes de verd, comprova GREEN/RED amb USB desconnectat.

Guió: INICIALITZA: D11 i D10 sortides; D2 i D8 entrades pull-up. BUCLE: A = (D2 és LOW); B = (D8 és LOW). Escriu A a D11 i B a D10.

Font: S2, pàgina 190 + programa propi.

## Correspondència amb els reptes

- p1-light · Una llum per al racó de lectura: M0, M1
- p1-repair · La llum de la maqueta s’ha apagat: M1
- p1-button · Una llum només quan la demanem: M2
- p2-button · Un avís per compartir la lectura: M2
- p2-switch · Un missatge que es manté: M1
- p2-diagnose · El taller de reparació del barri: M2
- p3-parallel · Dues llums al passeig: M3, M9
- p3-series · Dos camins o un de sol?: M3, M4
- p3-service · Una zona en ús, una zona apagada: M3, M9
- e1-sensor · Un camí de maqueta que respon a la llum: M5, M6
- e1-enable · La maqueta té un horari d’ús: M6
- e1-debug · El 30 també s’encén: és un error?: M6
- e2-sequence · Un avís lluminós per a una maqueta del litoral: M5, M7
- e2-hysteresis · Un fanal que no oscil·la: M6, M8
- e2-service · Auditoria d’un prototip de barri: M7

## Fonts

S1: https://academiadeinventores.com/wp-content/uploads/2024/03/laminas_proyectos_cirkids_v6.pdf

S2: https://steambraceproject.eu/wp-content/uploads/2025/02/STEAMBRACE_WP3_D3.5_Training-of-students-in-STEAM_fin01_compressed-1.pdf (pàgines PDF 187–190).

Arduino: InputPullupSerial, BlinkWithoutDelay i analogRead, documentació oficial.

Els esquemes que afegeixen comandaments, derivacions, rearme, calibratge i programes són propostes pròpies; no s’atribueixen al fabricant. Els LEDs de sèrie poden no il·luminar-se prou amb la font indicada. La primera prova la fa el docent.


---

Aplicació creada per [CRP Badalona](https://serveiseducatius.xtec.cat/badalona) amb assistència de la IA.

Obra sota llicència [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/deed.ca).

La llicència s’aplica a les aportacions pròpies de Circuita. Les imatges Cirkids, les fonts documentals i els altres materials de tercers conserven les atribucions i els drets indicats a les fonts; no se’ls atribueix aquesta llicència.
