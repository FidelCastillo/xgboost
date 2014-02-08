/*!
 * \file xgboost.cpp
 * \brief bootser implementations 
 * \author Tianqi Chen: tianqi.tchen@gmail.com
 */
// implementation of boosters go to here 
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE
#include <climits>
#include "xgboost.h"
#include "../utils/xgboost_utils.h"
#include "../gbm-base/xgboost_base_model.h"
namespace xgboost{
    namespace booster{
        /*! 
         * \brief create a gradient booster, given type of booster
         * \param booster_type type of gradient booster, can be used to specify implements
         * \return the pointer to the gradient booster created
         */
        IBooster *CreateBooster( int booster_type ){
            // TODO
            return NULL;
        }
    };
};

