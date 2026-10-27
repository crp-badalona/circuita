# Circuita · Verificació de la versió de muntatge

Data: 26 d’octubre de 2026.

## Revisió documental

- Làmines Cirkids originals: 13 pàgines revisades en miniatura; pàgines 1 i 10 inspeccionades ampliades. La pàgina 1 documenta la resistència de 100 Ω en sèrie amb el LED.
- Activitat amb autoria d’Academia de Inventores a STEAMbrace D3.5: pàgines PDF 187–190 llegides i diagrames de sensor i LED revisats.
- Arduino: exemples oficials de pull-up, temporització sense bloqueig i lectura analògica com a referències.
- La tria de 10 kΩ per al sensor, els circuits derivats, el calibratge i el rearme són propostes pròpies.

## Compilació dels programes

Eines oficials descarregades de les distribucions d’Arduino dins de l’espai de treball, sense instal·lar-les globalment.

- Compilador: AVR GCC 7.3.0-atmel3.6.1-arduino7.
- Core: Arduino AVR 1.8.8.
- Objectiu: ATmega328P / Arduino Uno, 16 MHz.
- Mètode: compilació C++ de cada sketch i enllaç contra el core oficial. La descoberta de plataformes d’Arduino CLI ha fallat per accés al directori en aquest entorn; s’han invocat directament el compilador i l’enllaçador AVR oficials.
- 7 sketches de referència + 6 variants calibrades, en sentit directe i invers: **13 compilacions i enllaços superats**. Les variants calibrades comproven també les branques que el valor CALIBRATED=false desactiva a la distribució de referència.

| Programa / variant | Resultat |
|---|---|
| 00_Prova_LED | Compila i enllaça |
| 01_Calibratge | Compila i enllaça |
| 02_Llum_automatica | Compila i enllaça |
| 02_Llum_automatica calibrat directe | Compila i enllaça |
| 02_Llum_automatica calibrat invers | Compila i enllaça |
| 03_Llum_habilitada | Compila i enllaça |
| 03_Llum_habilitada calibrat directe | Compila i enllaça |
| 03_Llum_habilitada calibrat invers | Compila i enllaça |
| 04_Sequencia_aturada | Compila i enllaça |
| 05_Histeresi | Compila i enllaça |
| 05_Histeresi calibrat directe | Compila i enllaça |
| 05_Histeresi calibrat invers | Compila i enllaça |
| 06_Dues_zones | Compila i enllaça |

## Comprovacions de l’aplicació

- Dossier: 4.182 comprovacions de calibratge, generació de codi, correspondències, fitxes i estructura de programes.
- Motor de reptes de l’alumnat: 522 comprovacions superades després d’integrar el dossier.
- Guia docent: 764 comprovacions de lògica/contingut i 41 d’esdeveniments del runtime amb DOM simulat, de la versió anterior a l’enllaç al dossier.
- En navegador: calibratge amb dues sèries vàlides, conversió intermèdia a 50/100, rebuig de sèries massa properes, ocultació del generador quan les dades no són vàlides, filtre d’etapa i revelació de connexions.

## Allò que continua requerint una prova del centre

No s’ha connectat cap controlador ni fet cap muntatge físic. No hi ha fotografies de muntatges construïts per nosaltres. Les imatges del kit i la primera làmina són originals de les fonts; la resta són plans i instruccions pròpies.

Abans d’usar-ho amb alumnat: compara model i inventari, prova M0/M1/M2 o M5 segons l’etapa, comprova derivacions i alimentació, calibra el sensor si escau i registra la prova al dossier. L’autoobservació «he provat» l’emplena el docent; l’app no la pot verificar.

No hi ha una auditoria d’accessibilitat, una validació elèctrica del vostre kit ni un pilotatge amb alumnat.

Les sortides digitals dels muntatges físics afegeixen una R d’1 kΩ en sèrie amb cada LED com a protecció pròpia de Circuita. M9 és opcional i demana dues resistències d’1 kΩ; si el kit només en té una, M3 continua essent l’alternativa passiva per a les dues zones.


---

Aplicació creada per [CRP Badalona](https://serveiseducatius.xtec.cat/badalona) amb assistència de la IA.

Obra sota llicència [CC BY-NC-SA 4.0](https://creativecommons.org/licenses/by-nc-sa/4.0/deed.ca).

La llicència s’aplica a les aportacions pròpies de Circuita. Les imatges Cirkids, les fonts documentals i els altres materials de tercers conserven les atribucions i els drets indicats a les fonts; no se’ls atribueix aquesta llicència.
