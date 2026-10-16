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

// Function: sub_002EEBC8
// Address: 0x2eebc8 - 0x2eec58
void sub_002EEBC8_0x2eebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EEBC8_0x2eebc8");
#endif

    switch (ctx->pc) {
        case 0x2eebf8u: goto label_2eebf8;
        case 0x2eec14u: goto label_2eec14;
        case 0x2eec38u: goto label_2eec38;
        default: break;
    }

    ctx->pc = 0x2eebc8u;

    // 0x2eebc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eebcc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2eebccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2eebd0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2eebd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2eebd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2eebd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebd8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2eebd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2eebdc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2eebdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eebe0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2eebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2eebe4: 0x3c120003  lui         $s2, 0x3
    ctx->pc = 0x2eebe4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3 << 16));
    // 0x2eebe8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2eebe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eebec: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2eebecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eebf0: 0xc092858  jal         func_24A160
    ctx->pc = 0x2EEBF0u;
    SET_GPR_U32(ctx, 31, 0x2EEBF8u);
    ctx->pc = 0x2EEBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEBF0u;
    // 0x2eebf4: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x2EEBF0u, 0x2EEBF8u)) {
        return;
    }
    ctx->pc = 0x2EEBF8u;
label_2eebf8:
    // 0x2eebf8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EEBF8u;
    {
        const bool branch_taken_0x2eebf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEBF8u;
        // 0x2eebfc: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eebf8) {
            ctx->pc = 0x2EEC38u;
            goto label_2eec38;
        }
    }
    ctx->pc = 0x2EEC00u;
    // 0x2eec00: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2eec00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2eec04: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x2eec04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x2eec08: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2eec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2eec0c: 0xc09289c  jal         func_24A270
    ctx->pc = 0x2EEC0Cu;
    SET_GPR_U32(ctx, 31, 0x2EEC14u);
    ctx->pc = 0x2EEC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC0Cu;
    // 0x2eec10: 0xb22825  or          $a1, $a1, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x2EEC0Cu, 0x2EEC14u)) {
        return;
    }
    ctx->pc = 0x2EEC14u;
label_2eec14:
    // 0x2eec14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EEC14u;
    {
        const bool branch_taken_0x2eec14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2eec14) {
            ctx->pc = 0x2EEC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EEC14u;
            // 0x2eec18: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EEC24u;
            goto label_2eec24;
        }
    }
    ctx->pc = 0x2EEC1Cu;
    // 0x2eec1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EEC1Cu;
    {
        const bool branch_taken_0x2eec1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC1Cu;
        // 0x2eec20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec1c) {
            ctx->pc = 0x2EEC28u;
            goto label_2eec28;
        }
    }
    ctx->pc = 0x2EEC24u;
label_2eec24:
    // 0x2eec24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eec24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2eec28:
    // 0x2eec28: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EEC28u;
    {
        const bool branch_taken_0x2eec28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EEC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC28u;
        // 0x2eec2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eec28) {
            ctx->pc = 0x2EEC3Cu;
            goto label_2eec3c;
        }
    }
    ctx->pc = 0x2EEC30u;
    // 0x2eec30: 0xc092932  jal         func_24A4C8
    ctx->pc = 0x2EEC30u;
    SET_GPR_U32(ctx, 31, 0x2EEC38u);
    ctx->pc = 0x2EEC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EEC30u;
    // 0x2eec34: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x2EEC30u, 0x2EEC38u)) {
        return;
    }
    ctx->pc = 0x2EEC38u;
label_2eec38:
    // 0x2eec38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2eec38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2eec3c:
    // 0x2eec3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2eec3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2eec40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2eec40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2eec44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2eec44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2eec48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2eec48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2eec4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EEC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EEC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EEC4Cu;
        // 0x2eec50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EEC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EEC54u;
    // 0x2eec54: 0x0  nop
    ctx->pc = 0x2eec54u;
    // NOP
    ctx->pc = 0x2eec58u;
}
