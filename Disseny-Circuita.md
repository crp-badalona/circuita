# Circuita · Laboratori d’electrònica inclusiu

Proposta de disseny pedagògic i funcional en català per a primària i 1r–2n d’ESO. Inclou un prototip local a `Circuita.html`. El nom Circuita és provisional; no és un producte oficial de Cirkids.

## 1. Punt de partida i abast

La pàgina pública de [Cirkids, d’Academia de Inventores](https://academiadeinventores.com/cirkids/) presenta un kit modular, amb identificació per colors, nom i símbol dels components, utilitzable sense ordinador i amb un microcontrolador compatible amb Arduino Uno i Hello, Blocks! També hi anuncia projectes com una casa intel·ligent i sistemes d’emergència. Consulta: 26 d’octubre de 2026.

L’app proposada acompanya el maletí: comprendre → predir → simular → muntar → comprovar → explicar → millorar. Els textos, problemes, rúbriques i simulacions d’aquest document són de nova creació. El prototip incorpora imatges originals del maletí, del catàleg de mòduls i de tres projectes de la pàgina pública de Cirkids, amb atribució i descripcions en català. No s’han pogut consultar les làmines descarregables; no es pressuposa el seu contingut, la coincidència del catàleg visual amb el maletí concret del centre, ni les especificacions de connectors, pins, tensions o sensors. Abans de produir les activitats físiques cal contrastar-ho amb el manual i el maletí disponibles. Les activitats amb sensors només s’habiliten quan el docent confirma que disposa del mòdul corresponent.

Aquest document especifica l’app completa. El prototip implementa una mostra funcional de teoria, simulació qualitativa, qüestionaris, rúbrica i diana. No connecta amb el maletí, no incorpora tot el banc proposat i no té servidor ni comptes d’usuari.

## 2. Objectius d’aprenentatge

1. Reconèixer alimentació, conductors, comandaments, sensors i actuadors, amb objectes, noms i símbols.
2. Explicar que un circuit necessita un camí conductor tancat i una font adequada; distingir energia, senyal i control amb un llenguatge progressiu.
3. Predir, construir i interpretar circuits senzills i detectar errors de manera sistemàtica.
4. Distingir sèrie i paral·lel quan correspon al nivell, identificant què passa si s’obre una branca.
5. Dissenyar sistemes entrada–procés–sortida i programar decisions i seqüències simples quan hi hagi equipament compatible.
6. Fer proves, registrar evidències i justificar millores amb criteris d’utilitat, accessibilitat i ús responsable de l’energia.
7. Explicar el propi procés i cooperar en rols rotatius, sense confondre facilitat lectora o motriu amb coneixement d’electrònica.

Vinculació curricular orientativa: indagació científica, pensament computacional, resolució de problemes, comunicació i competència digital. El centre ha de concretar els criteris curriculars de la seva programació; no es presenta una correspondència normativa validada.

## 3. Públics, itineraris i dificultats

Les franges són punts d’entrada, no etiquetes fixes. El docent i l’alumne poden canviar l’itinerari. El diagnòstic recomana; no bloqueja continguts ni decideix automàticament la ubicació de l’alumne.

| Itinerari | Referència | Contingut central | Evidència final |
|---|---|---|---|
| Espurnes | 1r–2n de primària | Font, receptor, cable i interruptor; encès/apagat; observació | Fer funcionar una llum i mostrar què passa quan s’obre el camí |
| Connecta | 3r–4t de primària | Símbols, conductors i aïllants, diagnòstic d’un error | Muntar i explicar un senyal lluminós amb una prova |
| Inventa | 5è–6è de primària | Sèrie/paral·lel qualitatiu, entrada/sortida, condició simple | Dissenyar una resposta a una necessitat i provar dos casos |
| Investiga | 1r d’ESO | Esquemes, models, variables, lògica i mesures quan el material ho permet | Justificar un circuit i contrastar una predicció amb dades |
| Automatitza | 2n d’ESO | Llindars, operadors lògics, seqüències, depuració i transferència | Automatització amb proves de límit, excepcions i millora |

**Tres reptes per a cada itinerari:**

- **Explora:** objectiu explícit, muntatge parcial, una variable, exemple resolt i pistes disponibles.
- **Aplica:** context nou, menys passos pautats, dues o més decisions i justificació de la solució.
- **Investiga:** problema obert amb restriccions, comparació de solucions i proves escollides per l’alumne.

La dificultat augmenta per abstracció, nombre de variables i qualitat de la justificació, no per velocitat ni quantitat de lectura. Els suports DUA continuen disponibles en els tres reptes. Un repte Explora de 2n d’ESO conserva objectius de secundària.

## 4. Arquitectura de l’app

**Pantalla d’entrada:** tria d’itinerari, context del repte i preferències d’accés. No cal declarar cap diagnòstic. Botons «Continua», «Vull explorar» i «Necessito una pista».

**Mapa de missions:** objectiu en una frase, durada orientativa, material necessari, coneixements previs i evidència esperada. Estats: per descobrir, en pràctica, evidència recollida i revisada. Cap classificació pública.

**Dins de cada missió:**

1. **Descobreix:** microexplicació visual, text curt, vocabulari i exemple quotidià.
2. **Prediu:** què creus que passarà? Resposta sense penalització, recuperada després de la prova.
3. **Simula:** controls de teclat i botons; descripció textual de l’estat del circuit.
4. **Construeix:** inventari del material, passos de seguretat i transferència al maletí.
5. **Comprova:** casos de prova i activitats autocorregibles.
6. **Explica i millora:** evidència en format escollit, diana i proper pas.

**Espai docent:** activar materials disponibles, assignar missions, ajustar suports, revisar proves i aplicar rúbriques. Vista per objectiu i errors conceptuals; possibilitat d’exportar i eliminar registres. Les puntuacions automàtiques es mostren com a evidències parcials, no com a qualificacions finals.

## 5. Teoria amb exemples visuals i pràctics

Cada càpsula conté una idea, una imatge o esquema amb alternativa textual, una manipulació breu, una pregunta de predicció i un error freqüent comentat.

| Càpsula | Exemple visual i manipulatiu | Pregunta i retorn |
|---|---|---|
| El camí tancat | Font → interruptor → llum → retorn a la font. Obrir i tancar el comandament | «Amb un tall, s’encén?» No: falta continuïtat en el camí |
| Cada peça té una funció | Targetes objecte–nom–símbol; font aporta energia, interruptor controla, llum transforma energia | «La llum és la font?» No: és un receptor |
| Conductors i aïllants | Comparar una peça metàl·lica i una peça de plàstic amb un muntatge educatiu autoritzat | «Tots els objectes durs condueixen?» La propietat depèn del material, no de la duresa |
| Sèrie i paral·lel | Dos camins dibuixats; obrir una llum i observar la resta | En sèrie s’interromp el camí comú; en paral·lel pot continuar una altra branca completa |
| Entrada i sortida | Sensor → decisió → llum. Ex.: llum ambiental baixa, ordre d’encendre | Un sensor informa; un actuador produeix una acció |
| Decisions i seqüències | Diagrama «si… aleshores… altrament» i línia temporal | Diferenciar condició, repetició i espera |
| Mesura i model, ESO | En un resistor ideal: V = I·R; 3 V / 1.000 Ω = 0,003 A = 3 mA | Canviar una variable i mantenir l’altra constant. Aquest model no descriu directament un LED ni tots els mòduls |

**Exemple de text per a 1r–2n de primària:** «La font dona energia. Els cables fan un camí. Si el camí queda tancat, la llum pot encendre’s. Si obrim l’interruptor, el camí es talla.» Un muntatge mal connectat o un component inadequat també poden impedir l’encesa: camí tancat no vol dir funcionament garantit.

**Ampliació ESO:** el corrent no es consumeix en travessar la llum; l’energia es transforma. En els cables metàl·lics, el moviment dels electrons té sentit contrari al corrent convencional. Les fletxes didàctiques s’etiqueten «sentit convencional» i la seva animació no representa una velocitat real.

## 6. Banc inicial de missions: 45 variants

Proposta de 15 missions, cadascuna amb tres reptes. Els noms següents són propis; les connexions temàtiques amb els projectes anunciats per Cirkids s’utilitzen com a inspiració, sense reproduir-ne làmines.

| Itinerari i missió | Explora | Aplica | Investiga | Comprovació automàtica prevista |
|---|---|---|---|---|
| Espurnes · Una llum per llegir | Tancar un circuit preparat | Triar la peça que falta | Fer dos controls d’encesa en contextos diferents | Circuit alimentat, camí complet i estat encès/apagat coherent |
| Espurnes · Detectius de peces | Relacionar 3 peces i funcions | Associar peça i símbol | Identificar una peça incorrecta en un esquema | Correspondències, amb noms i símbols com a alternatives al color |
| Espurnes · El camí interromput | Trobar un tall destacat | Trobar un tall sense marca | Comparar dues avaries simples | Identificació del tall i recuperació del funcionament |
| Connecta · Missatge lluminós | Encendre amb un comandament | Fer un patró manual de 3 passos | Dissenyar un codi amb llegenda accessible | Seqüència d’estats comparada amb el patró escollit |
| Connecta · Què deixa passar? | Classificar exemples proporcionats | Predir 4 materials i comprovar | Explicar una predicció revisada | Classificació dels casos del simulador; registre real revisat pel docent |
| Connecta · Taller de reparació | Corregir una connexió | Diagnosticar sense esquema final | Triar la prova que descarta dues hipòtesis | Avaria resolta i selecció d’una prova rellevant |
| Inventa · Dues llums | Completar sèrie | Comparar sèrie i paral·lel | Dissenyar perquè una branca segueixi encesa | Casos d’obertura de cada branca |
| Inventa · Racó confortable | Identificar entrada i sortida | Ajustar un llindar simbòlic | Evitar una resposta inadequada en un cas límit | Proves per sota, al llindar i per sobre |
| Inventa · Senyal per compartir | Completar una taula encès/apagat | Dissenyar un avís amb dos canals | Justificar una alternativa sense so | Compliment dels estats; accessibilitat justificada amb revisió humana |
| Investiga · Esquemes que expliquen | Passar de muntatge a esquema | Comparar dues topologies | Justificar quin esquema compleix tres restriccions | Connectivitat i proves funcionals, sense exigir una sola disposició |
| Investiga · Taller de mesures | Calcular I amb V i R donats | Dissenyar una taula de mesures ideal | Contrastar proporcionalitat i límits del model | Unitats i tolerància numèrica especificades |
| Investiga · Doble condició | Completar una condició AND | Comparar AND i OR | Triar la lògica d’una alarma amb desactivació | Taula exhaustiva dels estats booleans |
| Automatitza · Casa que respon | Una entrada i una sortida | Combinar dues entrades i prioritat | Evitar oscil·lació amb dos llindars si el sistema ho permet | Casos límit i seqüències d’entrades |
| Automatitza · Seqüència d’avís | Ordenar encendre–esperar–apagar | Repetir un patró i aturar-lo | Fer que una entrada d’aturada tingui prioritat | Traça temporal amb tolerància indicada en l’enunciat |
| Automatitza · Repte de servei | Completar una solució pautada | Dissenyar amb 3 requisits | Comparar dues solucions i argumentar una millora | Proves funcionals automàtiques i rúbrica docent del projecte |

Per a activitats condicionades a sensors, so o programació es proporciona una alternativa amb interruptors o dades d’entrada simulades. Les simulacions no certifiquen compatibilitat amb el maquinari.

## 7. Simulacions: comportament i límits

**A. Circuit bàsic:** activar font, tancar interruptor i completar retorn. La llum només s’encén si totes tres condicions es compleixen. Una connexió directa entre terminals de la font, quan el constructor complet ho permeti, s’identifica com a curtcircuit i bloqueja l’alimentació virtual. No es proposa reproduir-ho físicament.

**B. Sèrie/paral·lel:** dues càrregues ideals i dos interruptors de branca. Es calcula connectivitat; els enunciats no dedueixen brillantor real d’un mòdul Cirkids. La brillantor depèn del circuit i dels components.

**C. Sensor i decisió:** llum ambiental simbòlica 0–100, llindar editable i operador explícit. Regla model: si L < T, encén; altrament, apaga. Sense unitats físiques ni calibratge no s’anomena lux. En ampliació: encendre per sota de 30 i apagar per sobre de 40; entre aquests valors conservar l’estat anterior.

**D. Seqüències:** blocs representats també com a llista ordenada editable amb botons «Puja/Baixa». Execució pas a pas, pausa i reinici. El simulador mostra bloc actiu, estat de les sortides i traça textual.

**E. Resistor ideal, ESO:** I = V/R amb R > 0; valors i unitats visibles, conversió A–mA i representació de dades. R = 0 no es divideix: es mostra una situació fora d’aquest model. Aquest laboratori és virtual i no dona instruccions de connexió del maletí.

El prototip adjunt implementa A com a panell de condicions i un exemple de C. No implementa un editor lliure de cables, ni B, D o E.

## 8. Activitats autocorregibles i retorn

**Regla comuna:** primer resposta o predicció; després prova; finalment explicació. Retorn en tres capes: resultat observat → causa concreta → propera acció. Reintents sense límit, sense compte enrere i sense restar punts per usar suports.

| Activitat | Resposta vàlida | Retorn d’un error |
|---|---|---|
| Primària inicial: «Quina peça dona energia?» | La font | «L’interruptor controla el camí. Busca la peça que aporta energia.» |
| Primària mitjana: «La llum no s’encén: font activa, interruptor tancat, retorn tallat» | Completar el retorn | «L’energia està disponible, però el camí no és complet. Revisa el cable de tornada.» |
| Primària superior: «En paral·lel obrim només la branca A» | B continua si conserva un camí complet i alimentat | «Les branques tenen camins propis. Segueix el camí de B fins a la font.» |
| 1r ESO: «3 V i 1.000 Ω; corrent en mA?» | 3 mA; tolerància ±0,05 mA | «Calcula V/R en amperes i multiplica per 1.000 per obtenir mA.» |
| 2n ESO: «Encendre si L < 30; què passa a L = 30?» | Apagat | «< no inclou la igualtat. Comprova també 29 i 31.» |

Pistes graduades: 1) assenyalar el concepte; 2) proposar una prova; 3) mostrar un exemple anàleg. La solució comentada es pot consultar; després es demana un cas equivalent nou. El sistema diferencia «resolt després de veure la solució» de «transferència demostrada», sense castigar els suports d’accés.

**Motor de correcció previst:**

- Respostes tancades: claus i explicacions per distractor.
- Circuits: graf de connexions, components i simulació dels casos requerits. S’accepten muntatges funcionalment equivalents, amb els requisits de seguretat i materials del repte.
- Lògica: taules de veritat, casos de límit i seqüències; no només una captura final.
- Nombres: unitats explícites, coma o punt decimal i tolerància publicada.
- Explicacions, fotografies i muntatges reals: pauta d’autoobservació i revisió humana. Una foto o un «m’ha funcionat» no valida per si sol seguretat ni comprensió.

**Adaptació suggerida:** després de tres comprovacions equivalents resoltes i una explicació del perquè, oferir Aplica; si es repeteix un mateix error, oferir una càpsula i un exemple. El docent pot modificar la recomanació. No s’assignen itineraris per rapidesa, discapacitat o nombre de pistes.

## 9. DUA incorporat al disseny

La proposta s’organitza amb els tres principis de les [Pautes DUA de CAST, versió 3.0](https://udlguidelines.cast.org/): implicació, representació, i acció i expressió. Les concrecions següents són decisions pròpies de disseny.

| Barrera prevista | Opcions disponibles per a tothom | Com es comprova |
|---|---|---|
| Text dens o vocabulari nou | Text breu, lectura ampliada, glossari visual, lectura en veu amb alternativa escrita | Mateix objectiu i dades en tots els formats |
| Dependència del color | Nom, símbol i etiqueta d’estat al costat de cada color | La tasca es pot fer en escala de grisos |
| Arrossegar o precisió motriu | Seleccionar peça i connexió amb botons; navegació amb teclat | Totes les funcions sense ratolí |
| Informació només sonora o animada | Subtítols, transcripció, estat textual i opció de pausar moviment | Cap pista essencial depèn del so o del moviment |
| Sobrecàrrega i planificació | Una instrucció per pas, checklist, exemple, pausa i retorn a la tasca | L’alumne pot identificar què fa ara i què li falta |
| Por d’equivocar-se | Predicció privada, retorn concret, reintents i elecció de context | Cap rànquing ni penalització per temps |
| Expressió escrita com a barrera | Explicació oral, text, esquema comentat o demostració accessible | La rúbrica valora la mateixa comprensió en tots els formats |
| Participació desigual al grup | Rols de planificació, muntatge, prova i comunicació, amb rotació flexible | Evidència individual breu a més del producte compartit |

Les opcions no s’assignen segons «estils d’aprenentatge» ni requereixen etiquetes diagnòstiques. Augmentar lletra o escoltar un text no redueix l’exigència conceptual. Si l’objectiu és interpretar un esquema, una resposta oral ha de demostrar aquesta interpretació; no pot substituir-la per una activitat diferent.

Objectiu d’accessibilitat de producció: WCAG 2.2 AA, contrast verificat, focus visible, estructura semàntica, ampliació, absència de trampes de teclat i proves amb tecnologies d’assistència. El prototip incorpora algunes d’aquestes opcions; no se’n declara una conformitat auditada.

## 10. Avaluació: instruments preparats per utilitzar

### A. Diagnòstic inicial, sense nota

Durada orientativa: 5–10 minuts, adaptable.

1. Identifica la font entre font, llum i interruptor. Clau: font.
2. Prediu si una llum s’encendrà amb l’interruptor obert. Clau: no, camí interromput.
3. Assenyala en un dibuix què cal revisar si falta retorn. Clau: continuïtat del retorn.
4. Primària superior/ESO: prediu què passa a una branca independent quan s’obre l’altra. Clau: pot continuar alimentada.
5. ESO: interpreta «si entrada activa i sistema habilitat, encén». Clau: calen totes dues condicions.

Registre: concepte observat / encara no observat / no s’ha pogut obtenir evidència / suport que facilita l’accés. Una absència d’evidència no s’equipara automàticament a desconeixement.

### B. Rúbrica de tasca i projecte

Aplicació: coneixement del criteri abans de començar, observació durant les proves i conversa final. Els suports d’accés estan permesos a tots els nivells. «Ajuda conceptual» significa que una altra persona aporta la resposta o el raonament que s’està avaluant.

| Criteri | 1 · Inicial | 2 · En procés | 3 · Assolit | 4 · Transferència |
|---|---|---|---|---|
| Comprensió del circuit | Identifica peces però encara no explica la relació entre camí i resultat | Explica una part de la relació amb ajuda conceptual | Explica el resultat a partir del camí i la funció de les peces | Prediu i justifica un cas nou o una excepció rellevant |
| Disseny i funcionament | El muntatge encara no compleix la funció i falta un pla de revisió | Compleix part dels requisits després d’indicacions conceptuals | Compleix els requisits acordats i representa les connexions | Compara dues solucions viables i justifica la tria |
| Proves i depuració | Canvia peces sense relacionar canvi i resultat | Fa una prova útil amb orientació conceptual | Prediu, prova i corregeix documentant causa i efecte | Escull proves que discriminen hipòtesis i comprova límits |
| Ús segur i responsable | Encara omet passos essencials; cal aturar i acompanyar | Aplica la pauta després de recordatoris | Comprova les condicions abans d’alimentar i atura davant d’una anomalia | Anticipa riscos concrets i proposa prevencions pertinents |
| Comunicació amb evidències | Mostra el resultat sense explicar què el sustenta | Descriu passos però aporta evidència incompleta | Explica què ha fet, aporta una prova i justifica una conclusió | Relaciona evidències, límits i una millora argumentada |

**Ajust d’exigència per itinerari:**

| Itinerari | Exemple d’«Assolit» en proves i depuració |
|---|---|
| Espurnes | Mostra el canvi en obrir i tancar i indica on queda el tall |
| Connecta | Localitza un error i mostra el funcionament abans/després |
| Inventa | Contrasta dos casos i explica una diferència entre camins |
| Investiga | Controla una variable, registra resultats i explica la causa probable |
| Automatitza | Prova casos normals, de límit i d’aturada i revisa el programa |

No es calcula una nota aritmètica per defecte. Es conserva el perfil de criteris i s’acorda el proper pas. Una pràctica insegura obliga a intervenir i repetir amb acompanyament; una bona mitjana no compensa aquesta situació.

### C. Diana d’autoavaluació i coavaluació

Cinc eixos, valorats de l’1 al 4: «Entenc el circuit», «Puc predir», «Comprovo i corregeixo», «Treballo amb seguretat», «Explico amb evidències».

Ancoratges: 1 = encara no ho puc mostrar; 2 = ho mostro parcialment amb ajuda conceptual; 3 = ho mostro en el repte actual; 4 = ho aplico i justifico en un cas nou. Els suports d’accés no redueixen el nivell.

Abans del repte: marcar previsió i una fita. Després: marcar evidència actual i respondre «Quina prova em fa posar aquest nivell?» i «Quin serà el meu següent pas?». A primària inicial es poden fer servir quatre anells amb frases llegides i una conversa breu. El gràfic sempre té una taula equivalent.

La coavaluació necessita un exemple observat, una fortalesa i una proposta concreta: «He vist que…», «Això ajuda perquè…», «Provaria…». No es puntuen persones ni es publica la diana del company. No s’utilitza com a nota automàtica.

### D. Llista de comprovació del muntatge

Respostes: sí / encara no / no aplicable, amb comentari.

- He identificat els components i he comprovat que són adequats per al repte.
- He seguit la pauta del fabricant i la consigna docent d’alimentació.
- He preparat el muntatge amb l’alimentació desconnectada.
- He revisat connexions, polaritat si escau i absència de connexions directes entre terminals de la font.
- He fet una predicció abans d’alimentar.
- He provat els estats requerits i registrat què passa.
- He desconnectat abans de modificar i he aturat la prova davant d’una anomalia.

La confirmació de l’alumne és una autoobservació; la supervisió real correspon al docent. S’utilitzen exclusivament les alimentacions educatives autoritzades pel fabricant, mai la xarxa domèstica.

### E. Tiquet de sortida

1. Una idea: «Avui he entès que…»
2. Una prova: «Ho sé perquè, quan he canviat…, ha passat…»
3. Una pregunta: «Encara em pregunto…»

Versió amb poca escriptura: triar entre dos esquemes, assenyalar el canvi i explicar-lo oralment. Lectura docent: error conceptual / explicació correcta sense evidència / explicació amb evidència. S’utilitza per preparar la propera sessió.

### F. Portafolis i registre docent

Portafolis mínim per missió: predicció, esquema o foto comentada, dos resultats de prova, explicació final i millora. S’accepta un enregistrament oral equivalent si el centre el pot gestionar.

Registre docent: alumne o àlies, objectiu, tasca, data, evidència, descriptor de rúbrica, suport d’accés, ajuda conceptual, retorn i propera revisió. Avaluació individual al final d’una tasca de grup: «Si canviem això, què passarà i per què?».

## 11. Exemple complet de sessió: llum per al racó de lectura

**Necessitat:** il·luminar una maqueta de racó de lectura quan ho decidim. A nivells superiors, usar una entrada que representi foscor. No és una instal·lació real d’il·luminació.

**Durada orientativa:** una o dues sessions de 45–60 minuts; es pot fragmentar.

1. 5 min: observar el problema, triar una fita i predir.
2. 8 min: càpsula de circuit tancat o entrada–sortida segons l’itinerari.
3. 10 min: simulació i tres casos de prova.
4. 15–20 min: muntatge amb material confirmat pel docent; alternativa equivalent en simulador si no hi ha kit.
5. 10 min: demostració, explicació individual, rúbrica i diana.

| Itinerari | Repte | Casos d’èxit |
|---|---|---|
| Espurnes | Fer encendre i apagar la llum | Font activada + interruptor tancat + camí complet = encès; interruptor obert = apagat |
| Connecta | Diagnosticar un retorn tallat | Identificar el tall, reparar amb alimentació desconnectada i repetir la prova |
| Inventa | Fer que dues zones tinguin camins independents, al simulador o si el kit ho permet | Obrir cada branca per separat i observar l’altra |
| Investiga | Simular la decisió L < 30 | L = 29 encès; L = 30 apagat; L = 31 apagat; justificar l’operador |
| Automatitza | Afegir una entrada «habilitat» | Encès només si habilitat i L < 30; provar habilitat fals amb L = 0 |

Retorn model: «Amb L = 30 la teva sortida continua encesa. La regla diu menor que 30, sense igualtat. Revisa l’operador i repeteix 29, 30 i 31.»

Evidència de comprensió: explicar per què una sortida canvia quan només varia una condició. Evidència de muntatge: demostració supervisada. S’avaluen separadament; encertar el qüestionari no demostra haver construït el circuit físic.

## 12. Disseny tècnic de producció

- Interfície web adaptable a tauleta, ordinador i pantalla d’aula; català de base i textos externalitzats per a traducció.
- Motor determinista de circuits educatius i casos de prova; no és necessari un model generatiu per corregir respostes tancades.
- Catàleg de components verificat amb versió del maletí: identificador, nom, símbol, funció, connexions, límits i font documental. Cap equivalència automàtica entre peces amb un color semblant.
- Model de missió: itinerari, objectiu, prerequisits, dificultat, components, teoria, alternatives d’accés, entrada esperada, validador, casos, retorns i criteris d’avaluació.
- Model d’evidència: missió i versió, àlies, resposta, resultat per objectiu, data, ajuda conceptual, suport d’accés i revisió docent. No s’emmagatzemen inferències sobre discapacitat.
- Arquitectura possible: contingut versionat en JSON, interfície web, motor de simulació independent i backend opcional per al centre. Exportacions interoperables a definir amb la plataforma del centre.
- Primera versió local sense registre; versió de centre amb autenticació i permisos separats d’alumnat i professorat. Abans de desplegar amb menors, el centre concreta la gestió de dades, accés, conservació i supressió. No es demanen imatges ni veu si no són necessàries.
- Funcionament sense connexió com a requisit de producció: recursos descarregables i sincronització explícita. El prototip és un sol HTML autònom; les fonts externes només es consulten si s’obren els enllaços.

## 13. Criteris d’acceptació i desenvolupament

**Fase 1 — verificar materials:** inventari real, documentació, compatibilitats i revisió de tots els muntatges amb una persona docent coneixedora del kit. Referenciar els materials originals i acordar qualsevol reutilització de làmines o imatges.

**Fase 2 — producte mínim:** cinc itineraris amb una missió de tres dificultats cadascun, teoria accessible, simulador bàsic, autocorrecció, rúbrica, diana i exportació. El prototip adjunt és una demostració parcial d’aquesta fase.

**Fase 3 — ampliació:** banc de 45 variants, sèrie/paral·lel, seqüències, llindars, laboratori ideal de mesures, perfils docents i portafolis.

**Validació amb alumnat i docents:** incloure els diferents itineraris i necessitats d’accés. Observar si poden trobar l’objectiu, canviar un control, comprendre el retorn i explicar la prova. Revisar també casos d’error, respostes equivalents i accés sense ratolí.

**Criteris per considerar una missió preparada:**

1. Objectiu, prerequisits i evidència visibles abans de començar.
2. Tres reptes diferents i suports disponibles a tots tres.
3. Alternatives textuals de l’esquema i operació completa amb teclat.
4. Corrector contrastat amb casos correctes, incorrectes, equivalents i límit.
5. Feedback que identifica el concepte i proposa una acció.
6. Pauta física contrastada amb el manual del kit, o activitat identificada només com a virtual.
7. Rúbrica coherent amb l’objectiu i possibilitat d’expressió alternativa.
8. Cap qualificació de seguretat, muntatge real o raonament obert basada només en el corrector automàtic.

## 14. Primera mostra i evolució del prototip

La primera mostra de `Circuita.html` contenia: selector de cinc itineraris i tres reptes; objectiu i qüestionari adaptats; teoria amb esquema; circuit de tres condicions; simulació de llindar; retorn explicatiu; pista; rúbrica consultable; diana editable amb gràfic i taula; exportació JSON i impressió. Les dades d’autoavaluació es desen en aquest navegador si l’emmagatzematge local està disponible. Es poden esborrar amb el botó corresponent. No hi ha enviament a cap servidor.

La versió actual no inclou lectura de veu, enregistrament, classes, sincronització, editor lliure de circuits, comprovació física ni una auditoria d’accessibilitat. Les preferències de lletra i contrast són demostratives. El qüestionari mostra una pregunta per combinació d’itinerari i repte: 15 ítems; no equival al banc complet de 45 variants.

## Fonts

- Academia de Inventores. [Cirkids](https://academiadeinventores.com/cirkids/). Font del context del kit i dels temes de projecte anunciats; no de les activitats originals d’aquest disseny.
- CAST. [Universal Design for Learning Guidelines 3.0](https://udlguidelines.cast.org/). Marc per organitzar opcions d’implicació, representació i acció i expressió.

La resta del document és una proposta original de disseny, pendent de contrast amb el material físic i de pilotatge educatiu.

## Actualització visual

S’han incorporat al prototip les imatges oficials del maletí i dels mòduls, amb una variant vertical per a pantalles petites, i les il·lustracions dels projectes «La carrera de electrones», «Vuestra casa inteligente» i «Sistemas de emergencia». S’utilitzen per reconèixer peces i connectar conceptes amb contextos de projecte. Les tasques associades són pròpies de Circuita. Les imatges mantenen el seu contingut original i s’acompanyen de descripcions en català i atribució a Cirkids / Academia de Inventores.

Totes les imatges queden incrustades a `Circuita.html`; es pot compartir aquest únic fitxer i visualitzar-les sense connexió. Els fitxers originals i la relació de procedències es conserven a `assets/cirkids/`. No s’han verificat les instruccions de les làmines descarregables.

## Versió pràctica: reptes guiats de Badalona i modelatge docent

La pantalla inicial és ara «Reptes per etapa». Hi ha 15 activitats operatives (tres per etapa: guiada, continuïtat i millora), cadascuna amb set passos: observar i pensar, triar peces, connectar el model, predir i provar, comprovar casos, consultar solució i avaluar/reflexionar. Les 45 variants anteriors continuen com a banc d’ampliació proposat; no s’han implementat totes.

| Etapa | Guiat | Continuïtat | Millora |
|---|---|---|---|
| 1r–2n primària | Llum per al racó de lectura | Diagnosticar un tall | Polsador d’ajuda |
| 3r–4t primària | Avís de torn de lectura | Missatge mantingut amb interruptor | Taller de reparació |
| 5è–6è primària | Dues zones al passeig marítim | Sèrie o paral·lel | Controls segons ús de les zones |
| 1r ESO | Camí de maqueta de Ca l’Arnús amb llindar | Habilitació i AND | Depuració de < i ≤ |
| 2n ESO | Avís seqüenciat de maqueta del litoral | Histèresi | Auditoria d’aturada prioritària |

Totes les activitats tenen rutina de pensament, predicció, casos de prova, solució visual amb imatges de les peces del kit, reproducció/pausa/pas/reinici i velocitat ajustable. Les rúbriques es contextualitzen amb l’objectiu i l’edat, i cada repte afegeix semàfor, checklist, coavaluació o diana. Tots incorporen tiquet de sortida i exportació d’evidències en JSON. Es permet expressió oral o amb dibuix, amb síntesi docent.

La solució de referència no repara el model de l’alumne. Per completar el repte cal que el seu propi model superi els casos. El simulador és qualitatiu: les línies expliquen relacions de funcionament i no especifiquen pins ni substitueixen un esquema físic del fabricant. Els controls A i B representen l’obertura de les branques; no es pressuposen dos interruptors al maletí. Les sortides no modelen brillantor ni consum real. Els contextos són encàrrecs escolars ficticis, no projectes municipals.

La guia `Guia-professorat.html` i la versió de consulta `Guia-professorat.md` modelen els cinc reptes de referència: bases conceptuals, predicció, veu alta docent, pràctica amb controls, contrast de resultats, error habitual, transferència i reflexió. Ofereixen múltiples vies d’accés i expressió amb el mateix objectiu, sense assignar estils d’aprenentatge.

Fonts de context local: [parc de Can Solei i Ca l’Arnús](https://www.badalona.cat/ca/serveis-ajuntament/turisme/que-fer-i-que-veure/els-imprescindibles/el-parc-de-can-solei-de-ca-larnus) i [Pont del Petroli](https://www.badalona.cat/ca/serveis-ajuntament/turisme/que-fer-i-que-veure/els-imprescindibles/el-pont-del-petroli), Ajuntament de Badalona. No es proposa fer instal·lacions ni accedir a espais restringits.


## Pas al muntatge físic

La nova versió incorpora `Dossier-muntatge.html` i `Dossier-muntatge.md`, amb deu muntatges de referència vinculats als quinze reptes, connexions numerades, programa corresponent, calibratge i registre de prova docent. S’han consultat les làmines originals Cirkids (la primera usa 100 Ω en sèrie amb el LED) i l’activitat tècnica d’Academia de Inventores dins de STEAMbrace (PDF, pàgines 187–190). Les adaptacions, el valor de treball 10 kΩ del sensor, els programes i el rearme són propostes pròpies. No hi ha prova física del vostre material.

La carpeta `programes/` conté set sketches independents amb guions equivalents al dossier. Els fitxers de sensor s’entreguen amb calibratge pendent i LED apagat; el calibrador genera una versió amb les dades mesurades. No s’entreguen fitxers nadius Hello, Blocks! perquè no se n’ha verificat un format d’intercanvi: els guions es reconstrueixen a l’editor, o s’usa la via Arduino IDE amb els INO.

`Organitzacio-aula.md` completa els cinc itineraris amb vuit sessions orientatives cadascun, quatre rols, plantilles de proves, calibratge, traça i histèresi, i rúbriques físiques per edat.

Les sortides digitals dels muntatges físics afegeixen una R d’1 kΩ en sèrie amb cada LED com a protecció pròpia de Circuita. M9 és opcional i demana dues resistències d’1 kΩ; si el kit només en té una, M3 continua essent l’alternativa passiva per a les dues zones.


---

Aplicació creada per [CRP Badalona](https://serveiseducatius.xtec.cat/badalona) amb assistència de la IA.

Obra sota llicència [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/deed.ca).

La llicència s’aplica a les aportacions pròpies de Circuita. Les imatges Cirkids, les fonts documentals i els altres materials de tercers conserven les atribucions i els drets indicats a les fonts; no se’ls atribueix aquesta llicència.
