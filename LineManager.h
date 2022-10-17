// Name: YoonSeong(Michael) Seo
// Seneca Student ID: 120299219
// Seneca email: ysseo@myseneca.ca
// Date of completion: April 10, 2022
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_LINEMANAGER_H
#define SDDS_LINEMANAGER_H
#include <vector>
#include <deque>
#include "CustomerOrder.h"
#include "Workstation.h"


namespace sdds
{
	class LineManager
	{
		std::vector<Workstation*> m_activeLine{};
		size_t m_cntCustomerOrder{};
		Workstation* m_firstStation{};

	public:
		LineManager(const std::string& file, const std::vector<Workstation*>& stations);
		void reorderStations();
		bool run(std::ostream& os);
		void display(std::ostream& os) const;
	};
}

#endif
