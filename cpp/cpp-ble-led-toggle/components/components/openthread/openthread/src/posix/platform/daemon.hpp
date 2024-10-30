/*
 *  Copyright (c) 2021, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */
#ifndef OT_POSIX_PLATFORM_DAEMON_HPP_
#define OT_POSIX_PLATFORM_DAEMON_HPP_

#include "openthread-posix-config.h"

#include "core/common/non_copyable.hpp"

#include "logger.hpp"
#include "mainloop.hpp"

namespace ot {
namespace Posix {

class Daemon : public Mainloop::Source, public Logger<Daemon>, private NonCopyable
{
public:
    static const char kLogModuleName[];

    static Daemon &Get(void);

    void SetUp(void);
    void TearDown(void);
    void Update(otSysMainloopContext &aContext) override;
    void Process(const otSysMainloopContext &aContext) override;
    int  OutputFormatV(const char *aFormat, va_list aArguments);

private:
    int  OutputFormat(const char *aFormat, ...);
    void createListenSocketOrDie(void);
    void InitializeSessionSocket(void);

    int mListenSocket  = -1;
    int mDaemonLock    = -1;
    int mSessionSocket = -1;
};

} // namespace Posix
} // namespace ot

#endif // OT_POSIX_PLATFORM_DAEMON_HPP_