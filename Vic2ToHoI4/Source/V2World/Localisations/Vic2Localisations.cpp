#include "Vic2Localisations.h"
#include "Log.h"
#include <regex>



std::optional<std::string> Vic2::Localisations::getTextInLanguage(const std::string& key,
	 const std::string& language) const
{
	const auto KeyToLocalisationsMapping = localisations.find(key);
	if (KeyToLocalisationsMapping == localisations.end())
	{
		return std::nullopt;
	}

	const auto LanguageToLocalisationMapping = KeyToLocalisationsMapping->second.find(language);
	if (LanguageToLocalisationMapping == KeyToLocalisationsMapping->second.end())
	{
		return std::nullopt;
	}

	return LanguageToLocalisationMapping->second;
}


Vic2::LanguageToLocalisationMap Vic2::Localisations::getTextInEachLanguage(const std::string& key) const
{
	if (const auto KeyToLocalisationsMappings = localisations.find(key);
		 KeyToLocalisationsMappings != localisations.end())
	{
		return KeyToLocalisationsMappings->second;
	}
	else
	{
		return LanguageToLocalisationMap{};
	}
}


void Vic2::Localisations::updateDomainCountry(const std::string& tag, const std::string& domainName)
{
	if (!localisations.count(tag))
	{
		return;
	}

	auto& nameInAllLanguages = localisations.at(tag);
	const auto& regionLocalisations = lookupRegionLocalisations(domainName);

	for (auto& [language, nameToUpdate]: nameInAllLanguages)
	{
		auto replacementName = determineReplacementName(domainName, regionLocalisations, language);
		nameToUpdate = std::regex_replace(nameToUpdate, std::regex(R"(\$REGION\$)"), replacementName);
	}
}


Vic2::LanguageToLocalisationMap Vic2::Localisations::lookupRegionLocalisations(const std::string& domainName)
{
	LanguageToLocalisationMap regionLocalisations;
	if (const auto domainKey = localisationToKeyMap.find(domainName); domainKey != localisationToKeyMap.end())
	{
		auto regionsInLanguages = getTextInEachLanguage(domainKey->second);
		for (const auto& regionInLanguage: regionsInLanguages)
		{
			regionLocalisations.insert(regionInLanguage);
		}
	}

	return regionLocalisations;
}


std::string Vic2::Localisations::determineReplacementName(const std::string& domainName,
	 const LanguageToLocalisationMap& regionLocalisations,
	 const std::string& language)
{
	if (const auto& replacementLocalisation = regionLocalisations.find(language);
		 replacementLocalisation != regionLocalisations.end())
	{
		return replacementLocalisation->second;
	}
	else
	{
		Log(LogLevel::Warning) << "Could not find regions localisation for " << domainName << " in " << language;
		return domainName;
	}
}