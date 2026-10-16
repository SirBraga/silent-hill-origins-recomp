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

// Function: sub_00297F90
// Address: 0x297f90 - 0x2980f0
void sub_00297F90_0x297f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297F90_0x297f90");
#endif

    switch (ctx->pc) {
        case 0x298000u: goto label_298000;
        case 0x298024u: goto label_298024;
        case 0x298048u: goto label_298048;
        case 0x298070u: goto label_298070;
        case 0x298088u: goto label_298088;
        default: break;
    }

    ctx->pc = 0x297f90u;

    // 0x297f90: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x297f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x297f94: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x297f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x297f98: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x297f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297f9c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x297f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297fa0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x297fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297fa4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x297fa4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fa8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x297fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x297fac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x297facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x297fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x297fb4: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x297fb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fb8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x297fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x297fbc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x297fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x297fc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x297fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297fc4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x297fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x297fc8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x297fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x297fcc: 0x9064001a  lbu         $a0, 0x1A($v1)
    ctx->pc = 0x297fccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x297fd0: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x297fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x297fd4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297FD4u;
    {
        const bool branch_taken_0x297fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FD4u;
        // 0x297fd8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fd4) {
            ctx->pc = 0x297FECu;
            goto label_297fec;
        }
    }
    ctx->pc = 0x297FDCu;
    // 0x297fdc: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x297fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x297fe0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x297fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297fe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x297FE4u;
    {
        const bool branch_taken_0x297fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297FE4u;
        // 0x297fe8: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297fe4) {
            ctx->pc = 0x298028u;
            goto label_298028;
        }
    }
    ctx->pc = 0x297FECu;
label_297fec:
    // 0x297fec: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x297fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x297ff0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x297FF0u;
    {
        const bool branch_taken_0x297ff0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x297ff0) {
            ctx->pc = 0x297FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297FF0u;
            // 0x297ff4: 0xdc620010  ld          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298008u;
            goto label_298008;
        }
    }
    ctx->pc = 0x297FF8u;
    // 0x297ff8: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x297FF8u;
    SET_GPR_U32(ctx, 31, 0x298000u);
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x297FF8u, 0x298000u)) {
        return;
    }
    ctx->pc = 0x298000u;
label_298000:
    // 0x298000: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x298000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298004: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x298004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_298008:
    // 0x298008: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x298008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29800c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29800cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x298010: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x298010u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x298014: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298014u;
    {
        const bool branch_taken_0x298014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298014u;
        // 0x298018: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298014) {
            ctx->pc = 0x298028u;
            goto label_298028;
        }
    }
    ctx->pc = 0x29801Cu;
    // 0x29801c: 0xc0a65ec  jal         func_2997B0
    ctx->pc = 0x29801Cu;
    SET_GPR_U32(ctx, 31, 0x298024u);
    ctx->pc = 0x298020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29801Cu;
    // 0x298020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2997B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2997B0u, 0x29801Cu, 0x298024u)) {
        return;
    }
    ctx->pc = 0x298024u;
label_298024:
    // 0x298024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_298028:
    // 0x298028: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x298028u;
    {
        const bool branch_taken_0x298028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29802Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298028u;
        // 0x29802c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298028) {
            ctx->pc = 0x2980BCu;
            goto label_2980bc;
        }
    }
    ctx->pc = 0x298030u;
    // 0x298030: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x298030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298034: 0x245611d1  addiu       $s6, $v0, 0x11D1
    ctx->pc = 0x298034u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
    // 0x298038: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x298038u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29803c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x29803cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298040: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x298040u;
    {
        const bool branch_taken_0x298040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298040u;
        // 0x298044: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298040) {
            ctx->pc = 0x298080u;
            goto label_298080;
        }
    }
    ctx->pc = 0x298048u;
label_298048:
    // 0x298048: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x298048u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29804c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x29804cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x298050: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x298050u;
    {
        const bool branch_taken_0x298050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298050) {
            ctx->pc = 0x298054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298050u;
            // 0x298054: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298064u;
            goto label_298064;
        }
    }
    ctx->pc = 0x298058u;
    // 0x298058: 0x56740007  bnel        $s3, $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x298058u;
    {
        const bool branch_taken_0x298058 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x298058) {
            ctx->pc = 0x29805Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298058u;
            // 0x29805c: 0xa2250000  sb          $a1, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298078u;
            goto label_298078;
        }
    }
    ctx->pc = 0x298060u;
    // 0x298060: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x298060u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_298064:
    // 0x298064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298068: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x298068u;
    SET_GPR_U32(ctx, 31, 0x298070u);
    ctx->pc = 0x29806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298068u;
    // 0x29806c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x298068u, 0x298070u)) {
        return;
    }
    ctx->pc = 0x298070u;
label_298070:
    // 0x298070: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298070u;
    {
        const bool branch_taken_0x298070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298070) {
            ctx->pc = 0x2980A4u;
            goto label_2980a4;
        }
    }
    ctx->pc = 0x298078u;
label_298078:
    // 0x298078: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x298078u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x29807c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29807cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_298080:
    // 0x298080: 0xc0a7bbe  jal         func_29EEF8
    ctx->pc = 0x298080u;
    SET_GPR_U32(ctx, 31, 0x298088u);
    ctx->pc = 0x298084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298080u;
    // 0x298084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EEF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29EEF8u, 0x298080u, 0x298088u)) {
        return;
    }
    ctx->pc = 0x298088u;
label_298088:
    // 0x298088: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29808c: 0x14b5ffee  bne         $a1, $s5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29808Cu;
    {
        const bool branch_taken_0x29808c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 21));
        ctx->pc = 0x298090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29808Cu;
        // 0x298090: 0xb61821  addu        $v1, $a1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29808c) {
            ctx->pc = 0x298048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298048;
        }
    }
    ctx->pc = 0x298094u;
    // 0x298094: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x298094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x298098: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x298098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29809c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2980a0: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x2980a0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_2980a4:
    // 0x2980a4: 0x56370006  bnel        $s1, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x2980A4u;
    {
        const bool branch_taken_0x2980a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 23));
        if (branch_taken_0x2980a4) {
            ctx->pc = 0x2980A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2980A4u;
            // 0x2980a8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2980C0u;
            goto label_2980c0;
        }
    }
    ctx->pc = 0x2980ACu;
    // 0x2980ac: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2980acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2980b0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x2980b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x2980b4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2980b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2980b8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x2980b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
label_2980bc:
    // 0x2980bc: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x2980bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_2980c0:
    // 0x2980c0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2980c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980c4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2980c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2980c8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2980c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2980cc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2980ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2980d0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2980d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2980d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2980d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2980d8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2980d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2980dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2980dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2980e0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2980e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2980e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2980e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2980e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2980E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2980ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980E8u;
        // 0x2980ec: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2980E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2980F0u;
}
