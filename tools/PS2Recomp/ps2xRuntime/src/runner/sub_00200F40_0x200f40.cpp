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

// Function: sub_00200F40
// Address: 0x200f40 - 0x200f70
void sub_00200F40_0x200f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200F40_0x200f40");
#endif

    switch (ctx->pc) {
        case 0x200f54u: goto label_200f54;
        case 0x200f64u: goto label_200f64;
        default: break;
    }

    ctx->pc = 0x200f40u;

    // 0x200f40: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x200f40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x200f44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200f44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200f4c: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x200F4Cu;
    SET_GPR_U32(ctx, 31, 0x200F54u);
    ctx->pc = 0x200F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F4Cu;
    // 0x200f50: 0x24a53640  addiu       $a1, $a1, 0x3640 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x200F4Cu, 0x200F54u)) {
        return;
    }
    ctx->pc = 0x200F54u;
label_200f54:
    // 0x200f54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200F54u;
    {
        const bool branch_taken_0x200f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F54u;
        // 0x200f58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f54) {
            ctx->pc = 0x200F68u;
            goto label_200f68;
        }
    }
    ctx->pc = 0x200F5Cu;
    // 0x200f5c: 0xc095596  jal         func_255658
    ctx->pc = 0x200F5Cu;
    SET_GPR_U32(ctx, 31, 0x200F64u);
    ctx->pc = 0x200F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200F5Cu;
    // 0x200f60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x200F5Cu, 0x200F64u)) {
        return;
    }
    ctx->pc = 0x200F64u;
label_200f64:
    // 0x200f64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200f68:
    // 0x200f68: 0x3e00008  jr          $ra
    ctx->pc = 0x200F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200F68u;
        // 0x200f6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200F70u;
}
