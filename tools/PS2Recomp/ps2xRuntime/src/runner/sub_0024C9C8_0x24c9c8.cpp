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

// Function: sub_0024C9C8
// Address: 0x24c9c8 - 0x24ca30
void sub_0024C9C8_0x24c9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C9C8_0x24c9c8");
#endif

    switch (ctx->pc) {
        case 0x24c9f8u: goto label_24c9f8;
        case 0x24ca00u: goto label_24ca00;
        default: break;
    }

    ctx->pc = 0x24c9c8u;

    // 0x24c9c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24c9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24c9cc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24c9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24c9d0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24c9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24c9d4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24c9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24c9d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24c9d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c9dc: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x24c9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x24c9e0: 0x8e103f68  lw          $s0, 0x3F68($s0)
    ctx->pc = 0x24c9e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x6B3F68u));
    // 0x24c9e4: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x24c9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x24c9e8: 0x26523f68  addiu       $s2, $s2, 0x3F68
    ctx->pc = 0x24c9e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16232));
    // 0x24c9ec: 0x12120009  beq         $s0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x24C9ECu;
    {
        const bool branch_taken_0x24c9ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x24C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C9ECu;
        // 0x24c9f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c9ec) {
            ctx->pc = 0x24CA14u;
            goto label_24ca14;
        }
    }
    ctx->pc = 0x24C9F4u;
    // 0x24c9f4: 0x0  nop
    ctx->pc = 0x24c9f4u;
    // NOP
label_24c9f8:
    // 0x24c9f8: 0xc0931d6  jal         func_24C758
    ctx->pc = 0x24C9F8u;
    SET_GPR_U32(ctx, 31, 0x24CA00u);
    ctx->pc = 0x24C9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C9F8u;
    // 0x24c9fc: 0x2604ffe4  addiu       $a0, $s0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24C758u, 0x24C9F8u, 0x24CA00u)) {
        return;
    }
    ctx->pc = 0x24CA00u;
label_24ca00:
    // 0x24ca00: 0x2182a  slt         $v1, $zero, $v0
    ctx->pc = 0x24ca00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24ca04: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x24ca04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x24ca08: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x24ca08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x24ca0c: 0x1612fffa  bne         $s0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24CA0Cu;
    {
        const bool branch_taken_0x24ca0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x24CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA0Cu;
        // 0x24ca10: 0x918821  addu        $s1, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24ca0c) {
            ctx->pc = 0x24C9F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24c9f8;
        }
    }
    ctx->pc = 0x24CA14u;
label_24ca14:
    // 0x24ca14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x24ca14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ca18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24ca18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ca1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24ca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ca20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24ca20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ca24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ca24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ca28: 0x3e00008  jr          $ra
    ctx->pc = 0x24CA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CA28u;
        // 0x24ca2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CA30u;
}
