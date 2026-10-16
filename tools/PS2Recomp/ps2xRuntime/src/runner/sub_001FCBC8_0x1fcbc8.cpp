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

// Function: sub_001FCBC8
// Address: 0x1fcbc8 - 0x1fcc98
void sub_001FCBC8_0x1fcbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCBC8_0x1fcbc8");
#endif

    switch (ctx->pc) {
        case 0x1fcc1cu: goto label_1fcc1c;
        case 0x1fcc6cu: goto label_1fcc6c;
        default: break;
    }

    ctx->pc = 0x1fcbc8u;

    // 0x1fcbc8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1fcbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1fcbcc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1fcbccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1fcbd0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1fcbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1fcbd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1fcbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1fcbd8: 0x3c120070  lui         $s2, 0x70
    ctx->pc = 0x1fcbd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)112 << 16));
    // 0x1fcbdc: 0x8c621a64  lw          $v0, 0x1A64($v1)
    ctx->pc = 0x1fcbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A64u));
    // 0x1fcbe0: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1fcbe0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcbe4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1fcbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1fcbe8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1fcbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1fcbec: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1FCBECu;
    {
        const bool branch_taken_0x1fcbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBECu;
        // 0x1fcbf0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcbec) {
            ctx->pc = 0x1FCC6Cu;
            goto label_1fcc6c;
        }
    }
    ctx->pc = 0x1FCBF4u;
    // 0x1fcbf4: 0xa3a00010  sb          $zero, 0x10($sp)
    ctx->pc = 0x1fcbf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fcbf8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1fcbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1fcbfc: 0x24448290  addiu       $a0, $v0, -0x7D70
    ctx->pc = 0x1fcbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1fcc00: 0x26501a58  addiu       $s0, $s2, 0x1A58
    ctx->pc = 0x1fcc00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 6744));
    // 0x1fcc04: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fcc04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338298u));
    // 0x1fcc08: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1fcc08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fcc0c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FCC0Cu;
    {
        const bool branch_taken_0x1fcc0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC0Cu;
        // 0x1fcc10: 0xae401a58  sw          $zero, 0x1A58($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 6744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc0c) {
            ctx->pc = 0x1FCC24u;
            goto label_1fcc24;
        }
    }
    ctx->pc = 0x1FCC14u;
    // 0x1fcc14: 0xc076936  jal         func_1DA4D8
    ctx->pc = 0x1FCC14u;
    SET_GPR_U32(ctx, 31, 0x1FCC1Cu);
    ctx->pc = 0x1FCC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC14u;
    // 0x1fcc18: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DA4D8u, 0x1FCC14u, 0x1FCC1Cu)) {
        return;
    }
    ctx->pc = 0x1FCC1Cu;
label_1fcc1c:
    // 0x1fcc1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FCC1Cu;
    {
        const bool branch_taken_0x1fcc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC1Cu;
        // 0x1fcc20: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcc1c) {
            ctx->pc = 0x1FCC2Cu;
            goto label_1fcc2c;
        }
    }
    ctx->pc = 0x1FCC24u;
label_1fcc24:
    // 0x1fcc24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fcc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fcc28: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1fcc28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_1fcc2c:
    // 0x1fcc2c: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1fcc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fcc30: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fcc30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fcc34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1fcc34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1fcc38: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x1fcc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x1fcc3c: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x1fcc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fcc40: 0x2484cb50  addiu       $a0, $a0, -0x34B0
    ctx->pc = 0x1fcc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953808));
    // 0x1fcc44: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fcc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fcc48: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fcc48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fcc4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fcc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fcc50: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fcc50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1fcc54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fcc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fcc58: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fcc58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x1fcc5c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fcc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fcc60: 0xac63000c  sw          $v1, 0xC($v1)
    ctx->pc = 0x1fcc60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 3));
    // 0x1fcc64: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x1FCC64u;
    SET_GPR_U32(ctx, 31, 0x1FCC6Cu);
    ctx->pc = 0x1FCC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCC64u;
    // 0x1fcc68: 0xae651a64  sw          $a1, 0x1A64($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 6756), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x1FCC64u, 0x1FCC6Cu)) {
        return;
    }
    ctx->pc = 0x1FCC6Cu;
label_1fcc6c:
    // 0x1fcc6c: 0x26421a58  addiu       $v0, $s2, 0x1A58
    ctx->pc = 0x1fcc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 6744));
    // 0x1fcc70: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1fcc70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fcc74: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1fcc74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fcc78: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1fcc78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fcc7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1fcc7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fcc80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fcc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcc84: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCC84u;
        // 0x1fcc88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCC8Cu;
    // 0x1fcc8c: 0x0  nop
    ctx->pc = 0x1fcc8cu;
    // NOP
    // 0x1fcc90: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1fcc90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1fcc94: 0x0  nop
    ctx->pc = 0x1fcc94u;
    // NOP
    ctx->pc = 0x1fcc98u;
}
