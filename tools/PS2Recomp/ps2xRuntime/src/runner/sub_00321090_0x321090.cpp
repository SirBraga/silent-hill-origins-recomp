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

// Function: sub_00321090
// Address: 0x321090 - 0x321120
void sub_00321090_0x321090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321090_0x321090");
#endif

    switch (ctx->pc) {
        case 0x321098u: goto label_321098;
        case 0x3210a8u: goto label_3210a8;
        case 0x3210b8u: goto label_3210b8;
        case 0x3210c8u: goto label_3210c8;
        case 0x3210d8u: goto label_3210d8;
        case 0x3210e8u: goto label_3210e8;
        case 0x3210f8u: goto label_3210f8;
        case 0x321108u: goto label_321108;
        case 0x321118u: goto label_321118;
        default: break;
    }

    ctx->pc = 0x321090u;

    // 0x321090: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x321090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x321094: 0xc  syscall     0
    ctx->pc = 0x321094u;
    ctx->pc = 0x321098u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321098:
    // 0x321098: 0x3e00008  jr          $ra
    ctx->pc = 0x321098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3210A0u;
    // 0x3210a0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3210a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3210a4: 0xc  syscall     0
    ctx->pc = 0x3210a4u;
    ctx->pc = 0x3210A8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3210a8:
    // 0x3210a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3210B0u;
    // 0x3210b0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3210b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3210b4: 0xc  syscall     0
    ctx->pc = 0x3210b4u;
    ctx->pc = 0x3210B8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3210b8:
    // 0x3210b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3210C0u;
    // 0x3210c0: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x3210c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x3210c4: 0xc  syscall     0
    ctx->pc = 0x3210c4u;
    ctx->pc = 0x3210C8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3210c8:
    // 0x3210c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3210D0u;
    // 0x3210d0: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x3210d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x3210d4: 0xc  syscall     0
    ctx->pc = 0x3210d4u;
    ctx->pc = 0x3210D8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3210d8:
    // 0x3210d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3210E0u;
    // 0x3210e0: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x3210e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x3210e4: 0xc  syscall     0
    ctx->pc = 0x3210e4u;
    ctx->pc = 0x3210E8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3210e8:
    // 0x3210e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3210F0u;
    // 0x3210f0: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x3210f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x3210f4: 0xc  syscall     0
    ctx->pc = 0x3210f4u;
    ctx->pc = 0x3210F8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3210f8:
    // 0x3210f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3210F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3210F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321100u;
    // 0x321100: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x321100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x321104: 0xc  syscall     0
    ctx->pc = 0x321104u;
    ctx->pc = 0x321108u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321108:
    // 0x321108: 0x3e00008  jr          $ra
    ctx->pc = 0x321108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321110u;
    // 0x321110: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x321110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x321114: 0xc  syscall     0
    ctx->pc = 0x321114u;
    ctx->pc = 0x321118u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_321118:
    // 0x321118: 0x3e00008  jr          $ra
    ctx->pc = 0x321118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321120u;
}
