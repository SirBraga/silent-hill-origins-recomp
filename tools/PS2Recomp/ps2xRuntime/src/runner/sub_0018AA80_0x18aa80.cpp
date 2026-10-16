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

// Function: sub_0018AA80
// Address: 0x18aa80 - 0x18ac48
void sub_0018AA80_0x18aa80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AA80_0x18aa80");
#endif

    switch (ctx->pc) {
        case 0x18aabcu: goto label_18aabc;
        case 0x18aad0u: goto label_18aad0;
        case 0x18aae8u: goto label_18aae8;
        case 0x18ab24u: goto label_18ab24;
        case 0x18ab5cu: goto label_18ab5c;
        case 0x18ab64u: goto label_18ab64;
        case 0x18abb0u: goto label_18abb0;
        case 0x18abbcu: goto label_18abbc;
        case 0x18abc0u: goto label_18abc0;
        case 0x18abc4u: goto label_18abc4;
        case 0x18ac14u: goto label_18ac14;
        default: break;
    }

    ctx->pc = 0x18aa80u;

    // 0x18aa80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18aa80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18aa84: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18aa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18aa88: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18aa8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x18aa8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa90: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18aa94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18aa94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aa98: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18aa9c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x18aa9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aaa0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18aaa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18aaa4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18aaa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18aaa8: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x18AAA8u;
    {
        const bool branch_taken_0x18aaa8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAA8u;
        // 0x18aaac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aaa8) {
            ctx->pc = 0x18AB00u;
            goto label_18ab00;
        }
    }
    ctx->pc = 0x18AAB0u;
    // 0x18aab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18aab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aab4: 0xc065c40  jal         func_197100
    ctx->pc = 0x18AAB4u;
    SET_GPR_U32(ctx, 31, 0x18AABCu);
    ctx->pc = 0x18AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAB4u;
    // 0x18aab8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18AAB4u, 0x18AABCu)) {
        return;
    }
    ctx->pc = 0x18AABCu;
label_18aabc:
    // 0x18aabc: 0x8e91002c  lw          $s1, 0x2C($s4)
    ctx->pc = 0x18aabcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x18aac0: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x18AAC0u;
    {
        const bool branch_taken_0x18aac0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAC0u;
        // 0x18aac4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aac0) {
            ctx->pc = 0x18AB00u;
            goto label_18ab00;
        }
    }
    ctx->pc = 0x18AAC8u;
    // 0x18aac8: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x18aac8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x18aacc: 0x0  nop
    ctx->pc = 0x18aaccu;
    // NOP
label_18aad0:
    // 0x18aad0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18aad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18aad4: 0x56420008  bnel        $s2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18AAD4u;
    {
        const bool branch_taken_0x18aad4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x18aad4) {
            ctx->pc = 0x18AAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAD4u;
            // 0x18aad8: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AAF8u;
            goto label_18aaf8;
        }
    }
    ctx->pc = 0x18AADCu;
    // 0x18aadc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x18aadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aae0: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18AAE0u;
    SET_GPR_U32(ctx, 31, 0x18AAE8u);
    ctx->pc = 0x18AAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AAE0u;
    // 0x18aae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18AAE0u, 0x18AAE8u)) {
        return;
    }
    ctx->pc = 0x18AAE8u;
label_18aae8:
    // 0x18aae8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18AAE8u;
    {
        const bool branch_taken_0x18aae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18aae8) {
            ctx->pc = 0x18AAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAE8u;
            // 0x18aaec: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AAF8u;
            goto label_18aaf8;
        }
    }
    ctx->pc = 0x18AAF0u;
    // 0x18aaf0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x18AAF0u;
    {
        const bool branch_taken_0x18aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AAF0u;
        // 0x18aaf4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18aaf0) {
            ctx->pc = 0x18AB04u;
            goto label_18ab04;
        }
    }
    ctx->pc = 0x18AAF8u;
label_18aaf8:
    // 0x18aaf8: 0x5620fff5  bnel        $s1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x18AAF8u;
    {
        const bool branch_taken_0x18aaf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18aaf8) {
            ctx->pc = 0x18AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AAF8u;
            // 0x18aafc: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AAD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18aad0;
        }
    }
    ctx->pc = 0x18AB00u;
label_18ab00:
    // 0x18ab00: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x18ab00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18ab04:
    // 0x18ab04: 0x12a00047  beqz        $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x18AB04u;
    {
        const bool branch_taken_0x18ab04 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB04u;
        // 0x18ab08: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab04) {
            ctx->pc = 0x18AC24u;
            goto label_18ac24;
        }
    }
    ctx->pc = 0x18AB0Cu;
    // 0x18ab0c: 0x16200046  bnez        $s1, . + 4 + (0x46 << 2)
    ctx->pc = 0x18AB0Cu;
    {
        const bool branch_taken_0x18ab0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x18AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB0Cu;
        // 0x18ab10: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab0c) {
            ctx->pc = 0x18AC28u;
            goto label_18ac28;
        }
    }
    ctx->pc = 0x18AB14u;
    // 0x18ab14: 0x12600044  beqz        $s3, . + 4 + (0x44 << 2)
    ctx->pc = 0x18AB14u;
    {
        const bool branch_taken_0x18ab14 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AB14u;
        // 0x18ab18: 0x24040034  addiu       $a0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ab14) {
            ctx->pc = 0x18AC28u;
            goto label_18ac28;
        }
    }
    ctx->pc = 0x18AB1Cu;
    // 0x18ab1c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18AB1Cu;
    SET_GPR_U32(ctx, 31, 0x18AB24u);
    ctx->pc = 0x18AB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB1Cu;
    // 0x18ab20: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18AB1Cu, 0x18AB24u)) {
        return;
    }
    ctx->pc = 0x18AB24u;
label_18ab24:
    // 0x18ab24: 0x26920028  addiu       $s2, $s4, 0x28
    ctx->pc = 0x18ab24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
    // 0x18ab28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18ab2c: 0x24500024  addiu       $s0, $v0, 0x24
    ctx->pc = 0x18ab2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x18ab30: 0x24638ea8  addiu       $v1, $v1, -0x7158
    ctx->pc = 0x18ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938280));
    // 0x18ab34: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x18ab34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x18ab38: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18ab3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ab3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab40: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x18ab40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x18ab44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ab44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab48: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18ab48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18ab4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18ab4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x18ab50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x18ab54: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18AB54u;
    SET_GPR_U32(ctx, 31, 0x18AB5Cu);
    ctx->pc = 0x18AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB54u;
    // 0x18ab58: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18AB54u, 0x18AB5Cu)) {
        return;
    }
    ctx->pc = 0x18AB5Cu;
label_18ab5c:
    // 0x18ab5c: 0xc080858  jal         func_202160
    ctx->pc = 0x18AB5Cu;
    SET_GPR_U32(ctx, 31, 0x18AB64u);
    ctx->pc = 0x18AB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AB5Cu;
    // 0x18ab60: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18AB5Cu, 0x18AB64u)) {
        return;
    }
    ctx->pc = 0x18AB64u;
label_18ab64:
    // 0x18ab64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18ab64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab68: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x18ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x18ab6c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18ab70: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18ab74: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18ab74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x18ab78: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x18ab78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x18ab7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AB7Cu;
    {
        const bool branch_taken_0x18ab7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ab7c) {
            ctx->pc = 0x18AB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB7Cu;
            // 0x18ab80: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB84u;
            goto label_18ab84;
        }
    }
    ctx->pc = 0x18AB84u;
label_18ab84:
    // 0x18ab84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x18ab84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x18ab88: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AB88u;
    {
        const bool branch_taken_0x18ab88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ab88) {
            ctx->pc = 0x18AB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AB88u;
            // 0x18ab8c: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AB90u;
            goto label_18ab90;
        }
    }
    ctx->pc = 0x18AB90u;
label_18ab90:
    // 0x18ab90: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x18ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x18ab94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18ab94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18ab98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ab9c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18aba0: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x18aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x18aba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18aba8: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x18ABA8u;
    SET_GPR_U32(ctx, 31, 0x18ABB0u);
    ctx->pc = 0x18ABACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABA8u;
    // 0x18abac: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18ABA8u, 0x18ABB0u)) {
        return;
    }
    ctx->pc = 0x18ABB0u;
label_18abb0:
    // 0x18abb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18abb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18abb4: 0xc065c40  jal         func_197100
    ctx->pc = 0x18ABB4u;
    SET_GPR_U32(ctx, 31, 0x18ABBCu);
    ctx->pc = 0x18ABB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ABB4u;
    // 0x18abb8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18ABB4u, 0x18ABBCu)) {
        return;
    }
    ctx->pc = 0x18ABBCu;
label_18abbc:
    // 0x18abbc: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x18abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_18abc0:
    // 0x18abc0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x18abc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_18abc4:
    // 0x18abc4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x18ABC4u;
    {
        const bool branch_taken_0x18abc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18abc4) {
            ctx->pc = 0x18ABC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ABC4u;
            // 0x18abc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AC24u;
            goto label_18ac24;
        }
    }
    ctx->pc = 0x18ABCCu;
    // 0x18abcc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18abccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18abd0: 0x0  nop
    ctx->pc = 0x18abd0u;
    // NOP
    // 0x18abd4: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x18ABD4u;
    {
        const bool branch_taken_0x18abd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18abd4) {
            ctx->pc = 0x18ABC4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18abc4;
        }
    }
    ctx->pc = 0x18ABDCu;
    // 0x18abdc: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x18abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x18abe0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABE0u;
    {
        const bool branch_taken_0x18abe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE0u;
        // 0x18abe4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe0) {
            ctx->pc = 0x18ABF0u;
            goto label_18abf0;
        }
    }
    ctx->pc = 0x18ABE8u;
    // 0x18abe8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18ABE8u;
    {
        const bool branch_taken_0x18abe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ABECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABE8u;
        // 0x18abec: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abe8) {
            ctx->pc = 0x18ABF4u;
            goto label_18abf4;
        }
    }
    ctx->pc = 0x18ABF0u;
label_18abf0:
    // 0x18abf0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x18abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_18abf4:
    // 0x18abf4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x18abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x18abf8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x18ABF8u;
    {
        const bool branch_taken_0x18abf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ABF8u;
        // 0x18abfc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18abf8) {
            ctx->pc = 0x18AC08u;
            goto label_18ac08;
        }
    }
    ctx->pc = 0x18AC00u;
    // 0x18ac00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18AC00u;
    {
        const bool branch_taken_0x18ac00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC00u;
        // 0x18ac04: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac00) {
            ctx->pc = 0x18AC0Cu;
            goto label_18ac0c;
        }
    }
    ctx->pc = 0x18AC08u;
label_18ac08:
    // 0x18ac08: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_18ac0c:
    // 0x18ac0c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x18AC0Cu;
    SET_GPR_U32(ctx, 31, 0x18AC14u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x18AC0Cu, 0x18AC14u)) {
        return;
    }
    ctx->pc = 0x18AC14u;
label_18ac14:
    // 0x18ac14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x18ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18ac18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18ac1c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x18AC1Cu;
    {
        const bool branch_taken_0x18ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC1Cu;
        // 0x18ac20: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac1c) {
            ctx->pc = 0x18ABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18abc0;
        }
    }
    ctx->pc = 0x18AC24u;
label_18ac24:
    // 0x18ac24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18ac24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18ac28:
    // 0x18ac28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18ac28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18ac2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18ac2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ac30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ac30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ac34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18ac34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ac38: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18ac38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ac3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ac3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ac40: 0x3e00008  jr          $ra
    ctx->pc = 0x18AC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18AC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC40u;
        // 0x18ac44: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18AC40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18AC48u;
}
