/** \file
 * \mainpage Category type
 * \section Program Information and Credits
 *
 * Source File:
 * *category.cpp*
 *
 * ## A Categorical or "Factor" data type class for C++
 *
 * @author David York
 * @date Friday August 26, 2016
 * @version 0.7019
 *
 * \brief
 * This class creates and provides utilities for a categorical or factor
 * datatype (similar to R's factor type). The utilies allow construction, and
 * population of data type based a vector of factors. There are also functions
 * included to convert factor variables to and from int and string variable
 * collections.
 *
 *
 *
 * \subsection License
 * This program is free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 * &copy; 2016 David York
 * \page "Design Notes"
 * The best model to use was considered to be the open source R factor type.
 * In Addition to constructors, utilities to manipulate this variable type are needed.
 *  \ref ![UML](../doc/Dataframe_Class.svg)
 */

#include <typeinfo>
#include <cxxabi.h>
#include <iostream>
#include <ostream>
#include <string>
#include <vector>
#include <list>
#include <tuple>
#include <array>
#include <initializer_list>
#include <boost/any.hpp>

using namespace std;


/**\page "Global Declarations"
 * global variables and functions for global access to certain utilities
 * including retyping other types as factors, particularly as obtained from
 * text data file sources for datasets. */


/**\struct global: a struct factor level type with name and rank */
struct Level {                    //? change to multi-pair<int, string> types?
    /** name of data level point */
    string levelName = "";
    /** ranks for that point */
    int levelRank = 0;
};

/**\fn global: a function to create categories with rankings, with or without
 * corresponding names */
vector<Level> createCategories(vector<string>* catNames = nullptr, vector<int>* carRanks = nullptr) {
    vector<Level> t;
    Level t1;
    t1.levelName = "test";
    t1.levelRank = 1;
     t.push_back (t1);
    return t;
}

/** Class for a category (factor) container data type consisting of the category
 * name (a string) and an integer ranking, collected into a vector of these
* pairs each an observation from a set */
class Category{
    protected:
    /** structure for each data point observed as a factory of categorical type */
    struct categoryLevel {     //? change to multi-pair<int, string> types?
        /** name of data level point */
        string levelName = "";
        /** ranks for that point */
        int levelRank = 0;
    };
    /** variable for this category variable (also represented by the object
     * name it was created with */
    string catVarName = "";
    /** vector of observations as categorical pairs, level mane and level rank */
    vector<categoryLevel> categorySet;   // change to a vector of multi-pairs?

    public:
    /** Constructors */

    /**default constructor */
    Category() {}

    /** constructor with every thing except data */
    Category(string vName, int lRank, string lName = "") {
        catVarName = vName;
        categoryLevel afactor;
        afactor.levelName = lName;
        afactor.levelRank = lRank;
        categorySet.push_back(afactor);
   }

   /**constructor with metadata and passed a pointer to generic data
    * this data will need to be parsed and sorted the data then group into
    * categories*/
    Category(string vName, int lRank, void* ptrData, string lName = ""){
        catVarName = vName;
        categoryLevel afactor;
        afactor.levelName =lName;
        afactor.levelRank = lRank;
        categorySet.push_back(afactor);
    }
    /**constructor with metadata and passed a fully organized vector of pairs
     * this is already pre-parsed and sorted into categories usually from the data
     * source file*/
    Category(string vName, int lRank, vector<Level>* ptrData, string lName = ""){
        catVarName = vName;
        categoryLevel afactor;
        afactor.levelName =lName;
        afactor.levelRank = lRank;
        categorySet.push_back(afactor);
    }

    /** member functions - class methods */
};
