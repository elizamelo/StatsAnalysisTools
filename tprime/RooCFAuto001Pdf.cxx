/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "RooCFAuto001Pdf.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(RooCFAuto001Pdf) 

 RooCFAuto001Pdf::RooCFAuto001Pdf(const char *name, const char *title, 
                        RooAbsReal& _tprime_mass_sum_pdf,
                        RooAbsReal& _mass) :
   RooAbsPdf(name,title), 
   tprime_mass_sum_pdf("tprime_mass_sum_pdf","tprime_mass_sum_pdf",this,_tprime_mass_sum_pdf),
   mass("mass","mass",this,_mass)
 { 
 } 


 RooCFAuto001Pdf::RooCFAuto001Pdf(const RooCFAuto001Pdf& other, const char* name) :  
   RooAbsPdf(other,name), 
   tprime_mass_sum_pdf("tprime_mass_sum_pdf",this,other.tprime_mass_sum_pdf),
   mass("mass",this,other.mass)
 { 
 } 



 Double_t RooCFAuto001Pdf::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   return tprime_mass_sum_pdf*(1.0-exp((100.0-mass)/100.0)) ; 
 } 


