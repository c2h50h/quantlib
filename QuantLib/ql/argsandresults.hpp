

/*
 Copyright (C) 2000, 2001, 2002 RiskMap srl

 This file is part of QuantLib, a free-software/open-source library
 for financial quantitative analysts and developers - http://quantlib.org/

 QuantLib is free software: you can redistribute it and/or modify it under the
 terms of the QuantLib license.  You should have received a copy of the
 license along with this program; if not, please email ferdinando@ametrano.net
 The license is also available online at http://quantlib.org/html/license.html

 This program is distributed in the hope that it will be useful, but WITHOUT
 ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 FOR A PARTICULAR PURPOSE.  See the license for more details.
*/
/*! \file argsandresults.hpp
    \brief Base classes for generic arguments and results

    \fullpath
    ql/%argsandresults.hpp
*/

// $Id$

#ifndef quantlib_args_and_results_h
#define quantlib_args_and_results_h

#include <ql/qldefines.hpp>
#include <ql/null.hpp>

namespace QuantLib {

    //! base class for generic argument groups
    class Arguments {
      public:
        virtual ~Arguments() {}
    };

    //! base class for generic result groups
    class Results {
      public:
        virtual ~Results() {}
    };



    //! %option pricing results
    /*! It must be noted that there's no result data specifying
        whether the option is expired. The expiry condition should be 
        checked before calling the engine.
    */
    class OptionValue : public virtual Results {
      public:
        OptionValue() : value(Null<double>()) {}
        double value;
    };

    //! %option pricing results
    class OptionDelta : public virtual Results {
      public:
        OptionDelta() : delta(Null<double>()) {}
        double delta;
    };

    //! %option pricing results
    class OptionGamma : public virtual Results {
      public:
        OptionGamma() : gamma(Null<double>()) {}
        double gamma;
    };

    //! %option pricing results
    class OptionTheta : public virtual Results {
      public:
        OptionTheta() : theta(Null<double>()) {}
        double theta;
    };

    //! %option pricing results
    class OptionVega : public virtual Results {
      public:
        OptionVega() : vega(Null<double>()) {}
        double vega;
    };

    //! %option pricing results
    class OptionRho : public virtual Results {
      public:
        OptionRho() : rho(Null<double>()) {}
        double rho;
    };

    //! %option pricing results
    class OptionDividendRho : public virtual Results {
      public:
        OptionDividendRho() : dividendRho(Null<double>()) {}
        double dividendRho;
    };

    //! %option pricing results
    class OptionGreeks : public virtual Results {
      public:
        OptionGreeks() : delta(Null<double>()), gamma(Null<double>()),
                         theta(Null<double>()), vega(Null<double>()),
                         rho(Null<double>()), dividendRho(Null<double>()) {}
        double delta, gamma;
        double theta;
        double vega;
        double rho, dividendRho;
    };



}


#endif
