# CortaSpoof

CortaSpoof est un logiciel développé dans le cadre d'un projet sur la confidentialité de Windows 10 dans le laboratoire CVO de l'ESIEA à Laval. Pour plus d'information sur le projet:  (lien article arxiv)

 
## 1. Introduction sur Cortana 

En juillet 2015, Microsoft sort son nouvel OS Windows 10. Cet OS est plein de nouvelles fonctionnalitéds, celles-ci sont présentes pour faciliter l'utilisation de l’utilisateur. Parmi ces fonctionnalitéds ce trouve l'assistant de recherche vocal Cortana.

	 
### 1.1. Qu'est-ce que Cortana 

Le nom Cortana provient du jeu vidéo « Halo » développé exclusivement sur Xbox, la console de Microsoft. Cortana est le nom d'une intelligence virtuel assistant le master Master Chief Petty Officer John-117 dans ses missions. 
Dans Windows 10, Cortana est une assistante vocale personnelle intelligente. Le service se présente dans une barre en bas à gauche de l'écran. Dans cette barre l'utilisateur de Windows 10 peut effectuer une recherche sur internet ou encore rechercher un logiciel ou un fichier présent sur son ordinateur. La recherche peut se faire en tapant le texte de la recherche dans la barre ou par la voix lorsque l'outil est totalement configuré. 

 
### 1.2. Les dangers de son utilisation 

Lorsque le logiciel est totalement configuré, Cortana a accès à une grande partie des informations personnelles de l'utilisateur, cela afin d'en apprendre le plus possible sur ses habitudes, ses goûts ou sa façon de parler. Le profil ainsi fait peut être très proche de la réalité. Microsoft se permet donc une grande intrusion dans notre vie privée avec ce service. Les données envoyées à Microsoft sont gigantesques et sont utilisation par Microsoft peut être douteuse puisque dans ses mentions légales Microsoft peut accéder à ces données si de « bonne foi » il en récent le besoin. 
La recherche web peut être désactivée sur Cortana, il suffit alors d'aller dans les paramètres du service. 


Son utilisation reste tout de même appréciée par beaucoup, plutôt que de désactiver totalement le service pourquoi ne pas bruiter totalement le service. Le but de CortaSpoof est justement d'envoyer en continue de fausses requêtes aux serveurs de Microsoft, ainsi les données réellement envoyées par l'utilisateur sont noyées dans la masse de fausses données envoyées. 

## 2. Utilisation de CortaSpoof 

### 2.1. Choix des trames à bruiter 

Avant d'envoyer la requête de recherche, Cortana envoie de nombreuses requêtes, le logiciel permet d'en reproduire certaines d'entre elles, dont l'initialisation ou encore d'autres, sur le diagnostic d'utilisation. La plus importante restant la requête de recherche. 
Exemple requête de recherche.

 Liste des trames :  
 Cortana Init : initialisation du service.  
 Cortana manifest spoofing : énumère les ressources contenues et décrit le contenu du paquet  
 Cortana query spoofing : requête de recherche.  
 Cortana zinc :  

 
### 2.2. Démarrer et arrêter le bruitage de Cortana 

Pour commencer le bruitage, il suffit de cliquer sur le bouton « love Microsoft ». Il est possible d'ajuster la vitesse d'envoi des paquets avec le curseur juste au-dessus du bouton.
Pour l’arrêt, il suffit de cliquer sur le bouton, "stop spoofing". La fermeture du logiciel entraine aussi l'arrêt du bruitage. 

 
### 2.3 Données envoyées 

Une requête d'une recherche ressemble à :  
 GET /AS/API/WindowsCortanaPane/V2/Suggestions?qry=about&cp=5&cvid=ce8c2c3ad6704645bb207c0401d709aa&ig=7fdd08f6d6474ead86e3c71404e36dd6&cc=US&setlang=en-US HTTP/1.1  
 Accept:                        */*  
 X-BM-ClientFeatures:           FontV4, OemEnabled  
 X-Search-SafeSearch:           Moderate  
 X-Device-MachineId:            {73737373-9999-4444-9999-A8A8A8A8A8A8}  
 X-BM-Market:                   US  
 X-BM-DateFormat:               M/d/yyyy  
 X-Device-OSSKU:                48  
 X-Device-NetworkType:          ethernet  
 X-BM-DTZ:                      -420  
 X-BM-UserDisplayName:          Tester  
 X-DeviceID:                    0100D33317836214  
 X-BM-DeviceScale:              100  
 X-Device-Manufacturer:         innotek GmbH  
 X-BM-Theme:                    ffffff;005a9e  
 X-BM-DeviceDimensionsLogical:  320x622  
 X-BM-DeviceDimensions:         320x622  
 X-Device-Product:              VirtualBox  
 X-BM-CBT:                      1439740000  
 X-Device-isOptin:              false  
 X-Device-Touch:                false  
 X-AIS-AuthToken:               AISToken ApplicationId=25555555-ffff-4444-cccc-a7a7a7a7a7a7&ExpiresOn=1440301800&HMACSHA256=CS
                                y7XaNyyCE8oAZPeN%2b6IJ4ZrpqDDRZUIJyKvrIKnTA%3d  
 X-Device-ClientSession:        95290000000000000000000000000000  
 X-Search-AppId:                Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI  
 X-MSEdge-ExternalExpType:      JointCoord  
 X-MSEdge-ExternalExp:          sup001,pleasenosrm40ct,d-thshld42,d-thshld77,d-thshld78  
 Referer:                       https://www.bing.com/  
 Accept-Language:               en-US  
 Accept-Encoding:               gzip, deflate  
 User-Agent:                    Mozilla/5.0 (Windows NT 10.0; Win64; x64; Trident/7.0; rv:11.0; Cortana 1.4.8.152;  
                                10.0.0.0.10240.21) like Gecko  
 Host:                          www.bing.com  
 Connection:                    Keep-Alive  
 Cookie: SA_SUPERFRESH_SUPPRESS=SUPPRESS=0&LAST=1439745358300; SRCHD=AF=NOFORM; ...  

Cette requête HTTPS contient de nombreux headers. Ces headers contiennent principalement des informations sur la machine utilisée. 

 X-Search-SafeSearch:		  filtre plus ou moins les contenus pour adulte  
 X-Device-MachineId:            identifiant de la machine  
 X-BM-Market:                   nationalité du Windows store  
 X-BM-DateFormat:               format d'écriture de la date  
 X-Device-OSSKU:                version de Windows  
 X-Device-NetworkType:          moyen de communication internet utilisée  
 X-BM-DTZ:                      usage inconnu  
 X-BM-UserDisplayName:          nom de l'utilisateur  
 X-DeviceID:                    identifiant Cortana (pas sure)  
 X-BM-DeviceScale:              pourcentage d'occupation de l'image à l'écran  
 X-Device-Manufacturer:         constructeur de la machine  
 X-BM-Theme:                    couleur principale du thème Windows  
 X-BM-DeviceDimensionsLogical:  taille de la fenêtre cortana  
 X-BM-DeviceDimensions:         taille de la fenêtre cortana  
 X-Device-Product:              nom du produit  
 X-BM-CBT:                      identifiant de la recherche (pas sure)  
 X-Device-isOptin:              usage inconnu  
 X-Device-Touch:           la machine est tactile ou non  

 
## 3. Utilisation avancée de CortaSpoof 

### 3.1. Personnalisation du header 

Il est possible de personnaliser chacun des champs du header en cliquant sur le bouton « custom ».



Chaque champ peut alors être modifié. 
Un champ mal renseigné est coloré en rouge.
Il est possible de renseigner un champ par une valeur aléatoire en cliquant sur le point interrogation juste à côté de celui-ci.
Un clique sur le bouton d'aide à côté de la croix de fermeture de la fenêtre permet à l'utilisateur d'avoir plus d'information sur un champ souhaité.
 

 
### 3.2. Ajouter des expressions 

Par défaut, les recherches envoyées sont choisies aléatoirement dans un dictionnaire de la langue de votre machine. Mais il est possible pour l'utilisateur d'envoyé un mot unique en décochant la case « use dico ». 
Les listes d'expressions sont disponibles dans le dossier "dico". Suivant la langue choisie, le fichier correspondant sera choisi pour l'envoi de recherche aléatoire. Il est possible à l'utilisateur de modifier cette liste en y ajoutant ses propres termes de recherche. 

 
### 3.3. Enregistrement des données personnalisées 

Lorsque le programme est quitté, toutes les informations renseignées dans le logiciel sont enregistrées dans le fichier « backup » dans le même dossier que l’exécutable. Lors d'un prochain démarrage du logiciel, il est demandé à l'utilisateur s'il veut oui ou non charger les données de cette sauvegarde.

## 4. Développement

Ce logiciel à été développer sous visual studio 2015 et utilise QT 5 pour l'interface graphique.<br/>
Toutes proposition d'amélioration est la bienvenue ;)
