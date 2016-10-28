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
    
  "_**Factors in R**_". http://www.stat.berkeley.edu/classes/s133/factors.html accessed September 5, 2016 at 05:11pm.
    
  Draper, Norman R; Harry Smith _**Applied Regression Analysis**_, Third Edition, Wiley Interscience, New York, 1998.
    
  "_**Categorical Variable**_", https://en.wikipedia.org/wiki/Categorical_variable, accessed, September 5, 2016 at 05:22pm.
    
  Powers, Daniel A.; Yu Xie _**Statistical Methods for Categorical Data Analysis**_,Academic Press, 1999.
  
  Blasius, Jorg; Michael Greenacre, _**Visualization of Categorical Data**_, Academic Press, London, 1998.


