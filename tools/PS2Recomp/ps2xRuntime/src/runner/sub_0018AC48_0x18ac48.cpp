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

// Function: sub_0018AC48
// Address: 0x18ac48 - 0x18adb0
void sub_0018AC48_0x18ac48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018AC48_0x18ac48");
#endif

    switch (ctx->pc) {
        case 0x18ac88u: goto label_18ac88;
        case 0x18ac98u: goto label_18ac98;
        case 0x18acb0u: goto label_18acb0;
        case 0x18acf4u: goto label_18acf4;
        case 0x18ad24u: goto label_18ad24;
        case 0x18ad34u: goto label_18ad34;
        case 0x18ad40u: goto label_18ad40;
        case 0x18ad4cu: goto label_18ad4c;
        default: break;
    }

    ctx->pc = 0x18ac48u;

    // 0x18ac48: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18ac4c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18ac4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18ac50: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18ac50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18ac54: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18ac54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac58: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18ac58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18ac5c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x18ac5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18ac60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18ac64: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x18ac64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ac68: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18ac68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18ac6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ac6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ac70: 0x12800014  beqz        $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x18AC70u;
    {
        const bool branch_taken_0x18ac70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC70u;
        // 0x18ac74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac70) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18AC78u;
    // 0x18ac78: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x18AC78u;
    {
        const bool branch_taken_0x18ac78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC78u;
        // 0x18ac7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac78) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18AC80u;
    // 0x18ac80: 0xc065c40  jal         func_197100
    ctx->pc = 0x18AC80u;
    SET_GPR_U32(ctx, 31, 0x18AC88u);
    ctx->pc = 0x18AC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AC80u;
    // 0x18ac84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18AC80u, 0x18AC88u)) {
        return;
    }
    ctx->pc = 0x18AC88u;
label_18ac88:
    // 0x18ac88: 0x8e910028  lw          $s1, 0x28($s4)
    ctx->pc = 0x18ac88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x18ac8c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x18AC8Cu;
    {
        const bool branch_taken_0x18ac8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18AC8Cu;
        // 0x18ac90: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ac8c) {
            ctx->pc = 0x18ACC4u;
            goto label_18acc4;
        }
    }
    ctx->pc = 0x18AC94u;
    // 0x18ac94: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x18ac94u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18ac98:
    // 0x18ac98: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x18ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x18ac9c: 0x56620007  bnel        $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x18AC9Cu;
    {
        const bool branch_taken_0x18ac9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x18ac9c) {
            ctx->pc = 0x18ACA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AC9Cu;
            // 0x18aca0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18ACBCu;
            goto label_18acbc;
        }
    }
    ctx->pc = 0x18ACA4u;
    // 0x18aca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18aca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18aca8: 0xc065c68  jal         func_1971A0
    ctx->pc = 0x18ACA8u;
    SET_GPR_U32(ctx, 31, 0x18ACB0u);
    ctx->pc = 0x18ACACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACA8u;
    // 0x18acac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1971A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1971A0u, 0x18ACA8u, 0x18ACB0u)) {
        return;
    }
    ctx->pc = 0x18ACB0u;
label_18acb0:
    // 0x18acb0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18ACB0u;
    {
        const bool branch_taken_0x18acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18acb0) {
            ctx->pc = 0x18ACC8u;
            goto label_18acc8;
        }
    }
    ctx->pc = 0x18ACB8u;
    // 0x18acb8: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x18acb8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18acbc:
    // 0x18acbc: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x18ACBCu;
    {
        const bool branch_taken_0x18acbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x18acbc) {
            ctx->pc = 0x18ACC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18ACBCu;
            // 0x18acc0: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18ac98;
        }
    }
    ctx->pc = 0x18ACC4u;
label_18acc4:
    // 0x18acc4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18acc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18acc8:
    // 0x18acc8: 0x12a00030  beqz        $s5, . + 4 + (0x30 << 2)
    ctx->pc = 0x18ACC8u;
    {
        const bool branch_taken_0x18acc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACC8u;
        // 0x18accc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acc8) {
            ctx->pc = 0x18AD8Cu;
            goto label_18ad8c;
        }
    }
    ctx->pc = 0x18ACD0u;
    // 0x18acd0: 0x1600002f  bnez        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x18ACD0u;
    {
        const bool branch_taken_0x18acd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x18ACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACD0u;
        // 0x18acd4: 0x7bb10050  lq          $s1, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acd0) {
            ctx->pc = 0x18AD90u;
            goto label_18ad90;
        }
    }
    ctx->pc = 0x18ACD8u;
    // 0x18acd8: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x18ACD8u;
    {
        const bool branch_taken_0x18acd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ACDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ACD8u;
        // 0x18acdc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18acd8) {
            ctx->pc = 0x18AD94u;
            goto label_18ad94;
        }
    }
    ctx->pc = 0x18ACE0u;
    // 0x18ace0: 0x1280002c  beqz        $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x18ACE0u;
    {
        const bool branch_taken_0x18ace0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ace0) {
            ctx->pc = 0x18AD94u;
            goto label_18ad94;
        }
    }
    ctx->pc = 0x18ACE8u;
    // 0x18ace8: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x18ace8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x18acec: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18ACECu;
    SET_GPR_U32(ctx, 31, 0x18ACF4u);
    ctx->pc = 0x18ACF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ACECu;
    // 0x18acf0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18ACECu, 0x18ACF4u)) {
        return;
    }
    ctx->pc = 0x18ACF4u;
label_18acf4:
    // 0x18acf4: 0x26910024  addiu       $s1, $s4, 0x24
    ctx->pc = 0x18acf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
    // 0x18acf8: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x18acf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x18acfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18acfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad00: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x18ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x18ad04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18ad04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18ad08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad0c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18ad0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18ad10: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x18ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x18ad14: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x18ad14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x18ad18: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x18ad18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x18ad1c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18AD1Cu;
    SET_GPR_U32(ctx, 31, 0x18AD24u);
    ctx->pc = 0x18AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD1Cu;
    // 0x18ad20: 0xac40002c  sw          $zero, 0x2C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18AD1Cu, 0x18AD24u)) {
        return;
    }
    ctx->pc = 0x18AD24u;
label_18ad24:
    // 0x18ad24: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18ad24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18ad28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ad28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad2c: 0xc081b9a  jal         func_206E68
    ctx->pc = 0x18AD2Cu;
    SET_GPR_U32(ctx, 31, 0x18AD34u);
    ctx->pc = 0x18AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD2Cu;
    // 0x18ad30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206E68u, 0x18AD2Cu, 0x18AD34u)) {
        return;
    }
    ctx->pc = 0x18AD34u;
label_18ad34:
    // 0x18ad34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18ad34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad38: 0xc065c40  jal         func_197100
    ctx->pc = 0x18AD38u;
    SET_GPR_U32(ctx, 31, 0x18AD40u);
    ctx->pc = 0x18AD3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD38u;
    // 0x18ad3c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x18AD38u, 0x18AD40u)) {
        return;
    }
    ctx->pc = 0x18AD40u;
label_18ad40:
    // 0x18ad40: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x18ad40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x18ad44: 0xc080858  jal         func_202160
    ctx->pc = 0x18AD44u;
    SET_GPR_U32(ctx, 31, 0x18AD4Cu);
    ctx->pc = 0x18AD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18AD44u;
    // 0x18ad48: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x18AD44u, 0x18AD4Cu)) {
        return;
    }
    ctx->pc = 0x18AD4Cu;
label_18ad4c:
    // 0x18ad4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18ad4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ad50: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x18ad50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x18ad54: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18ad54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18ad58: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x18ad58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x18ad5c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x18ad5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x18ad60: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x18ad60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x18ad64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AD64u;
    {
        const bool branch_taken_0x18ad64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ad64) {
            ctx->pc = 0x18AD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AD64u;
            // 0x18ad68: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AD6Cu;
            goto label_18ad6c;
        }
    }
    ctx->pc = 0x18AD6Cu;
label_18ad6c:
    // 0x18ad6c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x18ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x18ad70: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x18AD70u;
    {
        const bool branch_taken_0x18ad70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ad70) {
            ctx->pc = 0x18AD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18AD70u;
            // 0x18ad74: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18AD78u;
            goto label_18ad78;
        }
    }
    ctx->pc = 0x18AD78u;
label_18ad78:
    // 0x18ad78: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x18ad78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x18ad7c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x18ad7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x18ad80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18ad80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18ad84: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x18ad84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
    // 0x18ad88: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ad88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18ad8c:
    // 0x18ad8c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18ad8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_18ad90:
    // 0x18ad90: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18ad90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18ad94:
    // 0x18ad94: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18ad94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ad98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18ad98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ad9c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18ad9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ada0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18ada0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ada4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ada4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x18ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ADA8u;
        // 0x18adac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ADB0u;
}
