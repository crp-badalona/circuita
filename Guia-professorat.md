# Circuita · Guia pràctica per al professorat novell

Aquesta guia acompanya l’app d’alumnat. El professorat reprodueix primer la tasca i després prepara com pensar-la en veu alta. No s’assignen activitats a «estils d’aprenentatge»: el DUA ofereix diverses vies d’accés, participació i expressió amb els mateixos objectius.

La versió HTML inclou cinc laboratoris, animació controlable, preguntes autocorrectives i notes exportables. Aquesta versió reuneix tot el contingut per consultar i imprimir.

## Abans de començar

Treballa primer en simulació. Per al muntatge real confirma inventari, manual, alimentació i procediment. Desconnecta abans de modificar. No treballis amb xarxa domèstica ni provoquis curtcircuits. Davant d’una anomalia, atura i desconnecta. No es fixen pins, connexions ni valors de mòduls del kit a partir d’una fotografia.

## Bases conceptuals

### Circuit tancat

**Exemple real:** Una llanterna només pot funcionar si les connexions formen el camí previst.

**Representació:** Visualitza un recorregut que torna al punt de partida. Segueix-lo amb un dit o una descripció oral.

**Pràctica:** Obre el comandament del model; després obre el retorn. Compara les dues causes d’apagat.

**Límit o precisió:** Un camí tancat no garanteix per si sol funcionament: font, polaritat i components també han de ser adequats.

### Font i energia

**Exemple real:** Les piles d’un comandament emmagatzemen energia química que es pot transformar.

**Representació:** Representa la font amb + i − i etiqueta els receptors.

**Pràctica:** Identifica la font i explica què aporta sense dir que «fabrica electrons».

**Límit o precisió:** El circuit no necessita que la font creï els electrons que ja hi ha als conductors.

### Tensió i corrent

**Exemple real:** Una font i un receptor tenen valors i límits que cal respectar.

**Representació:** Tensió V: diferència de potencial entre dos punts, en volts. Corrent I: càrrega que travessa una secció per unitat de temps, en amperes.

**Pràctica:** Per a un resistor ideal, 3 V / 1.000 Ω = 0,003 A = 3 mA. Escriu les unitats.

**Límit o precisió:** La tensió es defineix entre punts; el corrent, en una branca. No són dues paraules per a la mateixa magnitud.

### Una analogia i el seu límit

**Exemple real:** Un circuit d’aigua recirculant pot ajudar a imaginar pressió, cabal i restricció.

**Representació:** Dibuixa bomba → canonada → turbina → retorn. Relaciona-ho amb font, conductors i receptor.

**Pràctica:** Explica on l’analogia ajuda a recordar el retorn i després indica un límit.

**Límit o precisió:** L’aigua no és electricitat: l’analogia no descriu la propagació dels camps ni tots els components electrònics.

### Resistència i llei d’Ohm

**Exemple real:** Una resistència limita la relació entre tensió i corrent en un model adequat.

**Representació:** R en ohms, Ω. En un resistor ideal: V = I·R.

**Pràctica:** Amb V fixa, compara R = 1.000 Ω i R = 2.000 Ω. El corrent passa de 3 mA a 1,5 mA si V = 3 V.

**Límit o precisió:** No apliquis aquesta fórmula directament a un LED ni dedueixis les connexions d’un mòdul Cirkids. Pot incorporar elements interns.

### LED i polaritat

**Exemple real:** Molts indicadors d’aparells són LEDs i necessiten condicions elèctriques adequades.

**Representació:** Observa noms, símbols i marques del mòdul. No dedueixis polaritat només pel color d’un cable.

**Pràctica:** En el kit, identifica les marques amb el manual abans de preparar el muntatge desconnectat.

**Límit o precisió:** No connectis un LED solt directament a qualsevol pila. El tractament d’un mòdul educatiu depèn del seu disseny i documentació.

### Interruptor i polsador

**Exemple real:** Un interruptor de llum acostuma a mantenir la posició; un timbre acostuma a respondre mentre el premem.

**Representació:** Compara dos fotogrames: actuant / després de deixar.

**Pràctica:** Fes la prova prémer–deixar i descriu si l’estat es conserva.

**Límit o precisió:** El polsador sol no guarda el torn; cal una altra funció per tenir memòria.

### Sèrie i paral·lel

**Exemple real:** En una maqueta amb dues zones, pot interessar controlar una llum sense afectar l’altra.

**Representació:** Segueix les branques; la posició física sobre la taula no defineix el tipus de circuit.

**Pràctica:** Obre una branca i després l’altra. Fes també el cas de sèrie per comparar.

**Límit o precisió:** La brillantor real depèn de components i alimentació. No concloguis que sempre és igual o que un receptor consumeix corrent.

### Entrada, procés i sortida

**Exemple real:** Un llum automàtic pot usar una lectura ambiental, una regla i un actuador.

**Representació:** Sensor → comparació/decisió → llum. Afegeix noms i una frase al diagrama.

**Pràctica:** Dona tres entrades simbòliques i escriu la sortida esperada abans de moure el control.

**Límit o precisió:** No tots els sensors proporcionen el mateix tipus de lectura; cal documentació i, si escau, calibratge.

### Llindar, AND i casos límit

**Exemple real:** Un dispositiu només respon si està habilitat i si es compleix una condició.

**Representació:** Regla: habilitat AND (L < 30). Mostra-la també en una taula.

**Pràctica:** Prova 29, 30 i 31 amb habilitat cert; prova 0 amb habilitat fals.

**Límit o precisió:** L’escala 0–100 del model no són lux. «Menor que» no inclou la igualtat.

### Seqüència i prioritat

**Exemple real:** Un avís intermitent necessita temps i una manera definida d’aturar-lo.

**Representació:** Dibuixa una línia temporal amb encès, apagat i un senyal d’aturada que interromp el procés.

**Pràctica:** Activa l’aturada mentre s’executa, no només abans de començar.

**Límit o precisió:** Una animació educativa no valida temps de resposta físic ni converteix el muntatge en un sistema de seguretat.

### Histèresi i estat

**Exemple real:** Un control amb dos llindars pot evitar commutacions quan una lectura fluctua.

**Representació:** Encén per sota de 30, apaga per sobre de 40 i conserva la resta. Defineix l’estat inicial.

**Pràctica:** Prova 20 → 35 → 45 → 35. Espera encès → encès → apagat → apagat.

**Límit o precisió:** A 35 poden existir dos estats segons la història. Histèresi i retard temporal no són el mateix.

## Cinc recorreguts de modelatge

### 1r–2n de primària · Una llum per al racó de lectura

**Context:** Una aula de Badalona. A la maqueta del racó de lectura volem decidir quan hi ha llum. Construïm un model petit per entendre el camí elèctric; no modifiquem la instal·lació de l’escola.

**Fita:** Identificar la font, la llum i l’interruptor, i explicar què canvia quan el camí queda obert.

**Material:** Font educativa autoritzada, interruptor, mòdul LED adequat i connexions compatibles amb el vostre kit. El simulador representa una llum genèrica.

**Concepte:** La font aporta energia; l’interruptor obre o tanca el camí. La llum transforma energia elèctrica en llum i calor. Un camí complet és necessari, però calen també components adequats i ben connectats.

**Predicció:** Amb la font activada, el retorn complet i l’interruptor obert, què passarà? Per què?

**Resultat esperat:** La llum queda apagada perquè el camí està interromput a l’interruptor.

**Modelatge en veu alta:** «No començaré tocant totes les peces. Primer segueixo el camí amb el dit: surto de la font, arribo a l’interruptor, passo per la llum i torno a la font. Aquí el camí queda tallat. Predic que la llum estarà apagada. Tanco només l’interruptor i comprovo la predicció.»

**Pràctica guiada:**

1. Identifica font, interruptor i llum a la imatge del kit. Digues la funció de cada peça.
2. Al laboratori virtual deixa la font activada, el retorn complet i l’interruptor obert. Escriu o explica la predicció.
3. Tanca només l’interruptor. Compara l’estat de la llum amb la predicció.
4. Obre només el retorn: la llum s’apaga tot i tenir l’interruptor tancat. Després restaura el retorn.
5. Trasllada la idea al maletí: amb l’alimentació desconnectada prepara el muntatge segons el manual, demana la revisió acordada i prova encès/apagat.

**Proves:**

| Cas | Resultat esperat |
|---|---|
| Font activa + interruptor obert + retorn complet | Apagat: camí interromput. |
| Font activa + interruptor tancat + retorn complet | Encès en el model. |
| Font activa + interruptor tancat + retorn tallat | Apagat: falta retorn. |

**Error a explorar:** «La llum està apagada; segur que la pila s’ha acabat.» No és l’única hipòtesi: comprovem primer comandament i continuïtat. Amb el maletí desconnectat revisem també polaritat i connexions segons el manual.

**Transferència:** Sense copiar el muntatge, dibuixa o munta una llum per a una maqueta d’un aparador del teu barri. Mostra com encendre-la i apagar-la sense desmuntar-la.

**Millora:** Afegeix un rètol amb text i símbol d’encesa: el color sol no ha de ser l’única informació.

**Rutina de pensament: Veig – penso – em pregunto.**

- Veig: quines peces i quins camins observo?
- Penso: què crec que passarà quan tanqui l’interruptor?
- Em pregunto: com comprovaré si falta algun camí?

**DUA:** Modela amb una peça real, un esquema amb noms i una explicació oral breu. Permet assenyalar o descriure el camí, sense exigir lectura ni escriptura llarga. El suport adult per manipular no ha de donar la resposta conceptual.

**Com acostar-ho a l’alumnat:** «Mostra’m on s’ha tallat el camí.» La criatura pot assenyalar, dibuixar o explicar oralment. Una sola frase o gest comentat pot aportar evidència.

**Indicadors de preparació docent:**

- Puc indicar la font sense confondre-la amb la llum.
- Puc predir encès/apagat en dos estats.
- Puc mostrar el tall que explica un estat apagat.

**Instrument complementari:** Conversa de demostració amb tres targetes: «Ho puc mostrar», «Ho estic provant», «Necessito que ho tornem a mirar». No s’avalua la llargada de l’explicació.

**Tiquet de sortida:** Abans pensava que… Ara, després d’obrir i tancar el camí, penso que… Ho puc mostrar fent…

**Comprovació:** En aquest model, què passa si tanques l’interruptor però el retorn continua tallat?

1. La llum s’encén igualment
2. La llum continua apagada
3. L’interruptor es converteix en font

Clau: 2. El camí ha de ser complet també en el retorn. Tancar només l’interruptor no resol aquest tall.

[Obre el repte corresponent de l’alumnat](Circuita.html#repte=p1-light).

### 3r–4t de primària · Un avís visual per demanar torn

**Context:** Club de lectura d’una escola de Badalona. Al club de lectura volem demanar torn amb un avís visual sense interrompre la persona que parla. El disseny ha d’evitar dependre només d’un so.

**Fita:** Distingir un polsador d’un interruptor i relacionar entrada, resposta i retorn a l’estat inicial.

**Material:** Font educativa, polsador i mòdul LED compatibles. El brunzidor és opcional i no necessari per assolir l’objectiu.

**Concepte:** Un polsador momentani canvia d’estat mentre es prem i torna al repòs quan es deixa. Un interruptor manté la posició seleccionada. El polsador no guarda per si sol una petició quan el deixem anar.

**Predicció:** Si premem i després deixem el polsador, la llum continuarà encesa?

**Resultat esperat:** En aquest circuit sense memòria s’encén mentre premem i s’apaga quan deixem el polsador.

**Modelatge en veu alta:** «Vull saber si aquest comandament recorda la petició. Provo prémer i deixar, no només prémer. Observo que la llum s’apaga en deixar-lo. El que he construït respon mentre hi ha pressió; encara no és un sistema que guardi el torn.»

**Pràctica guiada:**

1. Compara l’interruptor i el polsador a la imatge dels mòduls. Identifica com actua cadascun.
2. Prediu què passarà en deixar el polsador en un circuit sense memòria.
3. Al model, activa «polsador premut». Observa la llum i l’etiqueta textual.
4. Desactiva «polsador premut». Explica què es manté i què canvia.
5. Amb el material real desconnectat prepara el muntatge validat. Prova tres vegades prémer/deixar i registra els resultats.

**Proves:**

| Cas | Resultat esperat |
|---|---|
| Polsador en repòs, circuit complet | Llum apagada. |
| Polsador premut, circuit complet | Llum encesa. |
| Deixar el polsador després d’haver-lo premut | Llum apagada: no hi ha memòria. |

**Error a explorar:** «Polsador i interruptor fan exactament el mateix.» Tots dos poden controlar un camí, però el seu estat de repòs i la manera de conservar la posició són diferents. Fes la prova de deixar el comandament.

**Transferència:** Dissenya un avís visual per a la persona que reparteix material a classe. Explica si necessites una acció momentània o un estat que quedi mantingut.

**Millora:** Si cal guardar una petició, identifica que cal memòria o un altre comandament i dissenya també una acció per esborrar-la. No atribueixis aquesta funció al polsador sol.

**Rutina de pensament: Predic – provo – explico.**

- Predic: quan es mantindrà encesa la llum?
- Provo: què passa en prémer i en deixar?
- Explico: quina diferència he trobat entre polsador i interruptor?

**DUA:** Combina el comandament real amb dos fotogrames «premut / repòs» i la descripció textual. Ofereix botons commutables amb teclat al simulador; no exigeix mantenir premuda una tecla ni fer gestos precisos.

**Com acostar-ho a l’alumnat:** «He premut…, he deixat… i he observat…». L’alumnat pot respondre amb una seqüència de dibuixos o una demostració comentada.

**Indicadors de preparació docent:**

- Puc distingir entre prémer i deixar.
- Puc explicar per què aquest circuit no guarda la petició.
- Puc triar un comandament adequat al problema.

**Instrument complementari:** Llista de prova abans/durant/després de prémer i coavaluació «He vist que…; et proposo provar…».

**Tiquet de sortida:** Quina observació t’ha fet canviar o confirmar la idea que tenies del polsador? Quin problema nou voldries resoldre?

**Comprovació:** Quina prova diferencia millor un polsador momentani d’un interruptor mantingut?

1. Mirar només el color
2. Comprovar què passa quan es deixa d’actuar sobre el comandament
3. Canviar la llum de lloc

Clau: 2. La prova de deixar el comandament revela si conserva la posició o torna al repòs.

[Obre el repte corresponent de l’alumnat](Circuita.html#repte=p2-button).

### 5è–6è de primària · Dues zones d’un passeig en maqueta

**Context:** Passeig marítim de Badalona. A la maqueta del passeig marítim volem il·luminar dues zones de manera independent. Si desconnectem una zona per revisar-la, l’altra ha de continuar funcionant en el model.

**Fita:** Comparar sèrie i paral·lel per connectivitat, predir què passa quan s’obre un camí i justificar la tria.

**Material:** Font educativa adequada, dos mòduls llum, comandaments i connexions segons el manual. La construcció física depèn de l’equipament; la maqueta no es connecta a cap instal·lació urbana.

**Concepte:** En sèrie, els receptors comparteixen el camí; obrir-lo afecta tots dos. En paral·lel, cada branca pot mantenir un camí propi fins a la font. Això no implica que la brillantor sigui sempre igual: depèn dels components i de l’alimentació.

**Predicció:** Si obrim la branca A d’un muntatge en paral·lel, què passarà a B si conserva un camí complet i una font adequada?

**Resultat esperat:** B pot continuar encesa perquè manté un camí propi. En el model de sèrie, obrir el camí d’A interromp també B.

**Modelatge en veu alta:** «Totes dues llums enceses no em demostren que siguin independents. Necessito una prova que diferenciï les dues organitzacions. Obro només A i observo B; després faig la prova inversa.»

**Pràctica guiada:**

1. Dibuixa dues zones de la maqueta i el requisit «independents».
2. Tria «sèrie» al model i tanca tots dos comandaments. Obre només A i observa totes dues llums.
3. Tria «paral·lel» i repeteix exactament la mateixa prova.
4. Obre B i mantén A tancada. Registra el resultat invers.
5. Justifica la topologia escollida amb dues proves. Construeix físicament només segons una pauta compatible amb el kit.

**Proves:**

| Cas | Resultat esperat |
|---|---|
| Paral·lel: A oberta, B tancada | A apagada; B encesa. |
| Paral·lel: A tancada, B oberta | A encesa; B apagada. |
| Sèrie: un dels camins obert | Totes dues apagades. |

**Error a explorar:** «Sèrie vol dir una peça al costat de l’altra.» La disposició sobre la taula no determina la topologia. Cal seguir les connexions. També evitem dir que una llum «es menja el corrent».

**Transferència:** Afegeix a la maqueta una zona de lectura i una zona de pas. Dissenya com controlar-les i fes una prova que mostri independència.

**Millora:** Proposa un criteri d’ús responsable: apagar una zona quan no cal. Compara dues solucions i explica amb dades d’estats quina compleix el requisit.

**Rutina de pensament: Compara – contrasta – conclou.**

- Compara: què tenen en comú les dues organitzacions?
- Contrasta: quina prova fa aparèixer la diferència?
- Conclou: quina triaries per a zones independents i per què?

**DUA:** Ofereix fils físics, esquema amb etiquetes A/B, taula d’estats i explicació verbal. La independència s’ha de poder comprovar sense distingir colors. Accepta una taula comentada o una demostració com a evidència.

**Com acostar-ho a l’alumnat:** «He obert A i B ha…; això indica que…». Demana proves inverses, no només la definició de paral·lel.

**Indicadors de preparació docent:**

- Puc seguir un camí complet de cada branca.
- Puc mostrar dues proves que diferencien sèrie i paral·lel.
- Puc justificar la topologia a partir de la necessitat.

**Instrument complementari:** Taula de proves amb predicció/resultat/conclusió i coavaluació d’una justificació basada en dos casos.

**Tiquet de sortida:** Quina prova ha estat decisiva? Què no puc afirmar sobre la brillantor real a partir d’aquest model?

**Comprovació:** Amb dues llums enceses, ja pots assegurar que són independents?

1. Sí, perquè estan enceses
2. No: cal obrir cada branca i observar l’altra
3. Sí, si tenen colors diferents

Clau: 2. L’estat final encès pot aparèixer en diverses topologies. Les proves d’obertura separada aporten evidència d’independència.

[Obre el repte corresponent de l’alumnat](Circuita.html#repte=p3-parallel).

### 1r d’ESO · Una llum que respon a l’entorn

**Context:** Maqueta inspirada en Can Solei i Ca l’Arnús. Volem un model de senyal lluminós que només s’activi quan el sistema estigui habilitat i hi hagi poca llum. El llindar del model és simbòlic, no una mesura calibrada del parc.

**Fita:** Representar entrada–decisió–sortida, interpretar «menor que» i validar una condició AND amb casos límit.

**Material:** Simulador; per traslladar-ho al kit cal un sensor de llum, controlador i actuador compatibles, amb documentació de lectura i connexió. No tots els sensors són intercanviables.

**Concepte:** El sensor proporciona informació. El programa compara l’entrada amb un llindar. L’actuador respon a la decisió. En el model: sortida = habilitat AND (L < 30). El sensor no crea per si sol tota aquesta lògica.

**Predicció:** Amb L = 30 i el sistema habilitat, s’encendrà? I amb L = 0 però el sistema deshabilitat?

**Resultat esperat:** En tots dos casos queda apagada: la igualtat no compleix «menor que» i la deshabilitació impedeix l’encesa encara que sigui fosc.

**Modelatge en veu alta:** «No provaré només una situació de foscor. Llegeixo la regla literalment, trio 29, 30 i 31, i també un cas amb habilitat fals. Si canvio totes les entrades alhora, perdré informació sobre la causa.»

**Pràctica guiada:**

1. Identifica entrada (llum), condició d’habilitació i sortida. Escriu la regla en llenguatge quotidià.
2. Prediu la resposta per a L = 29, 30 i 31 amb habilitat cert.
3. Al model activa habilitació, mou L i registra els tres resultats.
4. Deshabilita amb L = 0. Comprova que la sortida queda apagada.
5. Escriu el pseudocodi si/altrament i contrasta la seva implementació amb els mateixos casos.

**Proves:**

| Cas | Resultat esperat |
|---|---|
| Habilitat cert; L = 29 | Encès. |
| Habilitat cert; L = 30 i 31 | Apagat en tots dos casos. |
| Habilitat fals; L = 0 | Apagat: l’habilitació té efecte. |

**Error a explorar:** «L = 30 és pràcticament foscor, així que ha d’encendre.» El programa executa un operador concret; «<» i «≤» no són equivalents. També és un error anomenar lux una escala sense calibratge.

**Transferència:** Dissenya una regla equivalent per a una maqueta d’un aparador de barri amb un interruptor general. Tria un altre llindar i torna a generar els casos de límit.

**Millora:** Afegeix un registre d’estats i justifica un llindar propi. Si les mesures fluctuen, anticipa per què podria caldre una banda d’histèresi.

**Rutina de pensament: Afirmació – evidència – pregunta.**

- Afirmació: quan ha de respondre el sistema?
- Evidència: quins casos confirmen o refuten la regla?
- Pregunta: quina limitació del model falta comprovar amb un sensor real?

**DUA:** Mostra la mateixa regla com a frase, diagrama de flux, pseudocodi i taula. Permet resposta oral amb una taula assenyalada. Defineix el símbol < explícitament i mantén visibles les dues condicions.

**Com acostar-ho a l’alumnat:** «El cas 30 refuta/confirma… perquè l’operador…». Avalua la interpretació de les regles, no la memòria del nom del bloc.

**Indicadors de preparació docent:**

- Puc distingir sensor, decisió i actuador.
- Puc provar la igualtat i els valors adjacents.
- Puc validar l’habilitació amb un contraexemple.

**Instrument complementari:** Informe breu de validació amb casos normals, límit i deshabilitació; conversa docent sobre un contraexemple.

**Tiquet de sortida:** Quin cas m’ha obligat a precisar la regla? Quina dada real necessitaria abans de traslladar el model al parc?

**Comprovació:** Quin conjunt de proves és més informatiu per validar L < 30 i habilitació?

1. Només L = 10 amb habilitació
2. L = 29, 30 i 31 habilitat; L = 0 deshabilitat
3. Tres vegades L = 0 habilitat

Clau: 2. Els valors al voltant del límit comproven l’operador, i la prova deshabilitada comprova la segona condició.

[Obre el repte corresponent de l’alumnat](Circuita.html#repte=e1-sensor).

### 2n d’ESO · Un avís amb aturada prioritària

**Context:** Maqueta del litoral i del Pont del Petroli. Construïm una maqueta educativa d’un avís intermitent amb aturada prioritària. No és un sistema real de seguretat, ni descriu cap instal·lació o estat d’accés actual del Pont del Petroli.

**Fita:** Distingir seqüència temporal i condició, comprovar una prioritat durant l’execució i explicar com l’estat anterior intervé en una histèresi.

**Material:** Simulador; eventualment controlador, entrada d’aturada i LED compatibles. La parada del model és una lògica educativa i no una funció de seguretat certificada.

**Concepte:** Una seqüència canvia les sortides amb el temps. La prioritat d’aturada s’ha de revisar mentre la seqüència s’executa. Una histèresi conserva l’estat entre dos llindars; no és simplement «esperar una mica».

**Predicció:** Si s’activa l’aturada mentre el LED està encès, què ha de passar? Si L puja de 20 a 35 amb histèresi 30/40, s’apaga?

**Resultat esperat:** L’aturada ha de forçar l’apagat i impedir la seqüència. A 35, amb estat previ encès i sense aturada, l’histèresi manté l’encesa.

**Modelatge en veu alta:** «Veure parpellejar el LED no demostra que l’aturada tingui prioritat. L’activo en plena execució, comprovo que la sortida es força a zero i verifico que no torna a activar-se mentre mantinc l’ordre. Després preciso què passa quan la retiro.»

**Pràctica guiada:**

1. Representa l’estat aturat i l’estat en marxa, amb la regla de prioritat.
2. Inicia l’animació, pausa i avança un pas. Compara els estats de la sortida.
3. Reprèn i activa aturada mentre la seqüència funciona. Comprova l’apagat immediat al model.
4. Mantén aturada activa i avança més passos: la sortida ha de continuar apagada.
5. Retira aturada. En aquest model, la seqüència queda pausada fins a prémer Reprodueix. Després prova la histèresi amb la seqüència d’entrades 20 → 35 → 45 → 35.

**Proves:**

| Cas | Resultat esperat |
|---|---|
| En marxa, sense aturada | Alternança encès/apagat controlada. |
| Aturada activa en qualsevol pas | Sortida apagada i execució pausada. |
| Histèresi: 20 → 35 → 45 → 35, estat inicial apagat | Encès → encès → apagat → apagat. |

**Error a explorar:** «Una espera llarga al programa és igual que una aturada prioritària.» Una espera bloquejant pot retardar la lectura d’entrades. Cal escollir una estratègia que revisi la prioritat durant el procés; l’animació abstracta no prova el temps de resposta del maquinari.

**Transferència:** Dissenya un avís de maqueta per a una activitat escolar al passeig: seqüència clara, cancel·lació i canals accessibles. Defineix els casos de prova abans d’implementar.

**Millora:** Redueix commutacions d’una entrada fluctuant amb dos llindars i memòria d’estat. Explica les condicions exactes de canvi i la política de reinici.

**Rutina de pensament: Què passa si…? – Prova de contraexemples.**

- Què passa si arriba l’aturada durant una espera?
- Quina prova faria fallar una solució que només comprova l’aturada al principi?
- Què puc concloure i què encara no he validat físicament?

**DUA:** Combina línia temporal, diagrama d’estats, taula i execució pas a pas. El moviment es pot aturar; l’estat sempre apareix en text. Les proves no exigeixen rapidesa motriu ni resposta cronometrada.

**Com acostar-ho a l’alumnat:** «Aquest cas mostra que la prioritat…; el límit de la nostra prova és…». Demana una traça i un contraexemple, no només un vídeo del resultat.

**Indicadors de preparació docent:**

- Puc activar una aturada en qualsevol fase i observar-ne l’efecte.
- Puc definir com es reprèn el model.
- Puc explicar per què L = 35 pot correspondre a dos estats en histèresi.

**Instrument complementari:** Traça temporal amb proves de prioritat i registre de depuració hipòtesi/prova/resultat/canvi; coavaluació de la cobertura de casos.

**Tiquet de sortida:** Quina prova ha revelat una fallada o un límit? Què canviaria al programa i com verificaria la millora?

**Comprovació:** Amb histèresi: encendre si L < 30, apagar si L > 40, conservar en la resta. L = 35 vol dir…

1. Sempre encès
2. Sempre apagat
3. Depèn de l’estat anterior

Clau: 3. Entre els dos llindars no hi ha ordre de canvi. El model manté l’estat anterior; per això cal descriure també l’estat inicial.

[Obre el repte corresponent de l’alumnat](Circuita.html#repte=e2-sequence).

## Rúbrica del modelatge docent

| Criteri | 1 · Inicial | 2 · En procés | 3 · Preparat | 4 · Transferència |
|---|---|---|---|---|
| Comprensió | Confón funcions | Explica parcialment amb ajuda conceptual | Explica causa i resultat per a l’edat | Justifica un cas nou i un límit |
| Proves | Fa canvis sense control | Segueix proves suggerides | Contrasta predicció i casos incloent un error | Proposa contraexemples |
| Modelatge i DUA | Mostra només resultat | Narra passos però falten opcions | Explicita decisió, prova i revisió amb vies equivalents | Ajusta barreres i retira ajuda conceptual |
| Preparació segura | No ha contrastat material | Identifica pautes incompletes | Contrasta manual i revisa abans d’alimentar | Anticipa anomalies i alternatives |
| Avaluació | Confón resultat amb comprensió | Evidència poc concloent | Preveu evidència individual i reflexió | Usa evidència per ajustar l’ensenyament |

No es calcula una mitjana automàtica. Els suports d’accés no redueixen el nivell. Una preparació insegura no es compensa amb altres criteris.

## Seqüència de classe

1. Fita en una frase i context proper.
2. Predicció privada.
3. Modelatge docent d’una decisió i una prova.
4. Pràctica guiada amb alternatives d’accés.
5. Transferència amb menys ajuda conceptual.
6. Evidència individual amb format flexible.
7. Tiquet de sortida i ajust de la sessió següent.

## Fonts i abast

- [Cirkids · Academia de Inventores](https://academiadeinventores.com/cirkids/). Kit i imatges.
- [CAST · Pautes DUA 3.0](https://udlguidelines.cast.org/). Marc d’accessibilitat i disseny de l’aprenentatge.
- [Ajuntament de Badalona · Can Solei i Ca l’Arnús](https://www.badalona.cat/ca/serveis-ajuntament/turisme/que-fer-i-que-veure/els-imprescindibles/el-parc-de-can-solei-de-ca-larnus) i [Pont del Petroli](https://www.badalona.cat/ca/serveis-ajuntament/turisme/que-fer-i-que-veure/els-imprescindibles/el-pont-del-petroli). Referents de context.

Textos i simulacions originals. Activitats de maqueta fictícies, sense relació amb instal·lacions de servei reals. No s’han verificat les làmines descarregables ni el maletí físic. El model és qualitatiu, no calcula el comportament elèctric real. L’animació no valida la seguretat ni el temps de resposta d’un sistema físic.


## Pas al muntatge físic

La nova versió incorpora `Dossier-muntatge.html` i `Dossier-muntatge.md`, amb deu muntatges de referència vinculats als quinze reptes, connexions numerades, programa corresponent, calibratge i registre de prova docent. S’han consultat les làmines originals Cirkids (la primera usa 100 Ω en sèrie amb el LED) i l’activitat tècnica d’Academia de Inventores dins de STEAMbrace (PDF, pàgines 187–190). Les adaptacions, el valor de treball 10 kΩ del sensor, els programes i el rearme són propostes pròpies. No hi ha prova física del vostre material.

La carpeta `programes/` conté set sketches independents amb guions equivalents al dossier. Els fitxers de sensor s’entreguen amb calibratge pendent i LED apagat; el calibrador genera una versió amb les dades mesurades. No s’entreguen fitxers nadius Hello, Blocks! perquè no se n’ha verificat un format d’intercanvi: els guions es reconstrueixen a l’editor, o s’usa la via Arduino IDE amb els INO.

`Organitzacio-aula.md` completa els cinc itineraris amb vuit sessions orientatives cadascun, quatre rols, plantilles de proves, calibratge, traça i histèresi, i rúbriques físiques per edat.


---

Aplicació creada per [CRP Badalona](https://serveiseducatius.xtec.cat/badalona) amb assistència de la IA.

Obra sota llicència [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/deed.ca).

La llicència s’aplica a les aportacions pròpies de Circuita. Les imatges Cirkids, les fonts documentals i els altres materials de tercers conserven les atribucions i els drets indicats a les fonts; no se’ls atribueix aquesta llicència.
