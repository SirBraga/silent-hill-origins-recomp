#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003213D0
// Address: 0x3213d0 - 0x3215a0
void sub_003213D0_0x3213d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003213D0_0x3213d0");
#endif

    switch (ctx->pc) {
        case 0x3213d8u: goto label_3213d8;
        case 0x3213e8u: goto label_3213e8;
        case 0x3213f8u: goto label_3213f8;
        case 0x321408u: goto label_321408;
        case 0x321418u: goto label_321418;
        case 0x321428u: goto label_321428;
        case 0x321438u: goto label_321438;
        case 0x321448u: goto label_321448;
        case 0x321458u: goto label_321458;
        case 0x321468u: goto label_321468;
        case 0x321478u: goto label_321478;
        case 0x321488u: goto label_321488;
        case 0x321498u: goto label_321498;
        case 0x3214a8u: goto label_3214a8;
        case 0x3214b8u: goto label_3214b8;
        case 0x3214c8u: goto label_3214c8;
        case 0x3214d8u: goto label_3214d8;
        case 0x3214e8u: goto label_3214e8;
        case 0x3214f8u: goto label_3214f8;
        case 0x321508u: goto label_321508;
        case 0x321518u: goto label_321518;
        case 0x321528u: goto label_321528;
        case 0x321538u: goto label_321538;
        case 0x321548u: goto label_321548;
        case 0x321558u: goto label_321558;
        case 0x321568u: goto label_321568;
        case 0x321578u: goto label_321578;
        case 0x321588u: goto label_321588;
        case 0x321598u: goto label_321598;
        default: break;
    }

    ctx->pc = 0x3213d0u;

    // 0x3213d0: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x3213d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3213d4: 0xc  syscall     0
    ctx->pc = 0x3213d4u;
    ctx->pc = 0x3213D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3213d8:
    // 0x3213d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3213D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213E0u;
    // 0x3213e0: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3213e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3213e4: 0xc  syscall     0
    ctx->pc = 0x3213e4u;
    ctx->pc = 0x3213E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3213e8:
    // 0x3213e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3213E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3213F0u;
    // 0x3213f0: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x3213f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3213f4: 0xc  syscall     0
    ctx->pc = 0x3213f4u;
    ctx->pc = 0x3213F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3213f8:
    // 0x3213f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3213F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3213F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321400u;
    // 0x321400: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x321400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x321404: 0xc  syscall     0
    ctx->pc = 0x321404u;
    ctx->pc = 0x321408u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321408:
    // 0x321408: 0x3e00008  jr          $ra
    ctx->pc = 0x321408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321410u;
    // 0x321410: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x321410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x321414: 0xc  syscall     0
    ctx->pc = 0x321414u;
    ctx->pc = 0x321418u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321418:
    // 0x321418: 0x3e00008  jr          $ra
    ctx->pc = 0x321418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321420u;
    // 0x321420: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x321420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x321424: 0xc  syscall     0
    ctx->pc = 0x321424u;
    ctx->pc = 0x321428u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321428:
    // 0x321428: 0x3e00008  jr          $ra
    ctx->pc = 0x321428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321430u;
    // 0x321430: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x321430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x321434: 0xc  syscall     0
    ctx->pc = 0x321434u;
    ctx->pc = 0x321438u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321438:
    // 0x321438: 0x3e00008  jr          $ra
    ctx->pc = 0x321438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321440u;
    // 0x321440: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x321440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x321444: 0xc  syscall     0
    ctx->pc = 0x321444u;
    ctx->pc = 0x321448u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321448:
    // 0x321448: 0x3e00008  jr          $ra
    ctx->pc = 0x321448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321450u;
    // 0x321450: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x321450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x321454: 0xc  syscall     0
    ctx->pc = 0x321454u;
    ctx->pc = 0x321458u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321458:
    // 0x321458: 0x3e00008  jr          $ra
    ctx->pc = 0x321458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321460u;
    // 0x321460: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x321460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x321464: 0xc  syscall     0
    ctx->pc = 0x321464u;
    ctx->pc = 0x321468u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321468:
    // 0x321468: 0x3e00008  jr          $ra
    ctx->pc = 0x321468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321470u;
    // 0x321470: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x321470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x321474: 0xc  syscall     0
    ctx->pc = 0x321474u;
    ctx->pc = 0x321478u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321478:
    // 0x321478: 0x3e00008  jr          $ra
    ctx->pc = 0x321478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321480u;
    // 0x321480: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x321480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x321484: 0xc  syscall     0
    ctx->pc = 0x321484u;
    ctx->pc = 0x321488u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321488:
    // 0x321488: 0x3e00008  jr          $ra
    ctx->pc = 0x321488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321490u;
    // 0x321490: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x321490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x321494: 0xc  syscall     0
    ctx->pc = 0x321494u;
    ctx->pc = 0x321498u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321498:
    // 0x321498: 0x3e00008  jr          $ra
    ctx->pc = 0x321498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214A0u;
    // 0x3214a0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x3214a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x3214a4: 0xc  syscall     0
    ctx->pc = 0x3214a4u;
    ctx->pc = 0x3214A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3214a8:
    // 0x3214a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214B0u;
    // 0x3214b0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3214b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3214b4: 0xc  syscall     0
    ctx->pc = 0x3214b4u;
    ctx->pc = 0x3214B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3214b8:
    // 0x3214b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214C0u;
    // 0x3214c0: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x3214c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x3214c4: 0xc  syscall     0
    ctx->pc = 0x3214c4u;
    ctx->pc = 0x3214C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3214c8:
    // 0x3214c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214D0u;
    // 0x3214d0: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3214d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3214d4: 0xc  syscall     0
    ctx->pc = 0x3214d4u;
    ctx->pc = 0x3214D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3214d8:
    // 0x3214d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214E0u;
    // 0x3214e0: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x3214e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3214e4: 0xc  syscall     0
    ctx->pc = 0x3214e4u;
    ctx->pc = 0x3214E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3214e8:
    // 0x3214e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3214F0u;
    // 0x3214f0: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x3214f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x3214f4: 0xc  syscall     0
    ctx->pc = 0x3214f4u;
    ctx->pc = 0x3214F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3214f8:
    // 0x3214f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3214F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3214F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321500u;
    // 0x321500: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x321500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x321504: 0xc  syscall     0
    ctx->pc = 0x321504u;
    ctx->pc = 0x321508u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321508:
    // 0x321508: 0x3e00008  jr          $ra
    ctx->pc = 0x321508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321510u;
    // 0x321510: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x321510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x321514: 0xc  syscall     0
    ctx->pc = 0x321514u;
    ctx->pc = 0x321518u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321518:
    // 0x321518: 0x3e00008  jr          $ra
    ctx->pc = 0x321518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321520u;
    // 0x321520: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x321520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x321524: 0xc  syscall     0
    ctx->pc = 0x321524u;
    ctx->pc = 0x321528u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321528:
    // 0x321528: 0x3e00008  jr          $ra
    ctx->pc = 0x321528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321530u;
    // 0x321530: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x321530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x321534: 0xc  syscall     0
    ctx->pc = 0x321534u;
    ctx->pc = 0x321538u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321538:
    // 0x321538: 0x3e00008  jr          $ra
    ctx->pc = 0x321538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321540u;
    // 0x321540: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x321540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x321544: 0xc  syscall     0
    ctx->pc = 0x321544u;
    ctx->pc = 0x321548u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321548:
    // 0x321548: 0x3e00008  jr          $ra
    ctx->pc = 0x321548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321550u;
    // 0x321550: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x321550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x321554: 0xc  syscall     0
    ctx->pc = 0x321554u;
    ctx->pc = 0x321558u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321558:
    // 0x321558: 0x3e00008  jr          $ra
    ctx->pc = 0x321558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321560u;
    // 0x321560: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x321560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x321564: 0xc  syscall     0
    ctx->pc = 0x321564u;
    ctx->pc = 0x321568u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321568:
    // 0x321568: 0x3e00008  jr          $ra
    ctx->pc = 0x321568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321570u;
    // 0x321570: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x321570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x321574: 0xc  syscall     0
    ctx->pc = 0x321574u;
    ctx->pc = 0x321578u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321578:
    // 0x321578: 0x3e00008  jr          $ra
    ctx->pc = 0x321578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321580u;
    // 0x321580: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x321580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x321584: 0xc  syscall     0
    ctx->pc = 0x321584u;
    ctx->pc = 0x321588u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321588:
    // 0x321588: 0x3e00008  jr          $ra
    ctx->pc = 0x321588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321590u;
    // 0x321590: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x321590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x321594: 0xc  syscall     0
    ctx->pc = 0x321594u;
    ctx->pc = 0x321598u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321598:
    // 0x321598: 0x3e00008  jr          $ra
    ctx->pc = 0x321598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3215A0u;
}
