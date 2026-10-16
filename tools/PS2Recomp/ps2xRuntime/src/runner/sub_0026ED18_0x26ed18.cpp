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

// Function: sub_0026ED18
// Address: 0x26ed18 - 0x26f020
void sub_0026ED18_0x26ed18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026ED18_0x26ed18");
#endif

    switch (ctx->pc) {
        case 0x26ed64u: goto label_26ed64;
        case 0x26ed70u: goto label_26ed70;
        case 0x26eda8u: goto label_26eda8;
        case 0x26edb4u: goto label_26edb4;
        case 0x26edd0u: goto label_26edd0;
        case 0x26ee00u: goto label_26ee00;
        case 0x26eea0u: goto label_26eea0;
        case 0x26eed8u: goto label_26eed8;
        case 0x26ef6cu: goto label_26ef6c;
        case 0x26ef98u: goto label_26ef98;
        default: break;
    }

    ctx->pc = 0x26ed18u;

    // 0x26ed18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x26ed18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x26ed1c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x26ed1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x26ed20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26ed20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26ed24: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x26ed24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x26ed28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26ed28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26ed2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26ed2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed30: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x26ed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x26ed34: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x26ed34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x26ed38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x26ed38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x26ed3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26ed3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed40: 0x2303f  dsra32      $a2, $v0, 0
    ctx->pc = 0x26ed40u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26ed44: 0x2383c  dsll32      $a3, $v0, 0
    ctx->pc = 0x26ed44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26ed48: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x26ed48u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x26ed4c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x26ed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x26ed50: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x26ed50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x26ed54: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26ED54u;
    {
        const bool branch_taken_0x26ed54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED54u;
        // 0x26ed58: 0xffb10020  sd          $s1, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed54) {
            ctx->pc = 0x26ED78u;
            goto label_26ed78;
        }
    }
    ctx->pc = 0x26ED5Cu;
    // 0x26ed5c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26ED5Cu;
    SET_GPR_U32(ctx, 31, 0x26ED64u);
    ctx->pc = 0x26ED60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED5Cu;
    // 0x26ed60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26ED5Cu, 0x26ED64u)) {
        return;
    }
    ctx->pc = 0x26ED64u;
label_26ed64:
    // 0x26ed64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ed64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ed68: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26ED68u;
    SET_GPR_U32(ctx, 31, 0x26ED70u);
    ctx->pc = 0x26ED6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26ED68u;
    // 0x26ed6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26ED68u, 0x26ED70u)) {
        return;
    }
    ctx->pc = 0x26ED70u;
label_26ed70:
    // 0x26ed70: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x26ED70u;
    {
        const bool branch_taken_0x26ed70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED70u;
        // 0x26ed74: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed70) {
            ctx->pc = 0x26EFFCu;
            goto label_26effc;
        }
    }
    ctx->pc = 0x26ED78u;
label_26ed78:
    // 0x26ed78: 0x1cc00010  bgtz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x26ED78u;
    {
        const bool branch_taken_0x26ed78 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x26ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED78u;
        // 0x26ed7c: 0x62d03  sra         $a1, $a2, 20 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed78) {
            ctx->pc = 0x26EDBCu;
            goto label_26edbc;
        }
    }
    ctx->pc = 0x26ED80u;
    // 0x26ed80: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26ed84: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ed84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ed88: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x26ed88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26ed8c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x26ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x26ed90: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x26ED90u;
    {
        const bool branch_taken_0x26ed90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED90u;
        // 0x26ed94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed90) {
            ctx->pc = 0x26EFF8u;
            goto label_26eff8;
        }
    }
    ctx->pc = 0x26ED98u;
    // 0x26ed98: 0x4c10008  bgez        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x26ED98u;
    {
        const bool branch_taken_0x26ed98 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x26ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26ED98u;
        // 0x26ed9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ed98) {
            ctx->pc = 0x26EDBCu;
            goto label_26edbc;
        }
    }
    ctx->pc = 0x26EDA0u;
    // 0x26eda0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26EDA0u;
    SET_GPR_U32(ctx, 31, 0x26EDA8u);
    ctx->pc = 0x26EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDA0u;
    // 0x26eda4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26EDA0u, 0x26EDA8u)) {
        return;
    }
    ctx->pc = 0x26EDA8u;
label_26eda8:
    // 0x26eda8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26eda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26edac: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26EDACu;
    SET_GPR_U32(ctx, 31, 0x26EDB4u);
    ctx->pc = 0x26EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EDACu;
    // 0x26edb0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26EDACu, 0x26EDB4u)) {
        return;
    }
    ctx->pc = 0x26EDB4u;
label_26edb4:
    // 0x26edb4: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x26EDB4u;
    {
        const bool branch_taken_0x26edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDB4u;
        // 0x26edb8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edb4) {
            ctx->pc = 0x26EFFCu;
            goto label_26effc;
        }
    }
    ctx->pc = 0x26EDBCu;
label_26edbc:
    // 0x26edbc: 0x14a00020  bnez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x26EDBCu;
    {
        const bool branch_taken_0x26edbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDBCu;
        // 0x26edc0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edbc) {
            ctx->pc = 0x26EE40u;
            goto label_26ee40;
        }
    }
    ctx->pc = 0x26EDC4u;
    // 0x26edc4: 0x14c0000a  bnez        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x26EDC4u;
    {
        const bool branch_taken_0x26edc4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDC4u;
        // 0x26edc8: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edc4) {
            ctx->pc = 0x26EDF0u;
            goto label_26edf0;
        }
    }
    ctx->pc = 0x26EDCCu;
    // 0x26edcc: 0x0  nop
    ctx->pc = 0x26edccu;
    // NOP
label_26edd0:
    // 0x26edd0: 0x712c2  srl         $v0, $a3, 11
    ctx->pc = 0x26edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 11));
    // 0x26edd4: 0x24a5ffeb  addiu       $a1, $a1, -0x15
    ctx->pc = 0x26edd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967275));
    // 0x26edd8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x26edd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26eddc: 0x73d40  sll         $a3, $a3, 21
    ctx->pc = 0x26eddcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 21));
    // 0x26ede0: 0x0  nop
    ctx->pc = 0x26ede0u;
    // NOP
    // 0x26ede4: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26EDE4u;
    {
        const bool branch_taken_0x26ede4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ede4) {
            ctx->pc = 0x26EDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26edd0;
        }
    }
    ctx->pc = 0x26EDECu;
    // 0x26edec: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x26edecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_26edf0:
    // 0x26edf0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x26edf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26edf4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26EDF4u;
    {
        const bool branch_taken_0x26edf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EDF4u;
        // 0x26edf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26edf4) {
            ctx->pc = 0x26EE24u;
            goto label_26ee24;
        }
    }
    ctx->pc = 0x26EDFCu;
    // 0x26edfc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x26edfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26ee00:
    // 0x26ee00: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x26ee00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x26ee04: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x26ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x26ee08: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x26ee08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26ee0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26ee0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26ee10: 0x0  nop
    ctx->pc = 0x26ee10u;
    // NOP
    // 0x26ee14: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26EE14u;
    {
        const bool branch_taken_0x26ee14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ee14) {
            ctx->pc = 0x26EE00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ee00;
        }
    }
    ctx->pc = 0x26EE1Cu;
    // 0x26ee1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EE1Cu;
    {
        const bool branch_taken_0x26ee1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE1Cu;
        // 0x26ee20: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee1c) {
            ctx->pc = 0x26EE2Cu;
            goto label_26ee2c;
        }
    }
    ctx->pc = 0x26EE24u;
label_26ee24:
    // 0x26ee24: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x26ee24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26ee28: 0x41023  negu        $v0, $a0
    ctx->pc = 0x26ee28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_26ee2c:
    // 0x26ee2c: 0x642823  subu        $a1, $v1, $a0
    ctx->pc = 0x26ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x26ee30: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x26ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x26ee34: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x26ee34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26ee38: 0x873804  sllv        $a3, $a3, $a0
    ctx->pc = 0x26ee38u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 4) & 0x1F));
    // 0x26ee3c: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x26ee3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_26ee40:
    // 0x26ee40: 0x24a5fc01  addiu       $a1, $a1, -0x3FF
    ctx->pc = 0x26ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966273));
    // 0x26ee44: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ee44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ee48: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x26ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x26ee4c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x26ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x26ee50: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x26ee50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x26ee54: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26EE54u;
    {
        const bool branch_taken_0x26ee54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EE54u;
        // 0x26ee58: 0x443025  or          $a2, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ee54) {
            ctx->pc = 0x26EE70u;
            goto label_26ee70;
        }
    }
    ctx->pc = 0x26EE5Cu;
    // 0x26ee5c: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x26ee5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x26ee60: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x26ee60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26ee64: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x26ee64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26ee68: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x26ee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26ee6c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x26ee6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_26ee70:
    // 0x26ee70: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x26ee70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x26ee74: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x26ee74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x26ee78: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x26ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26ee7c: 0x5ad00  sll         $s5, $a1, 20
    ctx->pc = 0x26ee7cu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 20));
    // 0x26ee80: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x26ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26ee84: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x26ee84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26ee88: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x26ee88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26ee8c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x26ee8cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee90: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x26ee90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26ee94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee98: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26ee98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ee9c: 0x3c090020  lui         $t1, 0x20
    ctx->pc = 0x26ee9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32 << 16));
label_26eea0:
    // 0x26eea0: 0x1492021  addu        $a0, $t2, $t1
    ctx->pc = 0x26eea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x26eea4: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x26eea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26eea8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EEA8u;
    {
        const bool branch_taken_0x26eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEA8u;
        // 0x26eeac: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eea8) {
            ctx->pc = 0x26EEBCu;
            goto label_26eebc;
        }
    }
    ctx->pc = 0x26EEB0u;
    // 0x26eeb0: 0xc43023  subu        $a2, $a2, $a0
    ctx->pc = 0x26eeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x26eeb4: 0x895021  addu        $t2, $a0, $t1
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x26eeb8: 0x2499021  addu        $s2, $s2, $t1
    ctx->pc = 0x26eeb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 9)));
label_26eebc:
    // 0x26eebc: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x26eebcu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x26eec0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x26eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26eec4: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x26eec4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26eec8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x26eec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26eecc: 0x1520fff4  bnez        $t1, . + 4 + (-0xC << 2)
    ctx->pc = 0x26EECCu;
    {
        const bool branch_taken_0x26eecc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EECCu;
        // 0x26eed0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eecc) {
            ctx->pc = 0x26EEA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26eea0;
        }
    }
    ctx->pc = 0x26EED4u;
    // 0x26eed4: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x26eed4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_26eed8:
    // 0x26eed8: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x26eed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eedc: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x26eedcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26eee0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26EEE0u;
    {
        const bool branch_taken_0x26eee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEE0u;
        // 0x26eee4: 0x1692821  addu        $a1, $t3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eee0) {
            ctx->pc = 0x26EF04u;
            goto label_26ef04;
        }
    }
    ctx->pc = 0x26EEE8u;
    // 0x26eee8: 0x14860012  bne         $a0, $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x26EEE8u;
    {
        const bool branch_taken_0x26eee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x26EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEE8u;
        // 0x26eeec: 0xf31024  and         $v0, $a3, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eee8) {
            ctx->pc = 0x26EF34u;
            goto label_26ef34;
        }
    }
    ctx->pc = 0x26EEF0u;
    // 0x26eef0: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x26eef0u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x26eef4: 0x55000010  bnel        $t0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x26EEF4u;
    {
        const bool branch_taken_0x26eef4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x26eef4) {
            ctx->pc = 0x26EEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26EEF4u;
            // 0x26eef8: 0x94842  srl         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26EF38u;
            goto label_26ef38;
        }
    }
    ctx->pc = 0x26EEFCu;
    // 0x26eefc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EEFCu;
    {
        const bool branch_taken_0x26eefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EEFCu;
        // 0x26ef00: 0xa95821  addu        $t3, $a1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eefc) {
            ctx->pc = 0x26EF0Cu;
            goto label_26ef0c;
        }
    }
    ctx->pc = 0x26EF04u;
label_26ef04:
    // 0x26ef04: 0xe5402b  sltu        $t0, $a3, $a1
    ctx->pc = 0x26ef04u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x26ef08: 0xa95821  addu        $t3, $a1, $t1
    ctx->pc = 0x26ef08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_26ef0c:
    // 0x26ef0c: 0xb31024  and         $v0, $a1, $s3
    ctx->pc = 0x26ef0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 19));
    // 0x26ef10: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EF10u;
    {
        const bool branch_taken_0x26ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x26EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF10u;
        // 0x26ef14: 0xc43023  subu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef10) {
            ctx->pc = 0x26EF24u;
            goto label_26ef24;
        }
    }
    ctx->pc = 0x26EF18u;
    // 0x26ef18: 0x1731824  and         $v1, $t3, $s3
    ctx->pc = 0x26ef18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 19));
    // 0x26ef1c: 0x25420001  addiu       $v0, $t2, 0x1
    ctx->pc = 0x26ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x26ef20: 0x43500a  movz        $t2, $v0, $v1
    ctx->pc = 0x26ef20u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2));
label_26ef24:
    // 0x26ef24: 0xe53823  subu        $a3, $a3, $a1
    ctx->pc = 0x26ef24u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x26ef28: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x26ef2c: 0x2298821  addu        $s1, $s1, $t1
    ctx->pc = 0x26ef2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 9)));
    // 0x26ef30: 0xf31024  and         $v0, $a3, $s3
    ctx->pc = 0x26ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
label_26ef34:
    // 0x26ef34: 0x94842  srl         $t1, $t1, 1
    ctx->pc = 0x26ef34u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_26ef38:
    // 0x26ef38: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x26ef3c: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x26ef3cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x26ef40: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x26ef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x26ef44: 0x1520ffe4  bnez        $t1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x26EF44u;
    {
        const bool branch_taken_0x26ef44 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF44u;
        // 0x26ef48: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef44) {
            ctx->pc = 0x26EED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26eed8;
        }
    }
    ctx->pc = 0x26EF4Cu;
    // 0x26ef4c: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x26ef4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x26ef50: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x26EF50u;
    {
        const bool branch_taken_0x26ef50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF50u;
        // 0x26ef54: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef50) {
            ctx->pc = 0x26EFC4u;
            goto label_26efc4;
        }
    }
    ctx->pc = 0x26EF58u;
    // 0x26ef58: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x26ef58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26ef5c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x26ef5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x26ef60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ef60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef64: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26EF64u;
    SET_GPR_U32(ctx, 31, 0x26EF6Cu);
    ctx->pc = 0x26EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF64u;
    // 0x26ef68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26EF64u, 0x26EF6Cu)) {
        return;
    }
    ctx->pc = 0x26EF6Cu;
label_26ef6c:
    // 0x26ef6c: 0x4400015  bltz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x26EF6Cu;
    {
        const bool branch_taken_0x26ef6c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x26EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF6Cu;
        // 0x26ef70: 0x113842  srl         $a3, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef6c) {
            ctx->pc = 0x26EFC4u;
            goto label_26efc4;
        }
    }
    ctx->pc = 0x26EF74u;
    // 0x26ef74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26ef78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ef7c: 0x16220004  bne         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EF7Cu;
    {
        const bool branch_taken_0x26ef7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x26EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF7Cu;
        // 0x26ef80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef7c) {
            ctx->pc = 0x26EF90u;
            goto label_26ef90;
        }
    }
    ctx->pc = 0x26EF84u;
    // 0x26ef84: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26ef84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x26EF88u;
    {
        const bool branch_taken_0x26ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF88u;
        // 0x26ef8c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef88) {
            ctx->pc = 0x26EFC0u;
            goto label_26efc0;
        }
    }
    ctx->pc = 0x26EF90u;
label_26ef90:
    // 0x26ef90: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26EF90u;
    SET_GPR_U32(ctx, 31, 0x26EF98u);
    ctx->pc = 0x26EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EF90u;
    // 0x26ef94: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26EF90u, 0x26EF98u)) {
        return;
    }
    ctx->pc = 0x26EF98u;
label_26ef98:
    // 0x26ef98: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26EF98u;
    {
        const bool branch_taken_0x26ef98 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x26EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EF98u;
        // 0x26ef9c: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef98) {
            ctx->pc = 0x26EFB8u;
            goto label_26efb8;
        }
    }
    ctx->pc = 0x26EFA0u;
    // 0x26efa0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26efa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26efa4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26efa8: 0x2221026  xor         $v0, $s1, $v0
    ctx->pc = 0x26efa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 2));
    // 0x26efac: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x26efacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3));
    // 0x26efb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26EFB0u;
    {
        const bool branch_taken_0x26efb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFB0u;
        // 0x26efb4: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26efb0) {
            ctx->pc = 0x26EFC0u;
            goto label_26efc0;
        }
    }
    ctx->pc = 0x26EFB8u;
label_26efb8:
    // 0x26efb8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x26efb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x26efbc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x26efbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_26efc0:
    // 0x26efc0: 0x113842  srl         $a3, $s1, 1
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
label_26efc4:
    // 0x26efc4: 0x121843  sra         $v1, $s2, 1
    ctx->pc = 0x26efc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), 1));
    // 0x26efc8: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x26efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x26efcc: 0x32450001  andi        $a1, $s2, 0x1
    ctx->pc = 0x26efccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x26efd0: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x26efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x26efd4: 0xf32025  or          $a0, $a3, $s3
    ctx->pc = 0x26efd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 19));
    // 0x26efd8: 0xd53021  addu        $a2, $a2, $s5
    ctx->pc = 0x26efd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 21)));
    // 0x26efdc: 0x85380b  movn        $a3, $a0, $a1
    ctx->pc = 0x26efdcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4));
    // 0x26efe0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x26efe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x26efe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26efe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26efe8: 0x6a03c  dsll32      $s4, $a2, 0
    ctx->pc = 0x26efe8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 6) << (32 + 0));
    // 0x26efec: 0x2828025  or          $s0, $s4, $v0
    ctx->pc = 0x26efecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x26eff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26eff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eff4: 0x0  nop
    ctx->pc = 0x26eff4u;
    // NOP
label_26eff8:
    // 0x26eff8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26eff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26effc:
    // 0x26effc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x26effcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26f000: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x26f000u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f004: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x26f004u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f008: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x26f008u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f00c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x26f00cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f010: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26f010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f014: 0x3e00008  jr          $ra
    ctx->pc = 0x26F014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F014u;
        // 0x26f018: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F01Cu;
    // 0x26f01c: 0x0  nop
    ctx->pc = 0x26f01cu;
    // NOP
    ctx->pc = 0x26f020u;
}
