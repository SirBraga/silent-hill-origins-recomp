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

// Function: sub_00179660
// Address: 0x179660 - 0x179688
void sub_00179660_0x179660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179660_0x179660");
#endif

    switch (ctx->pc) {
        case 0x179660u: goto label_179660;
        case 0x179664u: goto label_179664;
        case 0x179668u: goto label_179668;
        case 0x17966cu: goto label_17966c;
        case 0x179670u: goto label_179670;
        case 0x179674u: goto label_179674;
        case 0x179678u: goto label_179678;
        case 0x17967cu: goto label_17967c;
        case 0x179680u: goto label_179680;
        case 0x179684u: goto label_179684;
        default: break;
    }

    ctx->pc = 0x179660u;

label_179660:
    // 0x179660: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x179660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_179664:
    // 0x179664: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179664u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_179668:
    // 0x179668: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x179668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_17966c:
    // 0x17966c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x17966cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_179670:
    // 0x179670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_179674:
    // 0x179674: 0x40f809  jalr        $v0
label_179678:
    if (ctx->pc == 0x179678u) {
        ctx->pc = 0x179678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179674u;
        // 0x179678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17967Cu;
        goto label_17967c;
    }
    ctx->pc = 0x179674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17967Cu);
        ctx->pc = 0x179678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179674u;
        // 0x179678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179674u, 0x17967Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17967Cu;
label_17967c:
    // 0x17967c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17967cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179680:
    // 0x179680: 0x3e00008  jr          $ra
label_179684:
    if (ctx->pc == 0x179684u) {
        ctx->pc = 0x179684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179680u;
        // 0x179684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179688u;
        goto label_fallthrough_0x179680;
    }
    ctx->pc = 0x179680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179680u;
        // 0x179684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x179680:
    ctx->pc = 0x179688u;
}
