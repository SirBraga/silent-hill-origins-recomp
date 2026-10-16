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

// Function: sub_002A41E8
// Address: 0x2a41e8 - 0x2a4240
void sub_002A41E8_0x2a41e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A41E8_0x2a41e8");
#endif

    switch (ctx->pc) {
        case 0x2a420cu: goto label_2a420c;
        case 0x2a4228u: goto label_2a4228;
        default: break;
    }

    ctx->pc = 0x2a41e8u;

    // 0x2a41e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a41e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a41ec: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2a41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x2a41f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a41f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a41f4: 0x8c625ef0  lw          $v0, 0x5EF0($v1)
    ctx->pc = 0x2a41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x735EF0u));
    // 0x2a41f8: 0x24705ef0  addiu       $s0, $v1, 0x5EF0
    ctx->pc = 0x2a41f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24304));
    // 0x2a41fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A41FCu;
    {
        const bool branch_taken_0x2a41fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A41FCu;
        // 0x2a4200: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a41fc) {
            ctx->pc = 0x2A4228u;
            goto label_2a4228;
        }
    }
    ctx->pc = 0x2A4204u;
    // 0x2a4204: 0xc0a69d6  jal         func_29A758
    ctx->pc = 0x2A4204u;
    SET_GPR_U32(ctx, 31, 0x2A420Cu);
    ctx->pc = 0x29A758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29A758u, 0x2A4204u, 0x2A420Cu)) {
        return;
    }
    ctx->pc = 0x2A420Cu;
label_2a420c:
    // 0x2a420c: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2a420cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2a4210: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2a4210u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2a4214: 0x24a5e290  addiu       $a1, $a1, -0x1D70
    ctx->pc = 0x2a4214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959760));
    // 0x2a4218: 0x24c6e2a0  addiu       $a2, $a2, -0x1D60
    ctx->pc = 0x2a4218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959776));
    // 0x2a421c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4220: 0xc07eafc  jal         func_1FABF0
    ctx->pc = 0x2A4220u;
    SET_GPR_U32(ctx, 31, 0x2A4228u);
    ctx->pc = 0x2A4224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4220u;
    // 0x2a4224: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FABF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FABF0u, 0x2A4220u, 0x2A4228u)) {
        return;
    }
    ctx->pc = 0x2A4228u;
label_2a4228:
    // 0x2a4228: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a4228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a422c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a422cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a4234: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4234u;
        // 0x2a4238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A423Cu;
    // 0x2a423c: 0x0  nop
    ctx->pc = 0x2a423cu;
    // NOP
    ctx->pc = 0x2a4240u;
}
