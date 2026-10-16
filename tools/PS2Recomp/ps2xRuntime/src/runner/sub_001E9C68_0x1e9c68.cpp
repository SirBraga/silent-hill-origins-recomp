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

// Function: sub_001E9C68
// Address: 0x1e9c68 - 0x1e9d90
void sub_001E9C68_0x1e9c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9C68_0x1e9c68");
#endif

    switch (ctx->pc) {
        case 0x1e9cc4u: goto label_1e9cc4;
        case 0x1e9cd4u: goto label_1e9cd4;
        case 0x1e9d08u: goto label_1e9d08;
        case 0x1e9d48u: goto label_1e9d48;
        case 0x1e9d5cu: goto label_1e9d5c;
        default: break;
    }

    ctx->pc = 0x1e9c68u;

    // 0x1e9c68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1e9c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1e9c6c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e9c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1e9c70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e9c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e9c74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e9c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9c78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1e9c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1e9c7c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1e9c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1e9c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e9c84: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1e9c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1e9c88: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x1e9c88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1e9c8c: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
    ctx->pc = 0x1E9C8Cu;
    {
        const bool branch_taken_0x1e9c8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9C8Cu;
        // 0x1e9c90: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9c8c) {
            ctx->pc = 0x1E9D68u;
            goto label_1e9d68;
        }
    }
    ctx->pc = 0x1E9C94u;
    // 0x1e9c94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e9c98: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1e9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1e9c9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1e9c9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ca0: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1e9ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e9ca4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9ca8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1e9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1e9cac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e9cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e9cb0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1e9cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1e9cb4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1e9cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1e9cb8: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x1e9cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
    // 0x1e9cbc: 0xc07b020  jal         func_1EC080
    ctx->pc = 0x1E9CBCu;
    SET_GPR_U32(ctx, 31, 0x1E9CC4u);
    ctx->pc = 0x1E9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CBCu;
    // 0x1e9cc0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC080u, 0x1E9CBCu, 0x1E9CC4u)) {
        return;
    }
    ctx->pc = 0x1E9CC4u;
label_1e9cc4:
    // 0x1e9cc4: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e9cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1e9cc8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e9cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9ccc: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x1E9CCCu;
    SET_GPR_U32(ctx, 31, 0x1E9CD4u);
    ctx->pc = 0x1E9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9CCCu;
    // 0x1e9cd0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1E9CCCu, 0x1E9CD4u)) {
        return;
    }
    ctx->pc = 0x1E9CD4u;
label_1e9cd4:
    // 0x1e9cd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e9cd8: 0x8e14006c  lw          $s4, 0x6C($s0)
    ctx->pc = 0x1e9cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1e9cdc: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1e9cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x1e9ce0: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x1e9ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1e9ce4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1e9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e9ce8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e9cec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1e9cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e9cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e9cf4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e9cf8: 0x1a80001b  blez        $s4, . + 4 + (0x1B << 2)
    ctx->pc = 0x1E9CF8u;
    {
        const bool branch_taken_0x1e9cf8 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1E9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9CF8u;
        // 0x1e9cfc: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9cf8) {
            ctx->pc = 0x1E9D68u;
            goto label_1e9d68;
        }
    }
    ctx->pc = 0x1E9D00u;
    // 0x1e9d00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1e9d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d04: 0x24b10010  addiu       $s1, $a1, 0x10
    ctx->pc = 0x1e9d04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1e9d08:
    // 0x1e9d08: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x1e9d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1e9d0c: 0x1228c0  sll         $a1, $s2, 3
    ctx->pc = 0x1e9d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x1e9d10: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1e9d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e9d14: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x1e9d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
    // 0x1e9d18: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1e9d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1e9d1c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x1e9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1e9d20: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1e9d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1e9d24: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e9d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e9d28: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1e9d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1e9d2c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x1e9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x1e9d30: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1e9d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1e9d34: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1e9d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1e9d38: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1e9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1e9d3c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1e9d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1e9d40: 0xc08994a  jal         func_226528
    ctx->pc = 0x1E9D40u;
    SET_GPR_U32(ctx, 31, 0x1E9D48u);
    ctx->pc = 0x1E9D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D40u;
    // 0x1e9d44: 0x8cc40004  lw          $a0, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1E9D40u, 0x1E9D48u)) {
        return;
    }
    ctx->pc = 0x1E9D48u;
label_1e9d48:
    // 0x1e9d48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1e9d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d4c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1e9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1e9d50: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e9d50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9d54: 0xc092e7c  jal         func_24B9F0
    ctx->pc = 0x1E9D54u;
    SET_GPR_U32(ctx, 31, 0x1E9D5Cu);
    ctx->pc = 0x1E9D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E9D54u;
    // 0x1e9d58: 0x263100a0  addiu       $s1, $s1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x1E9D54u, 0x1E9D5Cu)) {
        return;
    }
    ctx->pc = 0x1E9D5Cu;
label_1e9d5c:
    // 0x1e9d5c: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x1e9d5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1e9d60: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x1E9D60u;
    {
        const bool branch_taken_0x1e9d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D60u;
        // 0x1e9d64: 0x261000a0  addiu       $s0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9d60) {
            ctx->pc = 0x1E9D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e9d08;
        }
    }
    ctx->pc = 0x1E9D68u;
label_1e9d68:
    // 0x1e9d68: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1e9d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9d6c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e9d6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9d70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e9d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9d74: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1e9d74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e9d78: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1e9d78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9d80: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9D80u;
        // 0x1e9d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E9D88u;
    // 0x1e9d88: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x1e9d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1e9d8c: 0x0  nop
    ctx->pc = 0x1e9d8cu;
    // NOP
    ctx->pc = 0x1e9d90u;
}
