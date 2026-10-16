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

// Function: sub_0013D168
// Address: 0x13d168 - 0x13d210
void sub_0013D168_0x13d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D168_0x13d168");
#endif

    switch (ctx->pc) {
        case 0x13d184u: goto label_13d184;
        case 0x13d198u: goto label_13d198;
        case 0x13d1b0u: goto label_13d1b0;
        case 0x13d1d0u: goto label_13d1d0;
        case 0x13d1ecu: goto label_13d1ec;
        default: break;
    }

    ctx->pc = 0x13d168u;

    // 0x13d168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d16c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x13d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x13d170: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x13d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13d174: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13d17c: 0xc04ed44  jal         func_13B510
    ctx->pc = 0x13D17Cu;
    SET_GPR_U32(ctx, 31, 0x13D184u);
    ctx->pc = 0x13D180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D17Cu;
    // 0x13d180: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B510u, 0x13D17Cu, 0x13D184u)) {
        return;
    }
    ctx->pc = 0x13D184u;
label_13d184:
    // 0x13d184: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13d184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13d188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13d188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d18c: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x13d18cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x13d190: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x13D190u;
    SET_GPR_U32(ctx, 31, 0x13D198u);
    ctx->pc = 0x13D194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D190u;
    // 0x13d194: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x13D190u, 0x13D198u)) {
        return;
    }
    ctx->pc = 0x13D198u;
label_13d198:
    // 0x13d198: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13d198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d19c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d1a0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13D1A0u;
    {
        const bool branch_taken_0x13d1a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1A0u;
        // 0x13d1a4: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1a0) {
            ctx->pc = 0x13D1FCu;
            goto label_13d1fc;
        }
    }
    ctx->pc = 0x13D1A8u;
    // 0x13d1a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x13d1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d1ac: 0x0  nop
    ctx->pc = 0x13d1acu;
    // NOP
label_13d1b0:
    // 0x13d1b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x13d1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13d1b4: 0x14500007  bne         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13D1B4u;
    {
        const bool branch_taken_0x13d1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x13D1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1B4u;
        // 0x13d1b8: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1b4) {
            ctx->pc = 0x13D1D4u;
            goto label_13d1d4;
        }
    }
    ctx->pc = 0x13D1BCu;
    // 0x13d1bc: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x13d1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13d1c0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13D1C0u;
    {
        const bool branch_taken_0x13d1c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d1c0) {
            ctx->pc = 0x13D1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D1C0u;
            // 0x13d1c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D1D8u;
            goto label_13d1d8;
        }
    }
    ctx->pc = 0x13D1C8u;
    // 0x13d1c8: 0xc07f960  jal         func_1FE580
    ctx->pc = 0x13D1C8u;
    SET_GPR_U32(ctx, 31, 0x13D1D0u);
    ctx->pc = 0x1FE580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE580u, 0x13D1C8u, 0x13D1D0u)) {
        return;
    }
    ctx->pc = 0x13D1D0u;
label_13d1d0:
    // 0x13d1d0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_13d1d4:
    // 0x13d1d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13d1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13d1d8:
    // 0x13d1d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x13d1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d1dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13d1e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13d1e4: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x13D1E4u;
    SET_GPR_U32(ctx, 31, 0x13D1ECu);
    ctx->pc = 0x13D1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D1E4u;
    // 0x13d1e8: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x13D1E4u, 0x13D1ECu)) {
        return;
    }
    ctx->pc = 0x13D1ECu;
label_13d1ec:
    // 0x13d1ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d1f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d1f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x13D1F4u;
    {
        const bool branch_taken_0x13d1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13D1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D1F4u;
        // 0x13d1f8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d1f4) {
            ctx->pc = 0x13D1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13d1b0;
        }
    }
    ctx->pc = 0x13D1FCu;
label_13d1fc:
    // 0x13d1fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x13d1fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d200: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13d200u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13d204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d208: 0x3e00008  jr          $ra
    ctx->pc = 0x13D208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D208u;
        // 0x13d20c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D210u;
}
