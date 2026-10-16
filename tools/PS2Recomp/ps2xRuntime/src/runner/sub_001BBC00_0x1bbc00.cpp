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

// Function: sub_001BBC00
// Address: 0x1bbc00 - 0x1bbd18
void sub_001BBC00_0x1bbc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBC00_0x1bbc00");
#endif

    switch (ctx->pc) {
        case 0x1bbc4cu: goto label_1bbc4c;
        case 0x1bbc5cu: goto label_1bbc5c;
        case 0x1bbc88u: goto label_1bbc88;
        case 0x1bbcbcu: goto label_1bbcbc;
        case 0x1bbcccu: goto label_1bbccc;
        case 0x1bbcd4u: goto label_1bbcd4;
        case 0x1bbd00u: goto label_1bbd00;
        default: break;
    }

    ctx->pc = 0x1bbc00u;

    // 0x1bbc00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bbc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bbc04: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bbc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bbc08: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bbc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bbc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bbc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1bbc10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1bbc14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbc18: 0x8e020360  lw          $v0, 0x360($s0)
    ctx->pc = 0x1bbc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 864)));
    // 0x1bbc1c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1bbc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1bbc20: 0x8e0302dc  lw          $v1, 0x2DC($s0)
    ctx->pc = 0x1bbc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 732)));
    // 0x1bbc24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bbc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bbc28: 0x18400031  blez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1BBC28u;
    {
        const bool branch_taken_0x1bbc28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1BBC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC28u;
        // 0x1bbc2c: 0xae020324  sw          $v0, 0x324($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc28) {
            ctx->pc = 0x1BBCF0u;
            goto label_1bbcf0;
        }
    }
    ctx->pc = 0x1BBC30u;
    // 0x1bbc30: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1bbc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
    // 0x1bbc34: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BBC34u;
    {
        const bool branch_taken_0x1bbc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC34u;
        // 0x1bbc38: 0x8c710004  lw          $s1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc34) {
            ctx->pc = 0x1BBC64u;
            goto label_1bbc64;
        }
    }
    ctx->pc = 0x1BBC3Cu;
    // 0x1bbc3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bbc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc44: 0xc06ee2c  jal         func_1BB8B0
    ctx->pc = 0x1BBC44u;
    SET_GPR_U32(ctx, 31, 0x1BBC4Cu);
    ctx->pc = 0x1BBC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC44u;
    // 0x1bbc48: 0x26120308  addiu       $s2, $s0, 0x308 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB8B0u, 0x1BBC44u, 0x1BBC4Cu)) {
        return;
    }
    ctx->pc = 0x1BBC4Cu;
label_1bbc4c:
    // 0x1bbc4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bbc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbc54: 0xc06edb8  jal         func_1BB6E0
    ctx->pc = 0x1BBC54u;
    SET_GPR_U32(ctx, 31, 0x1BBC5Cu);
    ctx->pc = 0x1BBC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBC54u;
    // 0x1bbc58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB6E0u, 0x1BBC54u, 0x1BBC5Cu)) {
        return;
    }
    ctx->pc = 0x1BBC5Cu;
label_1bbc5c:
    // 0x1bbc5c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1BBC5Cu;
    {
        const bool branch_taken_0x1bbc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc5c) {
            ctx->pc = 0x1BBCCCu;
            goto label_1bbccc;
        }
    }
    ctx->pc = 0x1BBC64u;
label_1bbc64:
    // 0x1bbc64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bbc64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bbc68: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1bbc68u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbc6c: 0xae020320  sw          $v0, 0x320($s0)
    ctx->pc = 0x1bbc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
    // 0x1bbc70: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BBC70u;
    {
        const bool branch_taken_0x1bbc70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC70u;
        // 0x1bbc74: 0x26120308  addiu       $s2, $s0, 0x308 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc70) {
            ctx->pc = 0x1BBCA0u;
            goto label_1bbca0;
        }
    }
    ctx->pc = 0x1BBC78u;
    // 0x1bbc78: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1BBC78u;
    {
        const bool branch_taken_0x1bbc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbc78) {
            ctx->pc = 0x1BBC7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBC78u;
            // 0x1bbc7c: 0x8e020320  lw          $v0, 0x320($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBCA4u;
            goto label_1bbca4;
        }
    }
    ctx->pc = 0x1BBC80u;
    // 0x1bbc80: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x1bbc80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1bbc84: 0x0  nop
    ctx->pc = 0x1bbc84u;
    // NOP
label_1bbc88:
    // 0x1bbc88: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBC88u;
    {
        const bool branch_taken_0x1bbc88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBC88u;
        // 0x1bbc8c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbc88) {
            ctx->pc = 0x1BBCA0u;
            goto label_1bbca0;
        }
    }
    ctx->pc = 0x1BBC90u;
    // 0x1bbc90: 0x0  nop
    ctx->pc = 0x1bbc90u;
    // NOP
    // 0x1bbc94: 0x0  nop
    ctx->pc = 0x1bbc94u;
    // NOP
    // 0x1bbc98: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BBC98u;
    {
        const bool branch_taken_0x1bbc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bbc98) {
            ctx->pc = 0x1BBC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBC98u;
            // 0x1bbc9c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbc88;
        }
    }
    ctx->pc = 0x1BBCA0u;
label_1bbca0:
    // 0x1bbca0: 0x8e020320  lw          $v0, 0x320($s0)
    ctx->pc = 0x1bbca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_1bbca4:
    // 0x1bbca4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1bbca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1bbca8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBCA8u;
    {
        const bool branch_taken_0x1bbca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCA8u;
        // 0x1bbcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbca8) {
            ctx->pc = 0x1BBCC0u;
            goto label_1bbcc0;
        }
    }
    ctx->pc = 0x1BBCB0u;
    // 0x1bbcb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcb4: 0xc06ee2c  jal         func_1BB8B0
    ctx->pc = 0x1BBCB4u;
    SET_GPR_U32(ctx, 31, 0x1BBCBCu);
    ctx->pc = 0x1BBCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCB4u;
    // 0x1bbcb8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB8B0u, 0x1BBCB4u, 0x1BBCBCu)) {
        return;
    }
    ctx->pc = 0x1BBCBCu;
label_1bbcbc:
    // 0x1bbcbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbcbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bbcc0:
    // 0x1bbcc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bbcc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcc4: 0xc06edb8  jal         func_1BB6E0
    ctx->pc = 0x1BBCC4u;
    SET_GPR_U32(ctx, 31, 0x1BBCCCu);
    ctx->pc = 0x1BBCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCC4u;
    // 0x1bbcc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB6E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BB6E0u, 0x1BBCC4u, 0x1BBCCCu)) {
        return;
    }
    ctx->pc = 0x1BBCCCu;
label_1bbccc:
    // 0x1bbccc: 0xc06eeac  jal         func_1BBAB0
    ctx->pc = 0x1BBCCCu;
    SET_GPR_U32(ctx, 31, 0x1BBCD4u);
    ctx->pc = 0x1BBCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCCCu;
    // 0x1bbcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBAB0u, 0x1BBCCCu, 0x1BBCD4u)) {
        return;
    }
    ctx->pc = 0x1BBCD4u;
label_1bbcd4:
    // 0x1bbcd4: 0x8e0202ac  lw          $v0, 0x2AC($s0)
    ctx->pc = 0x1bbcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
    // 0x1bbcd8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1bbcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bbcdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bbcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bbce0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1bbce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1bbce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1bbce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1bbce8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBCE8u;
    {
        const bool branch_taken_0x1bbce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBCE8u;
        // 0x1bbcec: 0xae000354  sw          $zero, 0x354($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbce8) {
            ctx->pc = 0x1BBD00u;
            goto label_1bbd00;
        }
    }
    ctx->pc = 0x1BBCF0u;
label_1bbcf0:
    // 0x1bbcf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1bbcf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1bbcf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bbcf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbcf8: 0xc06eeac  jal         func_1BBAB0
    ctx->pc = 0x1BBCF8u;
    SET_GPR_U32(ctx, 31, 0x1BBD00u);
    ctx->pc = 0x1BBCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBCF8u;
    // 0x1bbcfc: 0xae02032c  sw          $v0, 0x32C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BBAB0u, 0x1BBCF8u, 0x1BBD00u)) {
        return;
    }
    ctx->pc = 0x1BBD00u;
label_1bbd00:
    // 0x1bbd00: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bbd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bbd04: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bbd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bbd08: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1bbd08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbd0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbd0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbd10: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBD10u;
        // 0x1bbd14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBD18u;
}
