#include "ScriptedLocalisations.h"
#include <regex>



void HoI4::ScriptedLocalisations::addNavyScriptedLocalisations(const std::string& strongestNavyTag,
	 const std::string& secondStrongestNavyTag)
{
	ScriptedLocalisation GetStrengthRatioBritain;
	GetStrengthRatioBritain.setName("GetStrengthRatioBritain");
	std::string text;
	text += "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\tif = { \n";
	text += "\t\t\t\tlimit = { " + strongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 1\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 0.9\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t\telse_if = { \n";
	text += "\t\t\t\tlimit = { " + secondStrongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 1\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 0.9\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = Naval_treaty_90\n";
	text += "\t}";
	GetStrengthRatioBritain.addText(text);

	text = "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\tif = { \n";
	text += "\t\t\t\tlimit = { " + strongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 0.9\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 0.75\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t\telse_if = { \n";
	text += "\t\t\t\tlimit = { " + secondStrongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 0.9\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 0.75\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = Naval_treaty_75\n";
	text += "\t}";
	GetStrengthRatioBritain.addText(text);

	text = "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\tif = { \n";
	text += "\t\t\t\tlimit = { " + strongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 0.75\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 0.5\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t\telse_if = { \n";
	text += "\t\t\t\tlimit = { " + secondStrongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 0.75\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 0.5\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = Naval_treaty_50\n";
	text += "\t}";
	GetStrengthRatioBritain.addText(text);

	text = "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\tif = { \n";
	text += "\t\t\t\tlimit = { " + strongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 0.5\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t\telse_if = { \n";
	text += "\t\t\t\tlimit = { " + secondStrongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio < 0.5\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = Naval_treaty_lower_than_50\n";
	text += "\t}";
	GetStrengthRatioBritain.addText(text);

	text = "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\tif = { \n";
	text += "\t\t\t\tlimit = { " + strongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + strongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 1\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t\telse_if = { \n";
	text += "\t\t\t\tlimit = { " + secondStrongestNavyTag + " = { has_naval_treaty_trigger = yes } }\n";
	text += "\t\t\t\tnaval_strength_comparison = { \n";
	text += "\t\t\t\t\tother = " + secondStrongestNavyTag + "\n";
	text += "\t\t\t\t\tratio > 1\n";
	text += "\t\t\t\t\tsub_unit_def_weights = { \n";
	text += "\t\t\t\t\t\tcarrier = 0.5\n";
	text += "\t\t\t\t\t\tbattleship = 1\n";
	text += "\t\t\t\t\t\tbattle_cruiser = 0.8\n";
	text += "\t\t\t\t\t\theavy_cruiser = 0.5\n";
	text += "\t\t\t\t\t}\n";
	text += "\t\t\t\t}\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = Naval_treaty_over_100\n";
	text += "\t}";
	GetStrengthRatioBritain.addText(text);
	scriptedLocalisations.push_back(GetStrengthRatioBritain);

	ScriptedLocalisation GetRelevantNavalTreatyNation;
	GetRelevantNavalTreatyNation.setName("GetRelevantNavalTreatyNation");
	text = "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\t" + strongestNavyTag + " = { \n";
	text += "\t\t\t\thas_naval_treaty_trigger = yes\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = " + strongestNavyTag + "_Naval_treaty_nation\n";
	text += "\t}";
	GetRelevantNavalTreatyNation.addText(text);

	text = "= {\n";
	text += "\t\ttrigger = { \n";
	text += "\t\t\t" + strongestNavyTag + " = { \n";
	text += "\t\t\t\tnot = { has_naval_treaty_trigger = yes }\n";
	text += "\t\t\t}\n";
	text += "\t\t\t" + secondStrongestNavyTag + " = { \n";
	text += "\t\t\t\thas_naval_treaty_trigger = yes\n";
	text += "\t\t\t}\n";
	text += "\t\t}\n";
	text += "\t\tlocalization_key = " + secondStrongestNavyTag + "_Naval_treaty_nation\n";
	text += "\t}";
	GetRelevantNavalTreatyNation.addText(text);
	scriptedLocalisations.push_back(GetRelevantNavalTreatyNation);
}


void HoI4::ScriptedLocalisations::giveAdjectiveLocalisation(const std::string& language,
	 ScriptedLocalisation&& localisation)
{
	if (auto languageAdjectives = adjectiveLocalisations.find(language);
		 languageAdjectives != adjectiveLocalisations.end())
	{
		languageAdjectives->second.push_back(localisation);
	}
	else
	{
		std::vector<ScriptedLocalisation> localisations{localisation};
		adjectiveLocalisations.emplace(std::make_pair(language, localisations));
	}
}


void HoI4::ScriptedLocalisations::filterIdeologyLocalisations(const std::set<std::string>& majorIdeologies)
{
	for (auto& localisation: ideologyLocalisations)
	{
		localisation.filterTexts([majorIdeologies](const std::string& text) {
			std::smatch match;
			for (const auto& ideology: majorIdeologies)
			{
				if (std::regex_search(text, match, std::regex(ideology)))
				{
					return false;
				}
			}
			return true;
		});
	}
}


void HoI4::ScriptedLocalisations::updateIdeologyLocalisations(const std::set<std::string>& majorIdeologies)
{
	std::string fascismReplacement;
	if (majorIdeologies.contains("fascism"))
	{
		fascismReplacement = "\n\t\t\t\thas_government = fascism";
	}
	std::string communismReplacement;
	if (majorIdeologies.contains("communism"))
	{
		communismReplacement = "\n\t\t\t\thas_government = communism";
	}
	std::string radicalReplacement;
	if (majorIdeologies.contains("radical"))
	{
		radicalReplacement = "\n\t\t\t\thas_government = radical";
	}
	std::string absolutistReplacement;
	if (majorIdeologies.contains("absolutist"))
	{
		absolutistReplacement = "\n\t\t\t\thas_government = absolutist";
	}
	std::string democraticReplacement;
	if (majorIdeologies.contains("democratic"))
	{
		democraticReplacement = "\n\t\t\t\thas_government = democratic";
	}

	for (auto& localisation: ideologyLocalisations)
	{
		localisation.updateTexts(std::regex("\n.*FASCISM_PLACEHOLDER"), fascismReplacement);
		localisation.updateTexts(std::regex("\n.*COMMUNISM_PLACEHOLDER"), communismReplacement);
		localisation.updateTexts(std::regex("\n.*RADICAL_PLACEHOLDER"), radicalReplacement);
		localisation.updateTexts(std::regex("\n.*ABSOLUTIST_PLACEHOLDER"), absolutistReplacement);
		localisation.updateTexts(std::regex("\n.*DEMOCRATIC_PLACEHOLDER"), democraticReplacement);
	}
}