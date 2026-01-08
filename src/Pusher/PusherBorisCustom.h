/*! @file PusherBorisCustom.h

 @brief PusherBorisCustom.h custom pusher derived from Boris

 */

#ifndef PUSHERBORISCUSTOM_H
#define PUSHERBORISCUSTOM_H

#include "Pusher.h"

//  --------------------------------------------------------------------------------------------------------------------
//! Class PusherBorisCustom
//  --------------------------------------------------------------------------------------------------------------------
class PusherBorisCustom : public Pusher
{
public:
    //! Creator for Pusher
    PusherBorisCustom( Params &params, Species *species );
    ~PusherBorisCustom();
    //! Overloading of () operator
    void operator()( Particles &particles, SmileiMPI *smpi, int istart, int iend, int ithread, int ipart_buffer_offset = 0 ) override;
};

#endif
