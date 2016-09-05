# categoryType
A category or factor data type for C++,
  
view [Project pages](https://medmatix.github.io/categoryType/) here.

## Introduction and Overview
  
  Neither base C++ nor the current template libraries contain a categorical data type, an essential type for data analysis represented by the dummy variable of linear regression models. R has the factor type for this.
  
  This C++ category type is intended to fill this need, with the data type definition and the associated methods and classes required to manipulate categorical data in the same environment as integer, double and string data. double must be converted to integer type in order to be categorize. String based, qualitative, representations of observations must be ranked to be analyzed with other data.
  
## Design Requirements
  
  Categorical data, in the R-style model needs to have a rank value (a numeric level) and a text or string value (a level name) in order to quickly serve all the roles of a categorical or factor type variable.
  
##References
  
  Agresti,Alan _**Analysis of Ordinal Categorical Data**_, John Wiley & Sons, New Jersey, 2010.

