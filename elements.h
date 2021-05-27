#include <stdio.h>

#include <string.h>

#include <stdlib.h>


struct element 
{
	
    char name[20]; 
    char symbol[4];
    int atomicnum;
    float atomicwt;
    char electronic_configuration[15];
    char history[500];
    float melting_point;
    float boiling_point;
    float ionic_radius;
    int isotopes;
    float electronegativity;
    char color[20];
    int group;
    int period;
    char conductivity[20];
    char luster[20];
    char phase[7];
    float density;
    char image_path[150];

}
atom[118];


extern void table() 
{
	
    strcpy(atom[0].name,"HYDROGEN");	
    strcpy(atom[0].symbol,"H");
    atom[0].atomicnum=1;
    atom[0].atomicwt=1.008;
    strcpy(atom[0].electronic_configuration,"1s1");
    strcpy(atom[0].history,"");
    atom[0].melting_point = 13.99;
    atom[0].boiling_point = 20.271;
    atom[0].ionic_radius = 0.012;
    atom[0].isotopes = 7;
    atom[0].electronegativity = 2.20;
    strcpy(atom[0].color,"Colourless");
    atom[0].group = 1;
    atom[0].period = 1;
    strcpy(atom[0].conductivity,"Thermal conductivity");
    strcpy(atom[0].luster,"No luster");
    strcpy(atom[0].phase,"Gas");
    atom[0].density = Thermal conductivity;
    strcpy(atom[0].uses,"Hydrogen also has many other uses. In the chemical industry it is used to make ammonia for agricultural fertiliser (the Haber process) and cyclohexane and methanol, which are intermediates in the production of plastics and pharmaceuticals. It is also used to remove sulfur from fuels during the oil-refining process. Large quantities of hydrogen are used to hydrogenate oils to form fats, for example to make margarine. Hydrogen is an essential element for life. It is present in water and in almost all the molecules in living things. However, hydrogen itself does not play a particularly active role. It remains bonded to carbon and oxygen atoms, while the chemistry of life takes place at the more active sites involving, for example, oxygen, nitrogen and phosphorus. Hydrogen is easily the most abundant element in the universe. It is found in the sun and most of the stars, and the planet Jupiter is composed mostly of hydrogen.");
    strcpy(atom[0].image_path,"");


    strcpy(atom[1].name,"HELIUM");	
    strcpy(atom[1].symbol,"He");
    atom[1].atomicnum=2;
    atom[1].atomicwt=4.00;
    strcpy(atom[1].electronic_configuration,"1s2");
    strcpy(atom[1].history,"The first evidence of helium was obtained on August 18th, 1868 by French astronomer Jules Janssen. While in Guntur, India, Janssen observed a solar eclipse through a prism, whereupon he noticed a bright yellow spectral line (at 587.49 nanometers) emanating from the chromosphere of the Sun.");
    atom[1].melting_point = 0.95;
    atom[1].boiling_point = 4.22;
    atom[1].ionic_radius =93;
    atom[1].isotopes = 8;
    atom[1].electronegativity = 0;
    strcpy(atom[1].color,"Colorless");
    atom[1].group = 18;
    atom[1].period = 1;
    strcpy(atom[1].conductivity,"high thermal conductivity");
    strcpy(atom[1].luster,"No Luster");
    strcpy(atom[1].phase,"Gas");
    atom[1].density = 0.00017;
    strcpy(atom[1].uses,"Helium is used as a cooling medium for the Large Hadron Collider (LHC), and the superconducting magnets in MRI scanners and NMR spectrometers. It is also used to keep satellite instruments cool and was used to cool the liquid oxygen and hydrogen that powered the Apollo space vehicles. Helium-neon gas lasers are used to scan barcodes in supermarket checkouts. A new use for helium is a helium-ion microscope that gives better image resolution than a scanning electron microscope. After hydrogen, helium is the second most abundant element in the universe. It is present in all stars. It was, and is still being, formed from alpha-particle decay of radioactive elements in the Earth. Some of the helium formed escapes into the atmosphere, which contains about 5 parts per million by volume. This is a dynamic balance, with the low-density helium continually escaping to outer space.");
    strcpy(atom[1].image_path,"");

    strcpy(atom[2].name,"LITHIUM");
    strcpy(atom[2].symbol,"Li");
    atom[2].atomicnum=3;
    atom[2].atomicwt=6.94;
    strcpy(atom[2].electronic_configuration,"");
    strcpy(atom[2].history,"");
    atom[2].melting_point = 0.00000;
    atom[2].boiling_point = 0.00000;
    atom[2].ionic_radius = 0.00000;
    atom[2].isotopes = 0;
    atom[2].electronegativity = 0.00000;
    strcpy(atom[2].color,"");
    atom[2].group = 1;
    atom[2].period = 1;
    strcpy(atom[2].conductivity,"");
    strcpy(atom[2].luster,"");
    strcpy(atom[2].phase,"");
    atom[2].density = 0.00000;
    strcpy(atom[2].uses,"");
    strcpy(atom[2].image_path,"");



    strcpy(atom[3].name,"BERYLLIUM");	
    strcpy(atom[3].symbol,"Be");	
    atom[3].atomicnum=4;	
    atom[3].atomicwt=9.01;
    strcpy(atom[3].electronic_configuration,"");
    strcpy(atom[3].history,"");
    atom[3].melting_point = 0.00000;
    atom[3].boiling_point = 0.00000;
    atom[3].ionic_radius = 0.00000;
    atom[3].isotopes = 0;
    atom[3].electronegativity = 0.00000;
    strcpy(atom[3].color,"");
    atom[3].group = 1;
    atom[3].period = 1;
    strcpy(atom[3].conductivity,"");
    strcpy(atom[3].luster,"");
    strcpy(atom[3].phase,"");
    atom[3].density = 0.00000;
    strcpy(atom[3].uses,"");
    strcpy(atom[3].image_path,"");



    strcpy(atom[4].name,"BORON");	
    strcpy(atom[4].symbol,"B");
    atom[4].atomicnum=5;
    atom[4].atomicwt=10.81;
    strcpy(atom[4].electronic_configuration,"");
    strcpy(atom[4].history,"");
    atom[4].melting_point = 0.00000;
    atom[4].boiling_point = 0.00000;
    atom[4].ionic_radius = 0.00000;
    atom[4].isotopes = 0;
    atom[4].electronegativity = 0.00000;
    strcpy(atom[4].color,"");
    atom[4].group = 1;
    atom[4].period = 1;
    strcpy(atom[4].conductivity,"");
    strcpy(atom[4].luster,"");
    strcpy(atom[4].phase,"");
    atom[4].density = 0.00000;
    strcpy(atom[4].uses,"");
    strcpy(atom[4].image_path,"");


    strcpy(atom[5].name,"CARBON");	
    strcpy(atom[5].symbol,"C");	
    atom[5].atomicnum=6;	
    atom[5].atomicwt=12.01;
    strcpy(atom[5].electronic_configuration,"[He] 2s2 2p2");
    strcpy(atom[5].history,"The name carbon has been derived from the word carbo (Latin for coal and charcoal). Carbon was discovered as a novel element by 1722 by Antoine Ferchault de Réaumur, who proposed that this novel element can be used to transform iron into steel.");
    atom[5].melting_point = 40000;
    atom[5].boiling_point = 4300;
    atom[5].ionic_radius = 0.16;
    atom[5].isotopes = 15;
    atom[5].electronegativity = 2.55;
    strcpy(atom[5].color,"Gray Graphite");
    atom[5].group = 14;
    atom[5].period = 2;
    strcpy(atom[5].conductivity,"Poor conductor of electricity");
    strcpy(atom[5].luster,"Blackish and it is shiny sometimes");
    strcpy(atom[5].phase,"Solid");
    atom[5].density = 2.267;
    strcpy(atom[5].uses,"");
    strcpy(atom[5].image_path,"");



    strcpy(atom[6].name,"NITROGEN");	
    strcpy(atom[6].symbol,"N");
    atom[6].atomicnum=7;
    atom[6].atomicwt=14.00;
    strcpy(atom[6].electronic_configuration,"");
    strcpy(atom[6].history,"");
    atom[6].melting_point = 0.00000;
    atom[6].boiling_point = 0.00000;
    atom[6].ionic_radius = 0.00000;
    atom[6].isotopes = 0;
    atom[6].electronegativity = 0.00000;
    strcpy(atom[6].color,"");
    atom[6].group = 1;
    atom[6].period = 1;
    strcpy(atom[6].conductivity,"");
    strcpy(atom[6].luster,"");
    strcpy(atom[6].phase,"");
    atom[6].density = 0.00000;
    strcpy(atom[6].uses,"");
    strcpy(atom[6].image_path,"");



    strcpy(atom[7].name,"OXYGEN");	
    strcpy(atom[7].symbol,"O");
    atom[7].atomicnum=8;
    atom[7].atomicwt=15.59;
    strcpy(atom[7].electronic_configuration,"");
    strcpy(atom[7].history,"");
    atom[7].melting_point = 0.00000;
    atom[7].boiling_point = 0.00000;
    atom[7].ionic_radius = 0.00000;
    atom[7].isotopes = 0;
    atom[7].electronegativity = 0.00000;
    strcpy(atom[7].color,"");
    atom[7].group = 1;
    atom[7].period = 1;
    strcpy(atom[7].conductivity,"");
    strcpy(atom[7].luster,"");
    strcpy(atom[7].phase,"");
    atom[7].density = 0.00000;
    strcpy(atom[7].uses,"");
    strcpy(atom[7].image_path,"");


    strcpy(atom[8].name,"FLUORINE");	
    strcpy(atom[8].symbol,"F");
    atom[8].atomicnum=9;
    atom[8].atomicwt=18.99;
    strcpy(atom[8].electronic_configuration,"");
    strcpy(atom[8].history,"");
    atom[8].melting_point = 0.00000;
    atom[8].boiling_point = 0.00000;
    atom[8].ionic_radius = 0.00000;
    atom[8].isotopes = 0;
    atom[8].electronegativity = 0.00000;
    strcpy(atom[8].color,"");
    atom[8].group = 1;
    atom[8].period = 1;
    strcpy(atom[8].conductivity,"");
    strcpy(atom[8].luster,"");
    strcpy(atom[8].phase,"");
    atom[8].density = 0.00000;
    strcpy(atom[8].uses,"");
    strcpy(atom[8].image_path,"");

    strcpy(atom[9].name,"NEON");        
    strcpy(atom[9].symbol,"Ne");        
    atom[9].atomicnum=10;        
    atom[9].atomicwt=20.18;
    strcpy(atom[9].electronic_configuration,"");
    strcpy(atom[9].history,"");
    atom[9].melting_point = 0.00000;
    atom[9].boiling_point = 0.00000;
    atom[9].ionic_radius = 0.00000;
    atom[9].isotopes = 0;
    atom[9].electronegativity = 0.00000;
    strcpy(atom[9].color,"");
    atom[9].group = 1;
    atom[9].period = 1;
    strcpy(atom[9].conductivity,"");
    strcpy(atom[9].luster,"");
    strcpy(atom[9].phase,"");
    atom[9].density = 0.00000;
    strcpy(atom[9].uses,"");
    strcpy(atom[9].image_path,"");  


    strcpy(atom[10].name,"SODIUM");
    strcpy(atom[10].symbol,"Na");        
    atom[10].atomicnum=11;        
    atom[10].atomicwt=22.99;
    strcpy(atom[10].electronic_configuration,"");
    strcpy(atom[10].history,"");
    atom[10].melting_point = 0.00000;
    atom[10].boiling_point = 0.00000;
    atom[10].ionic_radius = 0.00000;
    atom[10].isotopes = 0;
    atom[10].electronegativity = 0.00000;
    strcpy(atom[10].color,"");
    atom[10].group = 1;
    atom[10].period = 1;
    strcpy(atom[10].conductivity,"");
    strcpy(atom[10].luster,"");
    strcpy(atom[10].phase,"");
    atom[10].density = 0.00000;
    strcpy(atom[10].uses,"");
    strcpy(atom[10].image_path,"");
   

    strcpy(atom[11].name,"MAGNESIUM");        
    strcpy(atom[11].symbol,"Mg");        
    atom[11].atomicnum=12;        
    atom[11].atomicwt=24.30;
    strcpy(atom[11].electronic_configuration,"");
    strcpy(atom[11].history,"");
    atom[11].melting_point = 0.00000;
    atom[11].boiling_point = 0.00000;
    atom[11].ionic_radius = 0.00000;
    atom[11].isotopes = 0;
    atom[11].electronegativity = 0.00000;
    strcpy(atom[11].color,"");
    atom[11].group = 1;
    atom[11].period = 1;
    strcpy(atom[11].conductivity,"");
    strcpy(atom[11].luster,"");
    strcpy(atom[11].phase,"");
    atom[11].density = 0.00000;
    strcpy(atom[11].uses,"");
    strcpy(atom[11].image_path,"");
    

    strcpy(atom[12].name,"ALUMINIUM");        
    strcpy(atom[12].symbol,"Al");        
    atom[12].atomicnum=13;        
    atom[12].atomicwt=1.008;
    strcpy(atom[12].electronic_configuration,"");
    strcpy(atom[12].history,"");
    atom[12].melting_point = 0.00000;
    atom[12].boiling_point = 0.00000;
    atom[12].ionic_radius = 0.00000;
    atom[12].isotopes = 0;
    atom[12].electronegativity = 0.00000;
    strcpy(atom[12].color,"");
    atom[12].group = 1;
    atom[12].period = 1;
    strcpy(atom[12].conductivity,"");
    strcpy(atom[12].luster,"");
    strcpy(atom[12].phase,"");
    atom[12].density = 0.00000;
    strcpy(atom[12].uses,"");
    strcpy(atom[12].image_path,"");


    strcpy(atom[13].name,"SILICON");        
    strcpy(atom[13].symbol,"Si");        
    atom[13].atomicnum=14;        
    atom[13].atomicwt=28.08;
    strcpy(atom[13].electronic_configuration,"");
    strcpy(atom[13].history,"");
    atom[13].melting_point = 0.00000;
    atom[13].boiling_point = 0.00000;
    atom[13].ionic_radius = 0.00000;
    atom[13].isotopes = 0;
    atom[13].electronegativity = 0.00000;
    strcpy(atom[13].color,"");
    atom[13].group = 1;
    atom[13].period = 1;
    strcpy(atom[13].conductivity,"");
    strcpy(atom[13].luster,"");
    strcpy(atom[13].phase,"");
    atom[13].density = 0.00000;
    strcpy(atom[13].uses,"");
    strcpy(atom[13].image_path,"");


    strcpy(atom[14].name,"PHOSPHOROUS");        
    strcpy(atom[14].symbol,"P");        
    atom[14].atomicnum=15;        
    atom[14].atomicwt=30.97;
    strcpy(atom[14].electronic_configuration,"");
    strcpy(atom[14].history,"");
    atom[14].melting_point = 0.00000;
    atom[14].boiling_point = 0.00000;
    atom[14].ionic_radius = 0.00000;
    atom[14].isotopes = 0;
    atom[14].electronegativity = 0.00000;
    strcpy(atom[14].color,"");
    atom[14].group = 1;
    atom[14].period = 1;
    strcpy(atom[14].conductivity,"");
    strcpy(atom[14].luster,"");
    strcpy(atom[14].phase,"");
    atom[14].density = 0.00000;
    strcpy(atom[14].uses,"");
    strcpy(atom[14].image_path,"");


    strcpy(atom[15].name,"SULPHUR");        
    strcpy(atom[15].symbol,"S");        
    atom[15].atomicnum=16;        
    atom[15].atomicwt=32.06;
    strcpy(atom[15].electronic_configuration,"");
    strcpy(atom[15].history,"");
    atom[15].melting_point = 0.00000;
    atom[15].boiling_point = 0.00000;
    atom[15].ionic_radius = 0.00000;
    atom[15].isotopes = 0;
    atom[15].electronegativity = 0.00000;
    strcpy(atom[15].color,"");
    atom[15].group = 1;
    atom[15].period = 1;
    strcpy(atom[15].conductivity,"");
    strcpy(atom[15].luster,"");
    strcpy(atom[15].phase,"");
    atom[15].density = 0.00000;
    strcpy(atom[15].uses,"");
    strcpy(atom[15].image_path,"");


    strcpy(atom[16].name,"CHLORINE");        
    strcpy(atom[16].symbol,"Cl");        
    atom[16].atomicnum=17;        
    atom[16].atomicwt=35.45;
    strcpy(atom[16].electronic_configuration,"");
    strcpy(atom[16].history,"");
    atom[16].melting_point = 0.00000;
    atom[16].boiling_point = 0.00000;
    atom[16].ionic_radius = 0.00000;
    atom[16].isotopes = 0;
    atom[16].electronegativity = 0.00000;
    strcpy(atom[16].color,"");
    atom[16].group = 1;
    atom[16].period = 1;
    strcpy(atom[16].conductivity,"");
    strcpy(atom[16].luster,"");
    strcpy(atom[16].phase,"");
    atom[16].density = 0.00000;
    strcpy(atom[16].uses,"");
    strcpy(atom[16].image_path,"");


    strcpy(atom[17].name,"ARGON");        
    strcpy(atom[17].symbol,"Ar");        
    atom[17].atomicnum=18;        
    atom[17].atomicwt=39.94;
    strcpy(atom[17].electronic_configuration,"");
    strcpy(atom[17].history,"");
    atom[17].melting_point = 0.00000;
    atom[17].boiling_point = 0.00000;
    atom[17].ionic_radius = 0.00000;
    atom[17].isotopes = 0;
    atom[17].electronegativity = 0.00000;
    strcpy(atom[17].color,"");
    atom[17].group = 1;
    atom[17].period = 1;
    strcpy(atom[17].conductivity,"");
    strcpy(atom[17].luster,"");
    strcpy(atom[17].phase,"");
    atom[17].density = 0.00000;
    strcpy(atom[17].uses,"");
    strcpy(atom[17].image_path,"");


    strcpy(atom[18].name,"POTASSIUM");        
    strcpy(atom[18].symbol,"K");        
    atom[18].atomicnum=19;        
    atom[18].atomicwt=39.09;
    strcpy(atom[18].electronic_configuration,"");
    strcpy(atom[18].history,"");
    atom[18].melting_point = 0.00000;
    atom[18].boiling_point = 0.00000;
    atom[18].ionic_radius = 0.00000;
    atom[18].isotopes = 0;
    atom[18].electronegativity = 0.00000;
    strcpy(atom[18].color,"");
    atom[18].group = 1;
    atom[18].period = 1;
    strcpy(atom[18].conductivity,"");
    strcpy(atom[18].luster,"");
    strcpy(atom[18].phase,"");
    atom[18].density = 0.00000;
    strcpy(atom[18].uses,"");
    strcpy(atom[18].image_path,"");


    strcpy(atom[19].name,"CALICUM");        
    strcpy(atom[19].symbol,"Ca");        
    atom[19].atomicnum=20;        
    atom[19].atomicwt=40.07;
    strcpy(atom[19].electronic_configuration,"");
    strcpy(atom[19].history,"");
    atom[19].melting_point = 0.00000;
    atom[19].boiling_point = 0.00000;
    atom[19].ionic_radius = 0.00000;
    atom[19].isotopes = 0;
    atom[19].electronegativity = 0.00000;
    strcpy(atom[19].color,"");
    atom[19].group = 1;
    atom[19].period = 1;
    strcpy(atom[19].conductivity,"");
    strcpy(atom[19].luster,"");
    strcpy(atom[19].phase,"");
    atom[19].density = 0.00000;
    strcpy(atom[19].uses,"");
    strcpy(atom[19].image_path,"");


    strcpy(atom[20].name,"SCANDIUM");        
    strcpy(atom[20].symbol,"Sc");        
    atom[20].atomicnum=21;        
    atom[20].atomicwt=44.95;
    strcpy(atom[20].electronic_configuration,"");
    strcpy(atom[20].history,"");
    atom[20].melting_point = 0.00000;
    atom[20].boiling_point = 0.00000;
    atom[20].ionic_radius = 0.00000;
    atom[20].isotopes = 0;
    atom[20].electronegativity = 0.00000;
    strcpy(atom[20].color,"");
    atom[20].group = 1;
    atom[20].period = 1;
    strcpy(atom[20].conductivity,"");
    strcpy(atom[20].luster,"");
    strcpy(atom[20].phase,"");
    atom[20].density = 0.00000;
    strcpy(atom[20].uses,"");
    strcpy(atom[20].image_path,"");


    strcpy(atom[21].name,"TITANIUM");        
    strcpy(atom[21].symbol,"Ti");        
    atom[21].atomicnum=22;        
    atom[21].atomicwt=47.86;
    strcpy(atom[21].electronic_configuration,"");
    strcpy(atom[21].history,"");
    atom[21].melting_point = 0.00000;
    atom[21].boiling_point = 0.00000;
    atom[21].ionic_radius = 0.00000;
    atom[21].isotopes = 0;
    atom[21].electronegativity = 0.00000;
    strcpy(atom[21].color,"");
    atom[21].group = 1;
    atom[21].period = 1;
    strcpy(atom[21].conductivity,"");
    strcpy(atom[21].luster,"");
    strcpy(atom[21].phase,"");
    atom[21].density = 0.00000;
    strcpy(atom[21].uses,"");
    strcpy(atom[21].image_path,"");


    strcpy(atom[22].name,"VANADIUM");        
    strcpy(atom[22].symbol,"V");        
    atom[22].atomicnum=23;        
    atom[22].atomicwt=50.94;
    strcpy(atom[22].electronic_configuration,"");
    strcpy(atom[22].history,"");
    atom[22].melting_point = 0.00000;
    atom[22].boiling_point = 0.00000;
    atom[22].ionic_radius = 0.00000;
    atom[22].isotopes = 0;
    atom[22].electronegativity = 0.00000;
    strcpy(atom[22].color,"");
    atom[22].group = 1;
    atom[22].period = 1;
    strcpy(atom[22].conductivity,"");
    strcpy(atom[22].luster,"");
    strcpy(atom[22].phase,"");
    atom[22].density = 0.00000;
    strcpy(atom[22].uses,"");
    strcpy(atom[22].image_path,"");


    strcpy(atom[23].name,"CHROMIUM");        
    strcpy(atom[23].symbol,"Cr");        
    atom[23].atomicnum=24;        
    atom[23].atomicwt=51.99;
    strcpy(atom[23].electronic_configuration,"");
    strcpy(atom[23].history,"");
    atom[23].melting_point = 0.00000;
    atom[23].boiling_point = 0.00000;
    atom[23].ionic_radius = 0.00000;
    atom[23].isotopes = 0;
    atom[23].electronegativity = 0.00000;
    strcpy(atom[23].color,"");
    atom[23].group = 1;
    atom[23].period = 1;
    strcpy(atom[23].conductivity,"");
    strcpy(atom[23].luster,"");
    strcpy(atom[23].phase,"");
    atom[23].density = 0.00000;
    strcpy(atom[23].uses,"");
    strcpy(atom[23].image_path,"");


    strcpy(atom[24].name,"MANGANESE");        
    strcpy(atom[24].symbol,"Mg");        
    atom[24].atomicnum=25;        
    atom[24].atomicwt=54.84;
    strcpy(atom[24].electronic_configuration,"");
    strcpy(atom[24].history,"");
    atom[24].melting_point = 0.00000;
    atom[24].boiling_point = 0.00000;
    atom[24].ionic_radius = 0.00000;
    atom[24].isotopes = 0;
    atom[24].electronegativity = 0.00000;
    strcpy(atom[24].color,"");
    atom[24].group = 1;
    atom[24].period = 1;
    strcpy(atom[24].conductivity,"");
    strcpy(atom[24].luster,"");
    strcpy(atom[24].phase,"");
    atom[24].density = 0.00000;
    strcpy(atom[24].uses,"");
    strcpy(atom[24].image_path,"");


    strcpy(atom[25].name,"IRON");        
    strcpy(atom[25].symbol,"Fe");        
    atom[25].atomicnum=26;        
    atom[25].atomicwt=55.84;
    strcpy(atom[25].electronic_configuration,"[Ar] 3d64s2");
    strcpy(atom[25].history,"Iron objects have been found in Egypt dating from around 3500 BC. They contain about 7.5% nickel, which indicates that they were of meteoric origin.The ancient Hittites of Asia Minor, today’s Turkey, were the first to smelt iron from its ores around 1500 BC and this new, stronger, metal gave them economic and political power. The Iron Age had begun. Some kinds of iron were clearly superior to others depending on its carbon content, although this was not appreciated. Some iron ore contained vanadium producing so-called Damascene steel, ideal for swords.The first person to explain the various types of iron was René Antoine Ferchault de Réaumur who wrote a book on the subject in 1722. This explained how steel, wrought iron, and cast iron, were to be distinguished by the amount of charcoal (carbon) they contained. The Industrial Revolution which began that same century relied extensively on this metal.");
    atom[25].melting_point = 1811;
    atom[25].boiling_point = 3134;
    atom[25].ionic_radius = 0.55 ;
    atom[25].isotopes = 26;
    atom[25].electronegativity = 1.83;
    strcpy(atom[25].color,"Greyish");
    atom[25].group = 8;
    atom[25].period = 4;
    strcpy(atom[25].conductivity,"Electrical Conductivity");
    strcpy(atom[25].luster,"Shiny");
    strcpy(atom[25].phase,"Solid");
    atom[25].density = 7.87;
    strcpy(atom[25].uses,"Iron is an enigma – it rusts easily, yet it is the most important of all metals. 90% of all metal that is refined today is iron.Iron is the fourth most abundant element, by mass, in the Earth’s crust. The core of the Earth is thought to be largely composed of iron with nickel and sulfur.Commercially, iron is produced in a blast furnace by heating haematite or magnetite with coke (carbon) and limestone (calcium carbonate). This forms pig iron, which contains about 3% carbon and other impurities, but is used to make steel. Around 1.3 billion tonnes of crude steel are produced worldwide each year.Iron is an essential element for all forms of life and is non-toxic. The average human contains about 4 grams of iron. A lot of this is in haemoglobin, in the blood. Haemoglobin carries oxygen from our lungs to the cells, where it is needed for tissue respiration.Humans need 10–18 milligrams of iron each day. A lack of iron will cause anaemia to develop. Foods such as liver, kidney, molasses, brewer’s yeast, cocoa and liquorice contain a lot of iron.");
    strcpy(atom[25].image_path,"");



    strcpy(atom[26].name,"COBALT");        
    strcpy(atom[26].symbol,"Co");        
    atom[26].atomicnum=27;        
    atom[26].atomicwt=58.93;
    strcpy(atom[26].electronic_configuration,"[Ar] 3d74s2");
    strcpy(atom[26].history,"The tomb of Pharaoh Tutankhamen, who ruled from 1361-1352 BC, contained a small glass object coloured deep blue with cobalt. Cobalt blue was known even earlier in China and was used for pottery glazes.In 1730, chemist Georg Brandt of Stockholm became interested in a dark blue ore from some local copper workings and he eventually proved that it contained a hitherto unrecognised metal and he gave it the name by which its ore was cursed by miners in Germany, where it was sometimes mistaken for a silver ore. He published his results in 1739. For many years his claim to have uncovered a new metal was disputed by other chemists who said his new element was really a compound of iron and arsenic, but eventually it was recognised as an element in its own right.");
    atom[26].melting_point = 1768;
    atom[26].boiling_point = 3200;
    atom[26].ionic_radius = 0.65;
    atom[26].isotopes = 28;
    atom[26].electronegativity = 1.88;
    strcpy(atom[26].color,"Silvery-blue");
    atom[26].group = 9;
    atom[26].period = 4;
    strcpy(atom[26].conductivity,"Electrical Conductivity");
    strcpy(atom[26].luster,"Metallic");
    strcpy(atom[26].phase,"Solid");
    atom[26].density = 8.86;
    strcpy(atom[26].uses,"Cobalt is an essential trace element, and forms part of the active site of vitamin B12. The amount we need is very small, and the body contains only about 1 milligram. Cobalt salts can be given to certain animals in small doses to correct mineral deficiencies. In large doses cobalt is carcinogenic.Cobalt, like iron, can be magnetised and so is used to make magnets. It is alloyed with aluminium and nickel to make particularly powerful magnets.Other alloys of cobalt are used in jet turbines and gas turbine generators, where high-temperature strength is important.Cobalt-60 is a radioactive isotope. It is an important source of gamma-rays. It is widely used in cancer treatment, as a tracer and for radiotherapy.Cobalt is found in the minerals cobaltite, skutterudite and erythrite. Important ore deposits are found in DR Congo, Canada, Australia, Zambia and Brazil. Most cobalt is formed as a by-product of nickel refining.");
    strcpy(atom[26].image_path,"");


    strcpy(atom[27].name,"NICKEL");        
    strcpy(atom[27].symbol,"Ni");        
    atom[27].atomicnum=28;        
    atom[27].atomicwt=58.69;
    strcpy(atom[27].electronic_configuration,"[Ar] 3d84s2 ");
    strcpy(atom[27].history,"Meteorites contain both iron and nickel, and earlier ages used them as a superior form of iron. Because the metal did not rust, it was regarded by the natives of Peru as a kind of silver. A zinc-nickel alloy called pai-t’ung (white copper) was in use in China as long ago as 200 BC. Some even reached Europe.In 1751, Axel Fredrik Cronstedt, working at Stockholm, investigated a new mineral – now called nickeline (NiAs) – which came from a mine at Los, Hälsingland, Sweden. He thought it might contain copper but what he extracted was a new metal which he announced and named nickel in 1754. Many chemists thought it was an alloy of cobalt, arsenic, iron and copper – these elements were present as trace contaminants. It was not until 1775 that pure nickel was produced by Torbern Bergman and this confirmed its elemental nature.");
    atom[27].melting_point = 1728;
    atom[27].boiling_point = 3186;
    atom[27].ionic_radius = 0.69;
    atom[27].isotopes = 5;
    atom[27].electronegativity = 1.91;
    strcpy(atom[27].color,"Silvery white");
    atom[27].group = 10;
    atom[27].period = 4;
    strcpy(atom[27].conductivity,"Electrical conductivity");
    strcpy(atom[27].luster,"Metallic");
    strcpy(atom[27].phase,"Solid");
    atom[27].density = 8.90;
    strcpy(atom[27].uses,"Nickel resists corrosion and is used to plate other metals to protect them. It is, however, mainly used in making alloys such as stainless steel. Nichrome is an alloy of nickel and chromium with small amounts of silicon, manganese and iron. It resists corrosion, even when red hot, so is used in toasters and electric ovens. A copper-nickel alloy is commonly used in desalination plants, which convert seawater into fresh water. Nickel steel is used for armour plating. Other alloys of nickel are used in boat propeller shafts and turbine blades.Nickel is used in batteries, including rechargeable nickel-cadmium batteries and nickel-metal hydride batteries used in hybrid vehicles.Nickel has a long history of being used in coins. The US five-cent piece (known as a ‘nickel’) is 25% nickel and 75% copper.Finely divided nickel is used as a catalyst for hydrogenating vegetable oils. Adding nickel to glass gives it a green colour.");
    strcpy(atom[27].image_path,"");


    strcpy(atom[28].name,"COPPER");        
    strcpy(atom[28].symbol,"Cu");        
    atom[28].atomicnum=29;
    atom[28].atomicwt=63.54;
    strcpy(atom[28].electronic_configuration,"[Ar] 3d104s1 ");
    strcpy(atom[28].history,"Copper beads have been excavated in northern Iraq and which are more than ten thousand years old and presumably made from native copper, nuggets of which can sometimes be found. Copper was widely used in the ancient world as bronze, its alloy with tin, which was used to make cutlery, coins, and tools. In China it was used for bells.Copper is not difficult to extract from it ores, but mineable deposits were relatively rare. Some, such as the copper mine at Falun, Sweden, date from the 1200s, were the source of great wealth. One way to extract the metal was to roast the sulfide ore then leach out the copper sulfate that was formed, with water. This was then trickled over scrap iron on the surface of which the copper deposited, forming a flaky layer that was easily removed.");
    atom[28].melting_point = 1357.7;
    atom[28].boiling_point = 2833;
    atom[28].ionic_radius = 0.73;
    atom[28].isotopes = 29;
    atom[28].electronegativity = 1.90;
    strcpy(atom[28].color,"Reddish-gold");
    atom[28].group = 11;
    atom[28].period = 4;
    strcpy(atom[28].conductivity,"Excellent electrical conductivity");
    strcpy(atom[28].luster,"Metallic");
    strcpy(atom[28].phase,"Solid");
    atom[28].density = 8.96;
    strcpy(atom[28].uses,"Historically, copper was the first metal to be worked by people. The discovery that it could be hardened with a little tin to form the alloy bronze gave the name to the Bronze Age.Traditionally it has been one of the metals used to make coins, along with silver and gold. However, it is the most common of the three and therefore the least valued. All US coins are now copper alloys, and gun metals also contain copper.Most copper is used in electrical equipment such as wiring and motors. This is because it conducts both heat and electricity very well, and can be drawn into wires. It also has uses in construction (for example roofing and plumbing), and industrial machinery (such as heat exchangers).Copper sulfate is used widely as an agricultural poison and as an algicide in water purification.Copper compounds, such as Fehling’s solution, are used in chemical tests for sugar detection.");
    strcpy(atom[28].image_path,"");


    strcpy(atom[29].name,"ZINC");        
    strcpy(atom[29].symbol,"Zn");        
    atom[29].atomicnum=30;        
    atom[29].atomicwt=65.39;
    strcpy(atom[29].electronic_configuration,"[Ar] 3d104s2");
    strcpy(atom[29].history,"Zinc was known to the Romans but rarely used. It was first recognised as a metal in its own right in India and the waste from a zinc smelter at Zawar, in Rajasthan, testifies to the large scale on which it was refined during the period 1100 to the 1500.Zinc refining in China was carried out on a large scale by the 1500s. An East India Company ship which sank off the coast of Sweden in 1745 was carrying a cargo of Chinese zinc and analysis of reclaimed ingots showed them to be almost the pure metal.In 1668, a Flemish metallurgist, P. Moras de Respour, reported the extraction of metallic zinc from zinc oxide, but as far as Europe was concerned zinc was discovered by the German chemist Andreas Marggraf in 1746, and indeed he was the first to recognise it as a new metal.");
    atom[29].melting_point =  692.67;
    atom[29].boiling_point = 1180;
    atom[29].ionic_radius = 0.74;
    atom[29].isotopes = 30;
    atom[29].electronegativity = 1.65;
    strcpy(atom[29].color,"Silvery-white");
    atom[29].group = 12;
    atom[29].period = 4;
    strcpy(atom[29].conductivity,"Thermal Conductivity");
    strcpy(atom[29].luster,"Metallic");
    strcpy(atom[29].phase,"Solid");
    atom[29].density = 7.134;
    strcpy(atom[29].uses,"Most zinc is used to galvanise other metals, such as iron, to prevent rusting. Galvanised steel is used for car bodies, street lamp posts, safety barriers and suspension bridges.Large quantities of zinc are used to produce die-castings, which are important in the automobile, electrical and hardware industries. Zinc is also used in alloys such as brass, nickel silver and aluminium solder.Zinc oxide is widely used in the manufacture of very many products such as paints, rubber, cosmetics, pharmaceuticals, plastics, inks, soaps, batteries, textiles and electrical equipment. Zinc sulfide is used in making luminous paints, fluorescent lights and x-ray screens.");
    strcpy(atom[29].image_path,"");


    strcpy(atom[30].name,"GALLIUM");       
    strcpy(atom[30].symbol,"Ga");        
    atom[30].atomicnum=31;        
    atom[30].atomicwt=69.72;
    strcpy(atom[30].electronic_configuration,"[Ar] 3d104s24p1 ");
    strcpy(atom[30].history,"Gallium was discovered in Paris by Paul-Émile Lecoq de Boisbaudran in 1875. He observed a new violet line in the atomic spectrum of some zinc he had extracted from a sample of zinc blende ore (ZnS) from the Pyrenees. He knew it meant that an unknown element was present. What Boisbaudran didn’t realise was that its existence, and properties, had been predicted by Mendeleev whose periodic table showed there was a gap below aluminium which was yet to be occupied. He forecast that the missing element’s atomic weight would be around 68 and its density would be 5.9 g/cm3.By November of 1875, Boisbaudran had isolated and purified the new metal and shown that it was like aluminium. In December 1875 he announced it to the French Academy of Sciences.");
    atom[30].melting_point = 302.91;
    atom[30].boiling_point = 2502;
    atom[30].ionic_radius = 0.62;
    atom[30].isotopes = 5;
    atom[30].electronegativity = 1.81;
    strcpy(atom[30].color,"Silvery-white");
    atom[30].group = 13;
    atom[30].period = 4;
    strcpy(atom[30].conductivity,"Thermal Conductivity");
    strcpy(atom[30].luster,"Metallic");
    strcpy(atom[30].phase,"Solid ");
    atom[30].density = 5.91;
    strcpy(atom[30].uses,"Gallium arsenide has a similar structure to silicon and is a useful silicon substitute for the electronics industry. It is an important component of many semiconductors. It is also used in red LEDs (light emitting diodes) because of its ability to convert electricity to light. Solar panels on the Mars Exploration Rover contained gallium arsenide. Gallium nitride is also a semiconductor. It has particular properties that make it very versatile. It has important uses in Blu-ray technology, mobile phones, blue and green LEDs and pressure sensors for touch switches.Gallium readily alloys with most metals. It is particularly used in low-melting alloys.It has a high boiling point, which makes it ideal for recording temperatures that would vaporise a thermometer.");
    strcpy(atom[30].image_path,"");


    strcpy(atom[31].name,"GERMANIUM");        
    strcpy(atom[31].symbol,"Ge");        
    atom[31].atomicnum=32;        
    atom[31].atomicwt=72.64;
    strcpy(atom[31].electronic_configuration,"[Ar] 3d104s24p2");
    strcpy(atom[31].history,"Germanium was discovered by Clemens A. Winkler at Freiberg, Germany, in 1886. Its existence had been predicted by Mendeleev who predicted its atomic weight would be about 71 and that its density around 5.5 g/cm3. In September 1885 a miner working in the Himmelsfürst silver mine near Freiberg, came across an unusual ore. It was passed to Albin Weisbach at the nearby Mining Academy who certified it was a new mineral, and asked his colleague Winkler to analyse it. He found its composition to be 75% silver, 18% sulfur, and 7% he could not explain. By February 1886, he realised it was a new metal-like element and as its properties were revealed, it became clear that it was the missing element below silicon as Mendeleev had predicted. The mineral from which it came we know as argyrodite, Ag8GeS6.");
    atom[31].melting_point = 1211.4;
    atom[31].boiling_point = 3106;
    atom[31].ionic_radius = 0.53;
    atom[31].isotopes = 29;
    atom[31].electronegativity = 2.01;
    strcpy(atom[31].color,"Silvery-white");
    atom[31].group = 14;
    atom[31].period = 4;
    strcpy(atom[31].conductivity,"Thermal conductivity");
    strcpy(atom[31].luster,"Metallic");
    strcpy(atom[31].phase,"Solid ");
    atom[31].density = 5.3234 ;
    strcpy(atom[31].uses,"Germanium is a semiconductor. The pure element was commonly doped with arsenic, gallium or other elements and used as a transistor in thousands of electronic applications. Today, however, other semiconductors have replaced it. Germanium oxide has a high index of refraction and dispersion. This makes it suitable for use in wide-angle camera lenses and objective lenses for microscopes. This is now the major use for this element. Germanium is also used as an alloying agent (adding 1% germanium to silver stops it from tarnishing), in fluorescent lamps and as a catalyst.Both germanium and germanium oxide are transparent to infrared radiation and so are used in infrared spectroscopes.");
    strcpy(atom[31].image_path,"");


    strcpy(atom[32].name,"ARSENIC");        
    strcpy(atom[32].symbol,"As");        
    atom[32].atomicnum=33;        
    atom[32].atomicwt=74.92;
    strcpy(atom[32].electronic_configuration,"[Ar] 3d104s24p3");
    strcpy(atom[32].history,"Arsenic was known to the ancient Egyptian, and is mentioned in one papyrus as a ways of gilding metals. The Greek philosopher Theophrastus knew of two arsenic sulfide minerals: orpiment (As2S3) and realgar (As4S4). The Chinese also knew about arsenic as the writings of Pen Ts’ao Kan-Mu. He compiled his great work on the natural world in the 1500s, during the Ming dynasty. He noted the toxicity associated with arsenic compounds and mentioned their use as pesticides in rice fields. A more dangerous form of arsenic, called white arsenic, has also been long known. This was the trioxide, As2O3, and was a by-product of copper refining. When this was mixed with olive oil and heated it yielded arsenic metal itself. The discovery of the element arsenic is attributed to Albertus Magnus in the 1200s.");
    atom[32].melting_point = 889;
    atom[32].boiling_point = 889;
    atom[32].ionic_radius = 0.58;
    atom[32].isotopes = 30;
    atom[32].electronegativity = 2.18;
    strcpy(atom[32].color,"Silver-grey");
    atom[32].group = 15;
    atom[32].period = 4;
    strcpy(atom[32].conductivity,"Thermal conductivity");
    strcpy(atom[32].luster,"Metallic");
    strcpy(atom[32].phase,"Solid");
    atom[32].density = 5.75;
    strcpy(atom[32].uses,"Arsenic is a well-known poison. Arsenic compounds are sometimes used as rat poisons and insecticides but their use is strictly controlled. Surprisingly, arsenic can also have medicinal applications. In Victorian times, Dr Fowler’s Solution (potassium arsenate dissolved in water) was a popular cure-all tonic that was even used by Charles Dickens. Today, organoarsenic compounds are added to poultry feed to prevent disease and improve weight gain. Arsenic is used as a doping agent in semiconductors (gallium arsenide) for solid-state devices. It is also used in bronzing, pyrotechnics and for hardening shot. Arsenic compounds can be used to make special glass and preserve wood.");
    strcpy(atom[32].image_path,"");


    strcpy(atom[33].name,"SELENIUM");        
    strcpy(atom[33].symbol,"Se");        
    atom[33].atomicnum=34;       
    atom[33].atomicwt=78.96;
    strcpy(atom[33].electronic_configuration,"[Ar] 3d104s24p4 ");
    strcpy(atom[33].history,"Selenium was discovered by Jöns Jacob Berzelius at Stockholm in 1817. He had shares in a sulfuric acid works and he was intrigued by a red-brown sediment which collected at the bottom of the chambers in which the acid was made. At first he thought it was the element tellurium because it gave off a strong smell of radishes when heated, but he eventually realised that it was in fact a new element. He also noted that it was like sulfur and indeed had properties intermediate between sulfur and tellurium. Berzelius found that selenium was present in samples of tellurium and gave that element its characteristic smell. He also became affected by it personally – it can be absorbed through the skin – and it caused him to experience the bad breath associated with those who work with this element.");
    atom[33].melting_point = 494;
    atom[33].boiling_point = 958;
    atom[33].ionic_radius =  0.50;
    atom[33].isotopes = 11;
    atom[33].electronegativity = 2.55;
    strcpy(atom[33].color," silvery or red powder.");
    atom[33].group = 16;
    atom[33].period = 4;
    strcpy(atom[33].conductivity,"Thermal conductivity");
    strcpy(atom[33].luster,"Metallic");
    strcpy(atom[33].phase,"Solid ");
    atom[33].density = 4.809 ;
    strcpy(atom[33].uses,"The biggest use of selenium is as an additive to glass. Some selenium compounds decolourise glass, while others give a deep red colour. Selenium can also be used to reduce the transmission of sunlight in architectural glass, giving it a bronze tint. Selenium is used to make pigments for ceramics, paint and plastics. Selenium has both a photovoltaic action (converts light to electricity) and a photoconductive action (electrical resistance decreases with increased illumination). It is therefore useful in photocells, solar cells and photocopiers. It can also convert AC electricity to DC electricity, so is extensively used in rectifiers. Selenium is toxic to the scalp fungus that causes dandruff so it is used in some anti-dandruff shampoos. Selenium is also used as an additive to make stainless steel.");
    strcpy(atom[33].image_path,"");


    strcpy(atom[34].name,"BROMINE");        
    strcpy(atom[34].symbol,"Br");        
    atom[34].atomicnum=35;        
    atom[34].atomicwt=79.90;
    strcpy(atom[34].electronic_configuration,"[Ar] 3d104s24p5 ");
    strcpy(atom[34].history,"Antoine-Jérôme Balard discovered bromine while investigating some salty water from Montpellier, France. He took the concentrated residue which remained after most of the brine had evaporated and passed chlorine gas into it. In so doing he liberated an orange-red liquid which he deduced was a new element. He sent an account of his findings to the French Academy’s journal in 1826. A year earlier, a student at Heidelberg, Carl Löwig, had brought his professor a sample of bromine which he had produced from the waters of a natural spring near his home at Keruznach. He was asked to produce more of it, and while he was doing so Balard published his results and so became known at its discoverer.");
    atom[34].melting_point = 266;
    atom[34].boiling_point = 332;
    atom[34].ionic_radius = 1.96;
    atom[34].isotopes = 79;
    atom[34].electronegativity = 2.96;
    strcpy(atom[34].color,"Deep-red");
    atom[34].group = 17;
    atom[34].period = 4;
    strcpy(atom[34].conductivity,"Very poor conductor of electricity");
    strcpy(atom[34].luster,"Shiny");
    strcpy(atom[34].phase,"Liquid ");
    atom[34].density = 3.1028;
    strcpy(atom[34].uses,"Bromine is used in many areas such as agricultural chemicals, dyestuffs, insecticides, pharmaceuticals and chemical intermediates. Some uses are being phased out for environmental reasons, but new uses continue to be found. Bromine compounds can be used as flame retardants. They are added to furniture foam, plastic casings for electronics and textiles to make them less flammable. However, the use of bromine as a flame retardant has been phased out in the USA because of toxicity concerns. Organobromides are used in halon fire extinguishers that are used to fight fires in places like museums, aeroplanes and tanks. Silver bromide is a chemical used in film photography.");
    strcpy(atom[34].image_path,"");
 

    strcpy(atom[35].name,"KRYPTON");        
    strcpy(atom[35].symbol,"Kr");        
    atom[35].atomicnum=36;        
    atom[35].atomicwt=83.80;
    strcpy(atom[35].electronic_configuration,"[Ar] 3d104s24p6");
    strcpy(atom[35].history,"Having discovered the noble gas argon, extracted from air, William Ramsay and Morris William Travers of University College, London, were convinced this must be one of a new group of elements of the periodic table. They decided others were likely to be hidden in the argon and by a process of liquefaction and evaporation they hoped it might leave behind a heavier component, and it did. It yielded krypton in the afternoon of 30th May 1898, and they were able to isolate about 25 cm3 of the new gas. This they immediately tested in a spectrometer, and saw from its atomic spectrum that it was a new element.");
    atom[35].melting_point = 115.78;
    atom[35].boiling_point = 119.73;
    atom[35].ionic_radius = 1.16;
    atom[35].isotopes = 34;
    atom[35].electronegativity = 3.00;
    strcpy(atom[35].color,"Colorless");
    atom[35].group = 18;
    atom[35].period = 4;
    strcpy(atom[35].conductivity,"Thermal Conductivity");
    strcpy(atom[35].luster,"No luster");
    strcpy(atom[35].phase,"Gas");
    atom[35].density = 0.0034;
    strcpy(atom[35].uses,"Krypton is used commercially as a filling gas for energy-saving fluorescent lights. It is also used in some flash lamps used for high-speed photography. Unlike the lighter gases in its group, it is reactive enough to form some chemical compounds. For example, krypton will react with fluorine to form krypton fluoride. Krypton fluoride is used in some lasers. Radioactive krypton was used during the Cold War to estimate Soviet nuclear production. The gas is a product of all nuclear reactors, so the Russian share was found by subtracting the amount that came from Western reactors from the total in the air. From 1960 to 1983 the isotope krypton-86 was used to define the standard measure of length. One metre was defined as exactly 1,650,763.73 wavelengths of a line in the atomic spectrum of the isotope.");
    strcpy(atom[35].image_path,"");


    strcpy(atom[36].name,"RUBIDIUM");        
    strcpy(atom[36].symbol,"Rb");        
    atom[36].atomicnum=37;      
    atom[36].atomicwt=85.46;
    strcpy(atom[36].electronic_configuration,"[Kr] 5s1 ");
    strcpy(atom[36].history,"The lithium potassium mineral lepidolite was discovered in the 1760s and it behaved oddly. When thrown on to glowing coals it frothed and then hardened like glass. Analysis showed it to contain lithium and potassium, but it held a secret: rubidium. In 1861, Robert Bunsen and Gustav Kirchhoff, of the University of Heidelberg, dissolved the ore in acid and then precipitated the potassium it contained which carried down another heavier alkali metal. By carefully washing this precipitate with boiling water they removed the more soluble potassium component and then confirmed that they really had a new element by examining the atomic spectrum of what remained. This showed two intense ruby red lines never seen before, indicating a new element, which they named after this colour. A sample of pure rubidium metal was eventually produced in 1928.");
    atom[36].melting_point = 312.45;
    atom[36].boiling_point = 961;
    atom[36].ionic_radius = 1.61;
    atom[36].isotopes = 36;
    atom[36].electronegativity = 0.82;
    strcpy(atom[36].color,"Silvery-white");
    atom[36].group = 1;
    atom[36].period = 5;
    strcpy(atom[36].conductivity,"Thermal Conductivity");
    strcpy(atom[36].luster,"Metallic");
    strcpy(atom[36].phase,"Solid ");
    atom[36].density = 1.53;
    strcpy(atom[36].uses,"Rubidium is little used outside research. It has been used as a component of photocells, to remove traces of oxygen from vacuum tubes and to make special types of glass. It is easily ionised so was considered for use in ion engines, but was found to be less effective than caesium. It has also been proposed for use as a working fluid for vapour turbines and in thermoelectric generators. Rubidium nitrate is sometimes used in fireworks to give them a purple colour.");
    strcpy(atom[36].image_path,"");


    strcpy(atom[37].name,"STRONTIUM");        
    strcpy(atom[37].symbol,"Sr");        
    atom[37].atomicnum=38;        
    atom[37].atomicwt=87.62;
    strcpy(atom[37].electronic_configuration,"[Kr] 5s2");
    strcpy(atom[37].history,"In 1787, an unusual rock which had been found in a lead mine at Strontian, Scotland, was investigated by Adair Crawford, an Edinburgh doctor. He realised it was a new mineral containing an unknown ‘earth’ which he named strontia. In 1791, another Edinburgh man, Thomas Charles Hope, made a fuller investigation of it and proved it was a new element. He also noted that it caused the flame of a candle to burn red. Meanwhile Martin Heinrich Klaproth in Germany was working with the same mineral and he produced both strontium oxide and strontium hydroxide. Strontium metal itself was isolated in 1808 at the Royal Institution in London by Humphry Davy by means of electrolysis, using the method with which he had already isolated sodium and potassium.");
    atom[37].melting_point = 1050;
    atom[37].boiling_point = 1650;
    atom[37].ionic_radius = 0.113;
    atom[37].isotopes = 16;
    atom[37].electronegativity = 0.95;
    strcpy(atom[37].color,"Silver-white yellowish");
    atom[37].group = 2;
    atom[37].period = 5;
    strcpy(atom[37].conductivity,"Thermal Conductivity");
    strcpy(atom[37].luster,"Metallic");
    strcpy(atom[37].phase,"Solid");
    atom[37].density = 2.64 ;
    strcpy(atom[37].uses,"Strontium is best known for the brilliant reds its salts give to fireworks and flares. It is also used in producing ferrite magnets and refining zinc. Modern ‘glow-in-the-dark’ paints and plastics contain strontium aluminate. They absorb light during the day and release it slowly for hours afterwards. Strontium-90, a radioactive isotope, is a by-product of nuclear reactors and present in nuclear fallout. It has a half-life of 28 years. It is absorbed by bone tissue instead of calcium and can destroy bone marrow and cause cancer. However, it is also useful as it is one of the best high-energy beta-emitters known. It can be used to generate electricity for space vehicles, remote weather stations and navigation buoys. It can also be used for thickness gauges and to remove static charges from machinery handling paper or plastic.");
    strcpy(atom[37].image_path,"");


    strcpy(atom[38].name,"YTTRIUM");        
    strcpy(atom[38].symbol,"Y");        
    atom[38].atomicnum=39;        
    atom[38].atomicwt=88.90;
    strcpy(atom[38].electronic_configuration,"[Kr] 4d15s2");
    strcpy(atom[38].history,"In 1787, Karl Arrhenius came across an unusual black rock in an old quarry at Ytterby, near Stockholm. He thought he had found a new tungsten mineral, and passed the specimen over to Johan Gadolin based in Finland. In 1794, Gadolin announced that it contained a new 'earth' which made up 38 per cent of its weight. It was called an’ earth’ because it was yttrium oxide, Y2O3, which could not be reduced further by heating with charcoal. The metal itself was first isolated in 1828 by Friedrich Wöhler and made by reacting yttrium chloride with potassium. Yet, yttrium was still hiding other elements. In 1843, Carl Mosander investigated yttrium oxide more thoroughly and found that it consisted of three oxides: yttrium oxide, which was white; terbium oxide, which was yellow; and erbium oxide, which was rose-coloured.");
    atom[38].melting_point = 1795;
    atom[38].boiling_point = 3618;
    atom[38].ionic_radius = 1.02;
    atom[38].isotopes = 60;
    atom[38].electronegativity = 1.22;
    strcpy(atom[38].color,"Silvery-metallic");
    atom[38].group = 3;
    atom[38].period = 5;
    strcpy(atom[38].conductivity,"Thermal Conductivity");
    strcpy(atom[38].luster,"Metallic");
    strcpy(atom[38].phase,"Solid");
    atom[38].density = 4.47;
    strcpy(atom[38].uses,"Yttrium is often used as an additive in alloys. It increases the strength of aluminium and magnesium alloys. It is also used in the making of microwave filters for radar and has been used as a catalyst in ethene polymerisation. Yttrium-aluminium garnet (YAG) is used in lasers that can cut through metals. It is also used in white LED lights. Yttrium oxide is added to the glass used to make camera lenses to make them heat and shock resistant. It is also used to make superconductors. Yttrium oxysulfide used to be widely used to produce red phosphors for old-style colour television tubes. The radioactive isotope yttrium-90 has medical uses. It can be used to treat some cancers, such as liver cancer.");
    strcpy(atom[38].image_path,"");


    strcpy(atom[39].name,"ZIRCONIUM");        
    strcpy(atom[39].symbol,"Zr");        
    atom[39].atomicnum=40;
    atom[39].atomicwt=91.22;
    strcpy(atom[39].electronic_configuration,"[Kr] 4d25s2");
    strcpy(atom[39].history,"Gems that contain zirconium were known in ancient times as zircon. In 1789, the German chemist, Martin Klaproth analysed a zircon and separated zirconium in the form of its ‘earth’ zirconia, which is the oxide ZrO2. Klaproth failed to isolate the pure metal itself, and Humphry Davy also failed when he tried electrolysis in 1808. It was not until 1824 that the element was isolated, when the Swedish chemist Jöns Berzelius heated potassium hexafluorozirconate (K2ZrF6) with potassium metal and obtained some zirconium as a black powder. Totally pure zirconium was only produced in 1925 by the Dutch chemists Anton Eduard van Arkel and Jan Hendrik de Boer by the decomposition of zirconium tetraiodide (ZrI4)");
    atom[39].melting_point = 2127;
    atom[39].boiling_point = 4679;
    atom[39].ionic_radius = 0.84;
    atom[39].isotopes = 33;
    atom[39].electronegativity = 1.33;
    strcpy(atom[39].color,"Grayish-white");
    atom[39].group = 4;
    atom[39].period = 5;
    strcpy(atom[39].conductivity,"Thermal conductivity");
    strcpy(atom[39].luster,"Metallic");
    strcpy(atom[39].phase,"Solid");
    atom[39].density = 6.52;
    strcpy(atom[39].uses,"Zirconium does not absorb neutrons, making it an ideal material for use in nuclear power stations. More than 90% of zirconium is used in this way. Nuclear reactors can have more than 100,000 metres of zirconium alloy tubing. With niobium, zirconium is superconductive at low temperatures and is used to make superconducting magnets. Zirconium metal is protected by a thin oxide layer making it exceptionally resistant to corrosion by acids, alkalis and seawater. For this reason it is extensively used by the chemical industry. Zirconium(IV) oxide is used in ultra-strong ceramics. It is used to make crucibles that will withstand heat-shock, furnace linings, foundry bricks, abrasives and by the glass and ceramics industries. It is so strong that even scissors and knives can be made from it. It is also used in cosmetics, antiperspirants, food packaging and to make microwave filters.");
    strcpy(atom[39].image_path,"");


    strcpy(atom[40].name,"NIOBIUM");
        
    strcpy(atom[40].symbol,"Nb");
        
    atom[40].atomicnum=41;
        
    atom[40].atomicwt=92.90;
    strcpy(atom[41].name,"MOLYBDENUM");
        
    strcpy(atom[41].symbol,"Mo");

    atom[41].atomicnum=42;
        
    atom[41].atomicwt=95.94;
    strcpy(atom[42].name,"TECHNETIUM");
        
    strcpy(atom[42].symbol,"Tc");
        
    atom[42].atomicnum=43;
        
    atom[42].atomicwt=98.00;
    strcpy(atom[43].name,"RUTHENIUM");
        
    strcpy(atom[43].symbol,"Ru");
        
    atom[43].atomicnum=44;
        
    atom[43].atomicwt=101.07;

    strcpy(atom[44].name,"RHODIUM");
        
    strcpy(atom[44].symbol,"Rh");
        
    atom[44].atomicnum=45;
        
    atom[44].atomicwt=102.90;
    strcpy(atom[45].name,"PALLADIUM");
        
    strcpy(atom[45].symbol,"Pd");
        
    atom[45].atomicnum=46;
        
    atom[45].atomicwt=106.42;

    strcpy(atom[46].name,"SILVER");
        
    strcpy(atom[46].symbol,"Ag");
        
    atom[46].atomicnum=47;
        
    atom[46].atomicwt=107.86;
    strcpy(atom[47].name,"CADMIUM");
        
    strcpy(atom[47].symbol,"Cd");
        
    atom[47].atomicnum=48;
        
    atom[47].atomicwt=112.41;
    strcpy(atom[48].name,"INDIUM");
        
    strcpy(atom[48].symbol,"In");
        
    atom[48].atomicnum=49;
        
    atom[48].atomicwt=114.81;
    strcpy(atom[49].name,"TIN");
        
    strcpy(atom[49].symbol,"Sn");
        
    atom[49].atomicnum=50;
        
    atom[49].atomicwt=118.71;
    strcpy(atom[50].name,"ANTIMONY");
        
    strcpy(atom[50].symbol,"Sb");
        
    atom[50].atomicnum=51;
        
    atom[50].atomicwt=121.76;
    strcpy(atom[51].name,"TELLURIUM");
        
    strcpy(atom[51].symbol,"Te");
        
    atom[51].atomicnum=52;
        
    atom[51].atomicwt=127.60;
    strcpy(atom[52].name,"IODINE");
        
    strcpy(atom[52].symbol,"I");
        
    atom[52].atomicnum=53;
        
    atom[52].atomicwt=126.90;
    strcpy(atom[53].name,"XENON");
        
    strcpy(atom[53].symbol,"Xe");
        
    atom[53].atomicnum=54;
        
    atom[53].atomicwt=131.29;
    strcpy(atom[54].name,"CESIUM");
        
    strcpy(atom[54].symbol,"Cs");
        
    atom[54].atomicnum=55;
        
    atom[54].atomicwt=132.906;
    strcpy(atom[55].name,"BARIUM");
        
    strcpy(atom[55].symbol,"Ba");
        
    atom[55].atomicnum=56;
        
    atom[55].atomicwt=137.372;
    strcpy(atom[56].name,"LANTHANUM");
        
    strcpy(atom[56].symbol,"La");
        
    atom[56].atomicnum=57;
        
    atom[56].atomicwt=138.906;

    strcpy(atom[57].name,"CERIUM");
        
    strcpy(atom[57].symbol,"Ce");
        
    atom[57].atomicnum=58;
        
    atom[57].atomicwt=140.116;

    strcpy(atom[58].name,"PRASEODYMIUM");
        
    strcpy(atom[58].symbol,"Pr");
	
	atom[58].atomicnum=59;
		
	atom[58].atomicwt=140.906;
	
	strcpy(atom[59].name,"NEODYMIUM");
		
	strcpy(atom[59].symbol,"Nd");
		
	atom[59].atomicnum=60;
		
	atom[59].atomicwt=144.240;
	
	strcpy(atom[60].name,"PROMETHIUM");
		
	strcpy(atom[60].symbol,"Pm");
		
	atom[60].atomicnum=61;
		
	atom[60].atomicwt=145.000;
	strcpy(atom[61].name,"SAMARIUM");
		
	strcpy(atom[61].symbol,"Sm");
		
	atom[61].atomicnum=62;
		
	atom[61].atomicwt=150.36;
	strcpy(atom[62].name,"EUROPIUM");
		
	strcpy(atom[62].symbol,"Eu");
		
	atom[62].atomicnum=63;
		
	atom[62].atomicwt=151.96;
	strcpy(atom[63].name,"GADOLINIUM");
		
	strcpy(atom[63].symbol,"Gd");
		
	atom[63].atomicnum=64;
		
	atom[63].atomicwt=157.25;
	strcpy(atom[64].name,"SAMARIUM");
		
	strcpy(atom[64].symbol,"Sm");
		
	atom[64].atomicnum=65;
		
	atom[64].atomicwt=150.36;
	strcpy(atom[65].name,"DYSPROSIUM");
		
	strcpy(atom[65].symbol,"Dy");
		
	atom[65].atomicnum=66;
		
	atom[65].atomicwt=162.50;
	strcpy(atom[66].name,"HOLMINM");
		
	strcpy(atom[66].symbol,"Ho");
		
	atom[66].atomicnum=67;
		
	atom[66].atomicwt=164.93;
	strcpy(atom[67].name,"ERBIUM");
		
	strcpy(atom[67].symbol,"Er");
		
	atom[67].atomicnum=68;
		
	atom[67].atomicwt=167.25;
	strcpy(atom[68].name,"THULIUM");
		
	strcpy(atom[68].symbol,"Tm");
		
	atom[68].atomicnum=69;
		
	atom[68].atomicwt=168.93;
	strcpy(atom[69].name,"YTTERBIUM");
		
	strcpy(atom[69].symbol,"Yb");
		
	atom[69].atomicnum=70;
		
	atom[69].atomicwt=173.04;
	strcpy(atom[70].name,"LUTETIUM");
		
	strcpy(atom[70].symbol,"Lu");
		
	atom[70].atomicnum=71;
		
	atom[70].atomicwt=174.96;
	strcpy(atom[71].name,"HAFNIUM");
		
	strcpy(atom[71].symbol,"Hf");
		
	atom[71].atomicnum=72;
		
	atom[71].atomicwt=178.49;
	strcpy(atom[72].name,"TANTALUM");
		
	strcpy(atom[72].symbol,"Ta");
		
	atom[72].atomicnum=73;
		
	atom[72].atomicwt=180.94;
	strcpy(atom[73].name,"TUNGSTEN");
		
	strcpy(atom[73].symbol,"Lu");
		
	atom[73].atomicnum=74;
		
	atom[73].atomicwt=174.96;
	strcpy(atom[74].name,"RHENIUM");
		
	strcpy(atom[74].symbol,"Re");
		
	atom[74].atomicnum=75;
		
	atom[74].atomicwt=186.84;
	
	
	strcpy(atom[75].name,"OSMIUM");
		
	strcpy(atom[75].symbol,"Os");
		
	atom[75].atomicnum=76;
		
	atom[75].atomicwt=190.23;
	
	
	strcpy(atom[76].name,"IRIDIUM");
		
	strcpy(atom[76].symbol,"Ir");
		
	atom[76].atomicnum=77;
		
	atom[76].atomicwt=192.21;
	strcpy(atom[77].name,"PLATINUM");
		
	strcpy(atom[77].symbol,"Pt");
		
	atom[77].atomicnum=78;
		
	atom[77].atomicwt=195.07;
	strcpy(atom[78].name,"GOLD");
		
	strcpy(atom[78].symbol,"Au");
		
	atom[78].atomicnum=79;
		
	atom[78].atomicwt=196.96;
	strcpy(atom[79].name,"MERCURY");
		
	strcpy(atom[79].symbol,"Hg");
		
	atom[79].atomicnum=80;
		
	atom[79].atomicwt=200.59;
	strcpy(atom[80].name,"THALLIUM");
		
	strcpy(atom[80].symbol,"Tl");
		
	atom[80].atomicnum=81;
		
	atom[80].atomicwt=201.38;
	
	
	
	
	
	
	
	
	
	
	strcpy(atom[81].name,"LEAD");
		
	strcpy(atom[81].symbol,"Pb");
		
	atom[81].atomicnum=82;
		
	atom[81].atomicwt=201.20;
	
	
	strcpy(atom[82].name,"BISMITH");
		
	strcpy(atom[82].symbol,"Bi");
		
	atom[82].atomicnum=83;
		
	atom[82].atomicwt=208.98;
	
	
	strcpy(atom[83].name,"POLONIUM");
		
	strcpy(atom[83].symbol,"Po");
		
	atom[83].atomicnum=84;
		
	atom[83].atomicwt=209.00;
	
	
	strcpy(atom[84].name,"Astatine");
		
	strcpy(atom[84].symbol,"At");
		
	atom[84].atomicnum=85;
		
	atom[84].atomicwt=210.00;
	
	
	strcpy(atom[85].name,"RADON");
		
	strcpy(atom[85].symbol,"Rn");
		
	atom[85].atomicnum=86;
		
	atom[85].atomicwt=222.00;
	
	
	strcpy(atom[86].name,"FRANCIUM");
		
	strcpy(atom[86].symbol,"Fr");
		
	atom[86].atomicnum=87;
		
	atom[86].atomicwt=223.00;
	
	
	strcpy(atom[87].name,"RADIUM");
		
	strcpy(atom[87].symbol,"Ra");
		
	atom[87].atomicnum=88;
		
	atom[87].atomicwt=226.00;
	
	
	strcpy(atom[88].name,"ACTINIUM");
		
	strcpy(atom[88].symbol,"Ac");
		
	atom[88].atomicnum=89;
		
	atom[88].atomicwt=227.00;
	
	
	strcpy(atom[89].name,"THORIUM");
		
	strcpy(atom[89].symbol,"Th");
		
	atom[89].atomicnum=90;
		
	atom[89].atomicwt=232.03;
	strcpy(atom[90].name,"PROTACTINIUM");
		
	strcpy(atom[90].symbol,"Pa");
		
	atom[90].atomicnum=91;
		
	atom[90].atomicwt=231.03;
	
	
	
	
	strcpy(atom[91].name,"URANIUM");
		
	strcpy(atom[91].symbol,"U");
		
	atom[91].atomicnum=92;
		
	atom[91].atomicwt=238.02;
	
	
	
	
	strcpy(atom[92].name,"NEPTUNIUM");
		
	strcpy(atom[92].symbol,"Np");
		
	atom[92].atomicnum=93;
		
	atom[92].atomicwt=237.00;
	
	
	
	
	strcpy(atom[93].name,"PLUTONIUM");
		
	strcpy(atom[93].symbol,"Pu");
		
	atom[93].atomicnum=94;
		
	atom[93].atomicwt=244.00;
	
	
	
	
	strcpy(atom[94].name,"AMERICIUM");
		
	strcpy(atom[94].symbol,"Am");
		
	atom[94].atomicnum=95;
		
	atom[94].atomicwt=243.00;
	strcpy(atom[95].name,"CURIUM");
		
	strcpy(atom[95].symbol,"Cm");
		
	atom[95].atomicnum=96;
		
	atom[95].atomicwt=247.00;
	
	
	
	
	
	
	
	
	strcpy(atom[96].name,"BERKELIUM");
		
	strcpy(atom[96].symbol,"Bk");
		
	atom[96].atomicnum=97;
		
	atom[96].atomicwt=247.00;
	
	
	
	
	strcpy(atom[97].name,"CALIFONIUM");
		
	strcpy(atom[97].symbol,"Cf");
		
	atom[97].atomicnum=98;
		
	atom[97].atomicwt=251.00;
	
	
	
	
	strcpy(atom[98].name,"EINSTEINIUM");
		
	strcpy(atom[98].symbol,"Es");
		
	atom[98].atomicnum=99;
		
	atom[98].atomicwt=252.00;
	
	
	
	
	strcpy(atom[99].name,"FERMIUM");
		
	strcpy(atom[99].symbol,"Fm");
		
	atom[99].atomicnum=257.00;
		
	atom[99].atomicwt=231.03;
	
	
	
	
	strcpy(atom[100].name,"MENDELEVIUM");
		
	strcpy(atom[100].symbol,"Md");
		
	atom[100].atomicnum=101;
		
	atom[100].atomicwt=258.00;
	
	
	
	
	strcpy(atom[101].name,"NOBELIUM");
		
	strcpy(atom[101].symbol,"Np");
		
	atom[101].atomicnum=102;
		
	atom[101].atomicwt=259.00;
	
	
	
	
	strcpy(atom[102].name,"LAWRENCIUM");
		
	strcpy(atom[102].symbol,"Lr");
		
	atom[102].atomicnum=103;
		
	atom[102].atomicwt=262.00;
	
	
	
	
	strcpy(atom[103].name,"RUTHERFORDIUM");
		
	strcpy(atom[103].symbol,"Rf");
		
	atom[103].atomicnum=104;
		
	atom[103].atomicwt=261.00;
	
	
	
	
	strcpy(atom[104].name,"DUBNIUM");
		
	strcpy(atom[104].symbol,"Db");
		
	atom[104].atomicnum=105;
		
	atom[104].atomicwt=262.00;
	strcpy(atom[105].name,"SEABORGIUM");
		
	strcpy(atom[105].symbol,"Sg");
		
	atom[105].atomicnum=106;
		
	atom[105].atomicwt=266.00;
	
	
	
	
	strcpy(atom[106].name,"BOHRIUM");
		
	strcpy(atom[106].symbol,"Bh");
		
	atom[106].atomicnum=107;
		
	atom[106].atomicwt=264.00;
	
	
	
	
	strcpy(atom[107].name,"HASSSIUM");
		
	strcpy(atom[107].symbol,"Hs");
		
	atom[107].atomicnum=108;
		
	atom[107].atomicwt=277.00;
	strcpy(atom[108].name,"Meinerium");
		
	strcpy(atom[108].symbol,"Mt");
		
	atom[108].atomicnum=109;
		
	atom[108].atomicwt=268.00;


}
