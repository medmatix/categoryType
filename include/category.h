#ifndef CATEGORY_H
#define CATEGORY_H


class category
{
    public:
        /** Default constructor */
        category();
        /** Default destructor */
        virtual ~category();

        /** Access categoryName
         * \return The current value of categoryName
         */
        string GetcategoryName() { return categoryName; }
        /** Set categoryName
         * \param val New value to set
         */
        void SetcategoryName(string val) { categoryName = val; }
        /** Access numRanks
         * \return The current value of numRanks
         */
        int GetnumRanks() { return numRanks; }
        /** Set numRanks
         * \param val New value to set
         */
        void SetnumRanks(int val) { numRanks = val; }
        /** Access numElems
         * \return The current value of numElems
         */
        int GetnumElems() { return numElems; }
        /** Set numElems
         * \param val New value to set
         */
        void SetnumElems(int val) { numElems = val; }
        /** Access rankMap
         * \return The current value of rankMap
         */
        map<int,string) GetrankMap() { return rankMap; }
        /** Set rankMap
         * \param val New value to set
         */
        void SetrankMap(map<int,string) val) { rankMap = val; }
        /** Access rankData
         * \return The current value of rankData
         */
        vector<int> GetrankData() { return rankData; }
        /** Set rankData
         * \param val New value to set
         */
        void SetrankData(vector<int> val) { rankData = val; }

    protected:

    private:
        string categoryName; //!< Member variable "categoryName"
        int numRanks; //!< Member variable "numRanks"
        int numElems; //!< Member variable "numElems"
        map<int,string) rankMap; //!< Member variable "rankMap"
        vector<int> rankData; //!< Member variable "rankData"
};

#endif // CATEGORY_H
