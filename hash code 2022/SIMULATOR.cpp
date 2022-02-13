#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;

// to define unordered map

namespace pmr {
    template <class Key,
              class T,
              class Hash = std::hash<Key>,
              class Pred = std::equal_to<Key>>
    using unordered_map = std::unordered_map<Key, T, Hash, Pred,
                              std::pmr::polymorphic_allocator<std::pair<const Key,T>>>;
}

std::list<int> List;
int main(){
class Customer
{
private:
    std::vector<std::wstring> likedIngredients;
    std::vector<std::wstring> dislikedIngredients;

public:
    Customer(std::vector<std::wstring> &likedIngredients, std::vector<std::wstring> &dislikedIngredients);

    virtual std::vector<std::wstring> getLikedIngredients();

    virtual std::vector<std::wstring> getDislikedIngredients();
    Customer::Customer(std::vector<std::wstring> &likedIngredients, std::vector<std::wstring> &dislikedIngredients)
    {
        this->likedIngredients = likedIngredients;
        this->dislikedIngredients = dislikedIngredients;
    }
    std::vector<std::wstring> Customer::getLikedIngredients()
    {
        return likedIngredients;
    }

    std::vector<std::wstring> Customer::getDislikedIngredients()
    {
        return dislikedIngredients;
    }
};

class CustomerComparator : public Customer
{
public:
    int compare(Customer *o1, Customer *o2);

    int compare(Customer *o1, Customer *o2)
    {
        if (o1->getDislikedIngredients().size() == o2->getDislikedIngredients().size())
        {
            return o1->getLikedIngredients().size() - o2->getLikedIngredients().size();
        }
        return o1->getDislikedIngredients().size() - o2->getDislikedIngredients().size();
    }
};

class IOException : public std::exception
{
private:
    std::string msg;

public:
    IOException(const std::string &message = "") : msg(message)
    {
    }

    const char *what() const noexcept
    {
        return msg.c_str();
    }
};

class LocalScoreBoardSimulator
	{
	public:
		std::vector<Customer*> customers;
		std::unordered_map<std::wstring, int> ingredient;

		LocalScoreBoardSimulator(std::vector<Customer*> &customers, std::unordered_map<int,int> ingredient);
		virtual int getScore();

        LocalScoreBoardSimulator::LocalScoreBoardSimulator(std::vector<Customer*> &customers, unordered_map<int,int> ingredient)
	{
		this->customers = customers;
		//this->ingredient = ingredient;
	}
    int LocalScoreBoardSimulator::getScore()
	{
		int customerCount = 0;
		bool likedStatus;
		bool dislikedStatus;

		for (auto customer : customers)
		{
		likedStatus = true;
		dislikedStatus = true;
			for (std::wstring likedIngredient :inline Customer::Customer(const Customer &)-> *getLikedIngredients())
			{
				if (ingredient.find(likedIngredient) == ingredient.end())
				{
					likedStatus = false;
					break;
				}
			}
			for (std::wstring dislikedIngredient :inline Customer::Customer(const Customer &)-> *getDislikedIngredients())
			{
				if (ingredient.find(dislikedIngredient) != ingredient.end())
				{
					dislikedStatus = false;
					break;
				}
			}
			if (likedStatus && dislikedStatus)
			{
			customerCount++;
			}
		}

	return customerCount;
	}
};
}
