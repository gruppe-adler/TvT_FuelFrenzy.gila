class mafia_desert_ger {
    class AllUnits {
        uniform[] = {"UK3CB_ADE_O_U_01","UK3CB_ADE_O_U_01_B","UK3CB_ADE_O_U_01_C","UK3CB_ADE_O_U_01_D","UK3CB_ADE_O_U_01_E","UK3CB_ADE_O_U_01_F"};
        vest = "UK3CB_TKA_B_V_GA_LITE_BLK";
        backpack = "UK3CB_CW_SOV_O_LATE_B_Sidor_RIF";
        headgear[] = {"UK3CB_ANA_B_H_6b27m_ESS_WDL"};
        goggles[] = {"TRYK_Beard", "TRYK_Beard", "TRYK_Beard_BW", "TRYK_Beard2", "TRYK_Beard_BW2"};

        primaryWeapon = "rhs_weap_aks74n";
        primaryWeaponOptics = "";
        primaryWeaponMagazine = "rhs_30Rnd_545x39_7N6M_plum_AK";
        primaryWeaponPointer = "";
        primaryWeaponMuzzle = "";
        primaryWeaponUnderbarrel = "";
        primaryWeaponUnderbarrelMagazine = "";

        secondaryWeapon = "";
        secondaryWeaponMagazine = "";

        handgunWeapon = "rhs_weap_cz99";
        handgunWeaponMagazine = "rhssaf_mag_15Rnd_9x19_FMJ";

        binoculars = "Binocular";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ItemWatch";
        gps = "ItemGPS";
        radio = "tf_fadak";
        nvgoggles = "";

        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
            LIST_4("ACE_morphine"),
            LIST_3("ACE_CableTie"),
            "ACE_epinephrine",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools",
            "ACE_key_lockpick",
            "ACE_key_east"
        };
        addItemsToVest[] = {};
        addItemsToBackpack[] = {};
    };
    class Type {
        //Rifleman
        class man_1 {
            addItemsToBackpack[] = {
                LIST_7("rhs_30Rnd_545x39_7N6M_plum_AK"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_mag_rgd5")
            };
        };

        //Asst. Autorifleman
        class man_sport_1_F: man_1 {
            addItemsToVest[] = {
                LIST_7("rhs_30Rnd_545x39_7N6M_plum_AK"),
                LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white")
            };
            addItemsToBackpack[] = {
                LIST_6("rhs_30Rnd_545x39_AK_green")
            };
        };

        //Autorifleman
        class man_sport_2_F: man_1 {
            primaryWeapon = "rhs_weap_aks74u";
            primaryWeaponMagazine = "rhs_30Rnd_545x39_AK_green";
            addItemsToBackpack[] = {
                LIST_6("rhs_30Rnd_545x39_AK_green")
            };
        };

        //Combat Life Saver
        class man_p_beggar_F: man_1 {
            addItemsToVest[] = {
                LIST_15("ACE_fieldDressing"),
                LIST_8("ACE_morphine"),
                LIST_8("ACE_epinephrine"),
                LIST_1("ACE_salineIV_500"),
                LIST_1("ACE_salineIV_250")
            };
        };

        //Rifleman (AT)
        class man_sport_3_F: man_1 {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        //Squad Leader
        class Man_casual_1_F: man_1 {

            addItemsToBackpack[] = {
                LIST_7("rhs_30Rnd_545x39_7N6M_plum_AK"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_mag_rgd5")
            };
        };

        //Team Leader
        class Man_casual_2_F: Man_casual_1_F {
            uniform = "rhsgref_uniform_gorka_1_f";
        };
    };

    class Rank {
        class LIEUTENANT {
        };
    };
};