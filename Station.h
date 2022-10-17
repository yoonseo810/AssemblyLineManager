// Name: YoonSeong(Michael) Seo
// Seneca Student ID: 120299219
// Seneca email: ysseo@myseneca.ca
// Date of completion: April 10, 2022
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_STATION_H
#define SDDS_STATION_H
#include <string>
#include "Utilities.h"

namespace sdds
{
	class Station
	{
		int m_id{};
		std::string m_name{};
		std::string m_description{};
		size_t m_serialNumber{};
		size_t m_numOfItems{};

		static size_t m_widthField;
		static size_t id_generator;

	public:
		Station(const std::string&);
		const std::string& getItemName() const;
		size_t getNextSerialNumber();
		size_t getQuantity() const;
		void updateQuantity();
		void display(std::ostream& os, bool full) const;

	};
}



#endif

