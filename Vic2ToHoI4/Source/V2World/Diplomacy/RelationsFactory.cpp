#include "RelationsFactory.h"
#include "ParserHelpers.h"



Vic2::Relations::Factory::Factory()
{
	registerKeyword("value", [this](const std::string& unused, std::istream& theStream) {
		relations->value = commonItems::singleInt{theStream}.getInt();
	});
	registerKeyword("level", [this](const std::string& unused, std::istream& theStream) {
		relations->level = static_cast<opinionLevel>(commonItems::singleInt{theStream}.getInt());
	});
	registerKeyword("military_access", [this](const std::string& unused, std::istream& theStream) {
		relations->militaryAccess = (commonItems::singleString{theStream}.getString() == "yes");
	});
	registerKeyword("last_send_diplomat", [this](const std::string& unused, std::istream& theStream) {
		relations->lastSentDiplomat = date(commonItems::singleString{theStream}.getString());
	});
	registerKeyword("last_war", [this](const std::string& unused, std::istream& theStream) {
		relations->lastWar = date(commonItems::singleString{theStream}.getString());
	});
	registerKeyword("truce_until", [this](const std::string& unused, std::istream& theStream) {
		relations->truceUntil = date(commonItems::singleString{theStream}.getString());
	});
	registerKeyword("influence_value", [this](const std::string& unused, std::istream& theStream) {
		relations->influenceValue = commonItems::singleInt{theStream}.getInt();
	});
	registerRegex(commonItems::catchallRegex, commonItems::ignoreItem);
}


std::unique_ptr<Vic2::Relations> Vic2::Relations::Factory::getRelations(std::istream& theStream)
{
	relations = std::make_unique<Relations>();
	parseStream(theStream);
	return std::move(relations);
}