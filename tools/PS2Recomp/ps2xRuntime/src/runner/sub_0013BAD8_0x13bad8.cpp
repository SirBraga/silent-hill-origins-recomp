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

// Function: sub_0013BAD8
// Address: 0x13bad8 - 0x13bbc0
void sub_0013BAD8_0x13bad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BAD8_0x13bad8");
#endif

    switch (ctx->pc) {
        case 0x13bb10u: goto label_13bb10;
        case 0x13bb68u: goto label_13bb68;
        default: break;
    }

    ctx->pc = 0x13bad8u;

    // 0x13bad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13bad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13badc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13badcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x13bae0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x13bae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x13bae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13bae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13bae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13baec: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x13baecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x13baf0: 0x14a00010  bnez        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BAF0u;
    {
        const bool branch_taken_0x13baf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BAF0u;
        // 0x13baf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13baf0) {
            ctx->pc = 0x13BB34u;
            goto label_13bb34;
        }
    }
    ctx->pc = 0x13BAF8u;
    // 0x13baf8: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x13baf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x13bafc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x13bafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x13bb00: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x13BB00u;
    {
        const bool branch_taken_0x13bb00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB00u;
        // 0x13bb04: 0x3c130034  lui         $s3, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb00) {
            ctx->pc = 0x13BB84u;
            goto label_13bb84;
        }
    }
    ctx->pc = 0x13BB08u;
    // 0x13bb08: 0xc076a1a  jal         func_1DA868
    ctx->pc = 0x13BB08u;
    SET_GPR_U32(ctx, 31, 0x13BB10u);
    ctx->pc = 0x13BB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB08u;
    // 0x13bb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA868u, 0x13BB08u, 0x13BB10u)) {
        return;
    }
    ctx->pc = 0x13BB10u;
label_13bb10:
    // 0x13bb10: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13bb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13bb14: 0x8e648418  lw          $a0, -0x7BE8($s3)
    ctx->pc = 0x13bb14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935576)));
    // 0x13bb18: 0x8c45841c  lw          $a1, -0x7BE4($v0)
    ctx->pc = 0x13bb18u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33841Cu));
    // 0x13bb1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bb20: 0x831804  sllv        $v1, $v1, $a0
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x13bb24: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13bb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bb28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x13bb28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x13bb2c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x13BB2Cu;
    {
        const bool branch_taken_0x13bb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB2Cu;
        // 0x13bb30: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb2c) {
            ctx->pc = 0x13BB84u;
            goto label_13bb84;
        }
    }
    ctx->pc = 0x13BB34u;
label_13bb34:
    // 0x13bb34: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x13bb34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x13bb38: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x13bb38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x13bb3c: 0x8e25841c  lw          $a1, -0x7BE4($s1)
    ctx->pc = 0x13bb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33841Cu));
    // 0x13bb40: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x13bb40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13bb44: 0x8c838418  lw          $v1, -0x7BE8($a0)
    ctx->pc = 0x13bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338418u));
    // 0x13bb48: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x13bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13bb4c: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x13bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x13bb50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13bb50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13bb54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13BB54u;
    {
        const bool branch_taken_0x13bb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB54u;
        // 0x13bb58: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb54) {
            ctx->pc = 0x13BB84u;
            goto label_13bb84;
        }
    }
    ctx->pc = 0x13BB5Cu;
    // 0x13bb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13bb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bb60: 0xc076a1a  jal         func_1DA868
    ctx->pc = 0x13BB60u;
    SET_GPR_U32(ctx, 31, 0x13BB68u);
    ctx->pc = 0x13BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB60u;
    // 0x13bb64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA868u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA868u, 0x13BB60u, 0x13BB68u)) {
        return;
    }
    ctx->pc = 0x13BB68u;
label_13bb68:
    // 0x13bb68: 0x8e22841c  lw          $v0, -0x7BE4($s1)
    ctx->pc = 0x13bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935580)));
    // 0x13bb6c: 0x8e638418  lw          $v1, -0x7BE8($s3)
    ctx->pc = 0x13bb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935576)));
    // 0x13bb70: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bb74: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x13bb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
    // 0x13bb78: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x13bb78u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x13bb7c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x13bb7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13bb80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x13bb80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_13bb84:
    // 0x13bb84: 0x8e628418  lw          $v0, -0x7BE8($s3)
    ctx->pc = 0x13bb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935576)));
    // 0x13bb88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13bb88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13bb8c: 0x2c430020  sltiu       $v1, $v0, 0x20
    ctx->pc = 0x13bb8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x13bb90: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BB90u;
    {
        const bool branch_taken_0x13bb90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13BB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB90u;
        // 0x13bb94: 0xae628418  sw          $v0, -0x7BE8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294935576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb90) {
            ctx->pc = 0x13BBA0u;
            goto label_13bba0;
        }
    }
    ctx->pc = 0x13BB98u;
    // 0x13bb98: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x13bb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x13bb9c: 0xae628418  sw          $v0, -0x7BE8($s3)
    ctx->pc = 0x13bb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294935576), GPR_U32(ctx, 2));
label_13bba0:
    // 0x13bba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13bba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13bba4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x13bba4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13bba8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x13bba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13bbac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13bbacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bbb0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x13bbb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13bbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13bbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x13BBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BBB8u;
        // 0x13bbbc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BBC0u;
}
