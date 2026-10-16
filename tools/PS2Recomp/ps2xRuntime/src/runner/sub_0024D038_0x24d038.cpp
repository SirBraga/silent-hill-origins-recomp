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

// Function: sub_0024D038
// Address: 0x24d038 - 0x24d108
void sub_0024D038_0x24d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D038_0x24d038");
#endif

    switch (ctx->pc) {
        case 0x24d098u: goto label_24d098;
        case 0x24d0a0u: goto label_24d0a0;
        default: break;
    }

    ctx->pc = 0x24d038u;

    // 0x24d038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24d038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24d03c: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x24d03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x24d040: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x24d040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x24d044: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24d044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24d048: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24d048u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24d04c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x24d04cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d050: 0x24840fd8  addiu       $a0, $a0, 0xFD8
    ctx->pc = 0x24d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4056));
    // 0x24d054: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x24d054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x24d058: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x24d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x24d05c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x24d05cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x24d060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d064: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x24d064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d068: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x24d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24d06c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d070: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x24d070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x24d074: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x24d074u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x24d078: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x24d078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x24d07c: 0x8c424198  lw          $v0, 0x4198($v0)
    ctx->pc = 0x24d07cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4198u));
    // 0x24d080: 0x478821  addu        $s1, $v0, $a3
    ctx->pc = 0x24d080u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x24d084: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x24d084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x24d088: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x24d088u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24d08c: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x24D08Cu;
    {
        const bool branch_taken_0x24d08c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x24D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D08Cu;
        // 0x24d090: 0x8f869128  lw          $a2, -0x6ED8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d08c) {
            ctx->pc = 0x24D0B8u;
            goto label_24d0b8;
        }
    }
    ctx->pc = 0x24D094u;
    // 0x24d094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d098:
    // 0x24d098: 0xc093356  jal         func_24CD58
    ctx->pc = 0x24D098u;
    SET_GPR_U32(ctx, 31, 0x24D0A0u);
    ctx->pc = 0x24D09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D098u;
    // 0x24d09c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x24D098u, 0x24D0A0u)) {
        return;
    }
    ctx->pc = 0x24D0A0u;
label_24d0a0:
    // 0x24d0a0: 0x0  nop
    ctx->pc = 0x24d0a0u;
    // NOP
    // 0x24d0a4: 0x0  nop
    ctx->pc = 0x24d0a4u;
    // NOP
    // 0x24d0a8: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24D0A8u;
    {
        const bool branch_taken_0x24d0a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x24D0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0A8u;
        // 0x24d0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0a8) {
            ctx->pc = 0x24D098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24d098;
        }
    }
    ctx->pc = 0x24D0B0u;
    // 0x24d0b0: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x24d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x24d0b4: 0x8cc64198  lw          $a2, 0x4198($a2)
    ctx->pc = 0x24d0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6B4198u));
label_24d0b8:
    // 0x24d0b8: 0x26450fd8  addiu       $a1, $s2, 0xFD8
    ctx->pc = 0x24d0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
    // 0x24d0bc: 0x24a40008  addiu       $a0, $a1, 0x8
    ctx->pc = 0x24d0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x24d0c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x24d0c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24d0c4: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x24d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x24d0c8: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x24d0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x24d0cc: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x24d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x24d0d0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x24d0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x24d0d4: 0xac630000  sw          $v1, 0x0($v1)
    ctx->pc = 0x24d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 3));
    // 0x24d0d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24d0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24d0dc: 0xac840004  sw          $a0, 0x4($a0)
    ctx->pc = 0x24d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 4));
    // 0x24d0e0: 0xac840000  sw          $a0, 0x0($a0)
    ctx->pc = 0x24d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 4));
    // 0x24d0e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x24d0e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d0e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x24d0e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d0f0: 0xaca0fff8  sw          $zero, -0x8($a1)
    ctx->pc = 0x24d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967288), GPR_U32(ctx, 0));
    // 0x24d0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x24D0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0F4u;
        // 0x24d0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D0FCu;
    // 0x24d0fc: 0x0  nop
    ctx->pc = 0x24d0fcu;
    // NOP
    // 0x24d100: 0xaf85c000  sw          $a1, -0x4000($gp)
    ctx->pc = 0x24d100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950912), GPR_U32(ctx, 5));
    // 0x24d104: 0x0  nop
    ctx->pc = 0x24d104u;
    // NOP
    ctx->pc = 0x24d108u;
}
