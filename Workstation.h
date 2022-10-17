// Name: YoonSeong(Michael) Seo
// Seneca Student ID: 120299219
// Seneca email: ysseo@myseneca.ca
// Date of completion: April 10, 2022
//
// I confirm that I am the only author of this file
//   and the content was created entirely by me.

#ifndef SDDS_WORKSTATION_H
#define SDDS_WORKSTATION_H
#include <deque>
#include <queue>
#include "CustomerOrder.h"

namespace sdds
{
	extern std::deque<CustomerOrder> g_pending;
	extern std::deque<CustomerOrder> g_completed;
	extern std::deque<CustomerOrder> g_incomplete;

	class Workstation : public Station
	{
		std::deque<CustomerOrder> m_orders{};
		Workstation* m_pNextStation{};

	public:
		Workstation(const std::string& station);
		void fill(std::ostream& os);
		bool attemptToMoveOrder();
		void setNextStation(Workstation* = nullptr);
		Workstation* getNextStation() const;
		void display(std::ostream& os) const;
		Workstation& operator+=(CustomerOrder&& newOrder);

		Workstation(const Workstation&) = delete;
		Workstation& operator=(const Workstation&) = delete;
		Workstation(Workstation&&) = delete;
		Workstation& operator=(Workstation&&) = delete;
	};
}




#endif
