//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 200.146773 on Stable branch
// Generated with ALiVE version 1.12.1.2002131
//////////////////////////////////////////////////////////////////////////////////

class CfgGroups {
    class Indep {

        class TAMSF_VSC_I {
            name = "Valice Security Company";

            class Infantry {
                name = "Infantry";

                class TAMSF_VSC_FTeam {
                    name = "Fire Team";
                    side = 2;
                    faction = "TAMSF_VSC_I";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TAMSF_VSC_TLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Grenadier";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Operator_LAT";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Operator";
                    };
                };

                class TAMSF_VSC_Section {
                    name = "Section";
                    side = 2;
                    faction = "TAMSF_VSC_I";
                    icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TAMSF_VSC_TLeader";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Grenadier";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_ATOperator";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Medic";
                    };
                    class Unit4 {
                        position[] = {-10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Marksman";
                    };
                    class Unit5 {
                        position[] = {15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Operator";
                    };
                    class Unit6 {
                        position[] = {-15,-15,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Operator_LAT";
                    };
                };

            };

            class SpecOps {
                name = "Special Forces";

                class TAMSF_VSC_SniperTeam {
                    name = "Sniper Team";
                    side = 2;
                    faction = "TAMSF_VSC_I";
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_SniperM24";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_Operator";
                    };
                };

                class TAMSF_VSC_AM_Team {
                    name = "Anti-Materiel Team";
                    side = 2;
                    faction = "TAMSF_VSC_I";
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_M107";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_Operator";
                    };
                };

                class TAMSF_VSC_Recon_Team {
                    name = "Recon Team";
                    side = 2;
                    faction = "TAMSF_VSC_I";
                    icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";
                    rarityGroup = 0.5;

                    class Unit0 {
                        position[] = {0,0,0};
                        rank = "SERGEANT";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_Operator";
                    };
                    class Unit1 {
                        position[] = {5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_Medic";
                    };
                    class Unit2 {
                        position[] = {-5,-5,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_SniperM24";
                    };
                    class Unit3 {
                        position[] = {10,-10,0};
                        rank = "PRIVATE";
                        side = 2;
                        vehicle = "TAMSF_VSC_Recon_Operator";
                    };
                };

            };

            class Motorized {
                name = "Motorized Infantry";

            };

            class Motorized_MTP {
                name = "Motorized Infantry (MTP)";

            };

            class Support {
                name = "Support Infantry";

            };

            class Mechanized {
                name = "Mechanized Infantry";

            };

            class Armored {
                name = "Armor";

            };

            class Artillery {
                name = "Artillery";

            };

            class Naval {
                name = "Naval";

            };

            class Air {
                name = "Air";

            };


        };

    };
};