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

// Function: sub_002543B8
// Address: 0x2543b8 - 0x254420
void sub_002543B8_0x2543b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002543B8_0x2543b8");
#endif

    switch (ctx->pc) {
        case 0x2543e0u: goto label_2543e0;
        case 0x2543f8u: goto label_2543f8;
        default: break;
    }

    ctx->pc = 0x2543b8u;

    // 0x2543b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2543b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2543bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2543bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2543c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2543c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2543c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2543c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2543c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2543cc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2543ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2543d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2543d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2543d4: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x2543d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2543d8: 0xc092782  jal         func_249E08
    ctx->pc = 0x2543D8u;
    SET_GPR_U32(ctx, 31, 0x2543E0u);
    ctx->pc = 0x2543DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543D8u;
    // 0x2543dc: 0x24a5002c  addiu       $a1, $a1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2543D8u, 0x2543E0u)) {
        return;
    }
    ctx->pc = 0x2543E0u;
label_2543e0:
    // 0x2543e0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2543E0u;
    {
        const bool branch_taken_0x2543e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2543E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543E0u;
        // 0x2543e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543e0) {
            ctx->pc = 0x254404u;
            goto label_254404;
        }
    }
    ctx->pc = 0x2543E8u;
    // 0x2543e8: 0x8e25006c  lw          $a1, 0x6C($s1)
    ctx->pc = 0x2543e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x2543ec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2543ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2543f0: 0xc092782  jal         func_249E08
    ctx->pc = 0x2543F0u;
    SET_GPR_U32(ctx, 31, 0x2543F8u);
    ctx->pc = 0x2543F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2543F0u;
    // 0x2543f4: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2543F0u, 0x2543F8u)) {
        return;
    }
    ctx->pc = 0x2543F8u;
label_2543f8:
    // 0x2543f8: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2543f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2543fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2543FCu;
    {
        const bool branch_taken_0x2543fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2543FCu;
        // 0x254400: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2543fc) {
            ctx->pc = 0x254408u;
            goto label_254408;
        }
    }
    ctx->pc = 0x254404u;
label_254404:
    // 0x254404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254408:
    // 0x254408: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x254408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25440c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25440cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254414: 0x3e00008  jr          $ra
    ctx->pc = 0x254414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254414u;
        // 0x254418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25441Cu;
    // 0x25441c: 0x0  nop
    ctx->pc = 0x25441cu;
    // NOP
    ctx->pc = 0x254420u;
}
