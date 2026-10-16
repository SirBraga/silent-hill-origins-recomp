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

// Function: sub_00210B88
// Address: 0x210b88 - 0x210db0
void sub_00210B88_0x210b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210B88_0x210b88");
#endif

    switch (ctx->pc) {
        case 0x210bc0u: goto label_210bc0;
        case 0x210be0u: goto label_210be0;
        case 0x210c28u: goto label_210c28;
        case 0x210d74u: goto label_210d74;
        case 0x210d80u: goto label_210d80;
        default: break;
    }

    ctx->pc = 0x210b88u;

    // 0x210b88: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x210b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x210b8c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x210b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x210b90: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x210b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x210b94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x210b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b98: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x210b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x210b9c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x210b9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ba0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x210ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x210ba4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x210ba4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ba8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x210ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x210bac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x210bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bb0: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x210bb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x210bb4: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x210BB4u;
    {
        const bool branch_taken_0x210bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BB4u;
        // 0x210bb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bb4) {
            ctx->pc = 0x210D8Cu;
            goto label_210d8c;
        }
    }
    ctx->pc = 0x210BBCu;
    // 0x210bbc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x210bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_210bc0:
    // 0x210bc0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x210bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x210bc4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x210BC4u;
    {
        const bool branch_taken_0x210bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BC4u;
        // 0x210bc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bc4) {
            ctx->pc = 0x210C14u;
            goto label_210c14;
        }
    }
    ctx->pc = 0x210BCCu;
    // 0x210bcc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x210bccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bd0: 0x1a20001d  blez        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x210BD0u;
    {
        const bool branch_taken_0x210bd0 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x210BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BD0u;
        // 0x210bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bd0) {
            ctx->pc = 0x210C48u;
            goto label_210c48;
        }
    }
    ctx->pc = 0x210BD8u;
    // 0x210bd8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210bdc: 0x0  nop
    ctx->pc = 0x210bdcu;
    // NOP
label_210be0:
    // 0x210be0: 0xdc640020  ld          $a0, 0x20($v1)
    ctx->pc = 0x210be0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x210be4: 0xe4102a  slt         $v0, $a3, $a0
    ctx->pc = 0x210be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x210be8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210BE8u;
    {
        const bool branch_taken_0x210be8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE8u;
        // 0x210bec: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210be8) {
            ctx->pc = 0x210C04u;
            goto label_210c04;
        }
    }
    ctx->pc = 0x210BF0u;
    // 0x210bf0: 0xdc620018  ld          $v0, 0x18($v1)
    ctx->pc = 0x210bf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x210bf4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210BF4u;
    {
        const bool branch_taken_0x210bf4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x210bf4) {
            ctx->pc = 0x210C04u;
            goto label_210c04;
        }
    }
    ctx->pc = 0x210BFCu;
    // 0x210bfc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x210bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c00: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x210c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_210c04:
    // 0x210c04: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x210C04u;
    {
        const bool branch_taken_0x210c04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C04u;
        // 0x210c08: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c04) {
            ctx->pc = 0x210BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210be0;
        }
    }
    ctx->pc = 0x210C0Cu;
    // 0x210c0c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x210C0Cu;
    {
        const bool branch_taken_0x210c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210c0c) {
            ctx->pc = 0x210C48u;
            goto label_210c48;
        }
    }
    ctx->pc = 0x210C14u;
label_210c14:
    // 0x210c14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x210c14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c18: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x210C18u;
    {
        const bool branch_taken_0x210c18 = (GPR_S64(ctx, 17) <= 0);
        ctx->pc = 0x210C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C18u;
        // 0x210c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c18) {
            ctx->pc = 0x210C48u;
            goto label_210c48;
        }
    }
    ctx->pc = 0x210C20u;
    // 0x210c20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c24: 0x0  nop
    ctx->pc = 0x210c24u;
    // NOP
label_210c28:
    // 0x210c28: 0xdcc30018  ld          $v1, 0x18($a2)
    ctx->pc = 0x210c28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x210c2c: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x210c2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x210c30: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210C30u;
    {
        const bool branch_taken_0x210c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C30u;
        // 0x210c34: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c30) {
            ctx->pc = 0x210C40u;
            goto label_210c40;
        }
    }
    ctx->pc = 0x210C38u;
    // 0x210c38: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x210c38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210c3c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x210c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_210c40:
    // 0x210c40: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x210C40u;
    {
        const bool branch_taken_0x210c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C40u;
        // 0x210c44: 0x24c60028  addiu       $a2, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c40) {
            ctx->pc = 0x210C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210c28;
        }
    }
    ctx->pc = 0x210C48u;
label_210c48:
    // 0x210c48: 0x10a00050  beqz        $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x210C48u;
    {
        const bool branch_taken_0x210c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C48u;
        // 0x210c4c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c48) {
            ctx->pc = 0x210D8Cu;
            goto label_210d8c;
        }
    }
    ctx->pc = 0x210C50u;
    // 0x210c50: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x210c54: 0x2222018  mult        $a0, $s1, $v0
    ctx->pc = 0x210c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x210c58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x210c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210c5c: 0x928021  addu        $s0, $a0, $s2
    ctx->pc = 0x210c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x210c60: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x210c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x210c64: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x210c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x210c68: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x210c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x210c6c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x210c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x210c70: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x210c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x210c74: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210c78: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x210c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x210c7c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210c80: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x210c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x210c84: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x210c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x210c88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x210c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x210c8c: 0x8cad0004  lw          $t5, 0x4($a1)
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x210c90: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210c94: 0x8caa000c  lw          $t2, 0xC($a1)
    ctx->pc = 0x210c94u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x210c98: 0x1ac1023  subu        $v0, $t5, $t4
    ctx->pc = 0x210c98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
    // 0x210c9c: 0x8ca90008  lw          $t1, 0x8($a1)
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x210ca0: 0x23100  sll         $a2, $v0, 4
    ctx->pc = 0x210ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x210ca4: 0x8cab0014  lw          $t3, 0x14($a1)
    ctx->pc = 0x210ca4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x210ca8: 0x1491023  subu        $v0, $t2, $t1
    ctx->pc = 0x210ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x210cac: 0x8ca80010  lw          $t0, 0x10($a1)
    ctx->pc = 0x210cacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x210cb0: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x210cb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x210cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x210cb8: 0x1681823  subu        $v1, $t3, $t0
    ctx->pc = 0x210cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
    // 0x210cbc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x210cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210cc0: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x210cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x210cc4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210CC4u;
    {
        const bool branch_taken_0x210cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CC4u;
        // 0x210cc8: 0x318c0  sll         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cc4) {
            ctx->pc = 0x210CD4u;
            goto label_210cd4;
        }
    }
    ctx->pc = 0x210CCCu;
    // 0x210ccc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x210cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x210cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210cd4:
    // 0x210cd4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x210cd4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x210cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210cdc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x210cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210ce0: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x210ce0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x210ce4: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x210CE4u;
    {
        const bool branch_taken_0x210ce4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x210CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CE4u;
        // 0x210ce8: 0x28e20002  slti        $v0, $a3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ce4) {
            ctx->pc = 0x210D30u;
            goto label_210d30;
        }
    }
    ctx->pc = 0x210CECu;
    // 0x210cec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210CECu;
    {
        const bool branch_taken_0x210cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cec) {
            ctx->pc = 0x210D04u;
            goto label_210d04;
        }
    }
    ctx->pc = 0x210CF4u;
    // 0x210cf4: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x210CF4u;
    {
        const bool branch_taken_0x210cf4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x1ac1021  addu        $v0, $t5, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cf4) {
            ctx->pc = 0x210D14u;
            goto label_210d14;
        }
    }
    ctx->pc = 0x210CFCu;
    // 0x210cfc: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x210CFCu;
    {
        const bool branch_taken_0x210cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CFCu;
        // 0x210d00: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cfc) {
            ctx->pc = 0x210D6Cu;
            goto label_210d6c;
        }
    }
    ctx->pc = 0x210D04u;
label_210d04:
    // 0x210d04: 0x10e40012  beq         $a3, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x210D04u;
    {
        const bool branch_taken_0x210d04 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x210D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D04u;
        // 0x210d08: 0x1681021  addu        $v0, $t3, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d04) {
            ctx->pc = 0x210D50u;
            goto label_210d50;
        }
    }
    ctx->pc = 0x210D0Cu;
    // 0x210d0c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x210D0Cu;
    {
        const bool branch_taken_0x210d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D0Cu;
        // 0x210d10: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d0c) {
            ctx->pc = 0x210D6Cu;
            goto label_210d6c;
        }
    }
    ctx->pc = 0x210D14u;
label_210d14:
    // 0x210d14: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210d18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210d1c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x210d1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x210d20: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x210d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210d24: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x210d24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x210d28: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x210D28u;
    {
        const bool branch_taken_0x210d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D28u;
        // 0x210d2c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d28) {
            ctx->pc = 0x210D68u;
            goto label_210d68;
        }
    }
    ctx->pc = 0x210D30u;
label_210d30:
    // 0x210d30: 0x1491021  addu        $v0, $t2, $t1
    ctx->pc = 0x210d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x210d34: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210d38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210d3c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x210d3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x210d40: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x210d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210d44: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x210d44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x210d48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x210D48u;
    {
        const bool branch_taken_0x210d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D48u;
        // 0x210d4c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d48) {
            ctx->pc = 0x210D68u;
            goto label_210d68;
        }
    }
    ctx->pc = 0x210D50u;
label_210d50:
    // 0x210d50: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x210d50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x210d54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x210d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210d58: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x210d58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x210d5c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210d60: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x210d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x210d64: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x210d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_210d68:
    // 0x210d68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x210d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210d6c:
    // 0x210d6c: 0xc08419e  jal         func_210678
    ctx->pc = 0x210D6Cu;
    SET_GPR_U32(ctx, 31, 0x210D74u);
    ctx->pc = 0x210D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D6Cu;
    // 0x210d70: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x210678u, 0x210D6Cu, 0x210D74u)) {
        return;
    }
    ctx->pc = 0x210D74u;
label_210d74:
    // 0x210d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x210d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d78: 0xc08419e  jal         func_210678
    ctx->pc = 0x210D78u;
    SET_GPR_U32(ctx, 31, 0x210D80u);
    ctx->pc = 0x210D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D78u;
    // 0x210d7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x210678u, 0x210D78u, 0x210D80u)) {
        return;
    }
    ctx->pc = 0x210D80u;
label_210d80:
    // 0x210d80: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x210d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x210d84: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x210D84u;
    {
        const bool branch_taken_0x210d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D84u;
        // 0x210d88: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d84) {
            ctx->pc = 0x210BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210bc0;
        }
    }
    ctx->pc = 0x210D8Cu;
label_210d8c:
    // 0x210d8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x210d8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d90: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x210d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210d94: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x210d94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210d98: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x210d98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210d9c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x210d9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210da0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x210da0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210da4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210da8: 0x3e00008  jr          $ra
    ctx->pc = 0x210DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DA8u;
        // 0x210dac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210DB0u;
}
