class cfgGlasses
{
	class None;
	class G_CBRN_M50: None
	{
		author = "Assaultboy"; //Obvious
		displayname = "M50 Promask"; //What the player sees
		model = "\skn_nbc_units\models\skn_b_nbc_mask.p3d"; //A Path to the .p3d file
		picture = "\CBRN_data\ui\items\maskM50.paa"; //This is what is shown in the inventroy etc
		identityTypes[] = {}; //This is used to add the mask to the random facewear selection pool. Leave it blank to keep it from being spawned rnadomly on people
		mass = 4; //The 'weight' of the mask

		ACE_Overlay = "CBRN_data\ui\hud\maskSharedOverlay.paa"; //This is projected onto the screen when wearing the mask (Only when ACE is enabled, leave blank to disable)
		
		ACE_Resistance = 2; //How easy is it to break (2 being indestructable)
		ACE_Protection = 1; //I forget what this one does but it prevents ace fuckery

		CBRN_protection = 1; //Used by 'Chemical Warfare' mod to designate this mask as protective
	};
	
	class G_CBRN_M50_Hood: G_CBRN_M50
	{
		author = "Assaultboy";
		displayname = "M50 Promask w/ Hood";
		model = "\skn_nbc_units\models\skn_b_nbc_mask_hood.p3d";
	};
	
	class G_CBRN_M04: G_CBRN_M50
	{
		author = "Assaultboy";
		displayname = "M04 Promask";
		model = "\skn_nbc_units\models\skn_i_nbc_mask.p3d";
		picture = "\CBRN_data\ui\items\maskM04.paa";
		ACE_Overlay = "CBRN_data\ui\hud\maskSharedOverlay.paa";
	};
	
	class G_CBRN_M04_Hood: G_CBRN_M04
	{
		author = "Assaultboy";
		displayname = "M04 Promask w/ Hood";
		model = "\skn_nbc_units\models\skn_i_nbc_mask_hood.p3d";
	};
	
	class G_CBRN_S10: G_CBRN_M50
	{
		author = "Assaultboy";
		displayname = "S10 Promask";
		model = "\skn_nbc_units\models\skn_o_nbc_mask.p3d";
		picture = "\CBRN_data\ui\items\maskS10.paa";
		ACE_Overlay = "CBRN_data\ui\hud\maskOpforOverlay.paa";
	};
};