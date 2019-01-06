class CfgMods
{
	class Stamina
	{
	    dir = "Stamina";
	    picture = "";
	    action = "";
	    hideName = 1;
	    hidePicture = 1;
	    name = "Stamina Remover";
	    credits = "AwfulMatt";
	    author = "AwfulMatt";
	    authorID = "0";
	    version = "1.0";
	    extra = 0;
	    type = "mod";

	    dependencies[] = {"World"};

	    class defs
	    {
	        class worldScriptModule
            {
                value = "";
                files[] = {"Stamina/4_World"};
            };
        };
    };
};
class CfgPatches
{
	class StaminaScript
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};