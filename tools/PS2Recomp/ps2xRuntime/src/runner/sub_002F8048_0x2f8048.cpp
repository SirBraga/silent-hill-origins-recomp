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

// Function: sub_002F8048
// Address: 0x2f8048 - 0x2f82e8
void sub_002F8048_0x2f8048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F8048_0x2f8048");
#endif

    switch (ctx->pc) {
        case 0x2f809cu: goto label_2f809c;
        case 0x2f80a8u: goto label_2f80a8;
        case 0x2f80b0u: goto label_2f80b0;
        case 0x2f80e4u: goto label_2f80e4;
        case 0x2f8100u: goto label_2f8100;
        case 0x2f811cu: goto label_2f811c;
        case 0x2f8138u: goto label_2f8138;
        case 0x2f8148u: goto label_2f8148;
        case 0x2f8150u: goto label_2f8150;
        case 0x2f8184u: goto label_2f8184;
        case 0x2f81b0u: goto label_2f81b0;
        case 0x2f81c0u: goto label_2f81c0;
        case 0x2f81c8u: goto label_2f81c8;
        case 0x2f81f4u: goto label_2f81f4;
        case 0x2f8240u: goto label_2f8240;
        case 0x2f8258u: goto label_2f8258;
        case 0x2f8270u: goto label_2f8270;
        case 0x2f82a4u: goto label_2f82a4;
        case 0x2f82acu: goto label_2f82ac;
        default: break;
    }

    ctx->pc = 0x2f8048u;

    // 0x2f8048: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2f8048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2f804c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f804cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8050: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2f8050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2f8054: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2f8054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x2f8058: 0x3c1e0068  lui         $fp, 0x68
    ctx->pc = 0x2f8058u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)104 << 16));
    // 0x2f805c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x2f805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x2f8060: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2f8060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x2f8064: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x2f8064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x2f8068: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2f8068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2f806c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x2f806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x2f8070: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f8070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f8074: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x2f8074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x2f8078: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2f8078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2f807c: 0x8fc26660  lw          $v0, 0x6660($fp)
    ctx->pc = 0x2f807cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x686660u));
    // 0x2f8080: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8080u;
    {
        const bool branch_taken_0x2f8080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F8084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8080u;
        // 0x2f8084: 0x3c170072  lui         $s7, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8080) {
            ctx->pc = 0x2F8090u;
            goto label_2f8090;
        }
    }
    ctx->pc = 0x2F8088u;
    // 0x2f8088: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x2F8088u;
    {
        const bool branch_taken_0x2f8088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8088u;
        // 0x2f808c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8088) {
            ctx->pc = 0x2F82B8u;
            goto label_2f82b8;
        }
    }
    ctx->pc = 0x2F8090u;
label_2f8090:
    // 0x2f8090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f8090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8094: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x2F8094u;
    SET_GPR_U32(ctx, 31, 0x2F809Cu);
    ctx->pc = 0x2F8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8094u;
    // 0x2f8098: 0xaee07b80  sw          $zero, 0x7B80($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 31616), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x2F8094u, 0x2F809Cu)) {
        return;
    }
    ctx->pc = 0x2F809Cu;
label_2f809c:
    // 0x2f809c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F809Cu;
    {
        const bool branch_taken_0x2f809c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F80A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F809Cu;
        // 0x2f80a0: 0x3c110072  lui         $s1, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f809c) {
            ctx->pc = 0x2F80CCu;
            goto label_2f80cc;
        }
    }
    ctx->pc = 0x2F80A4u;
    // 0x2f80a4: 0x0  nop
    ctx->pc = 0x2f80a4u;
    // NOP
label_2f80a8:
    // 0x2f80a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f80ac: 0x0  nop
    ctx->pc = 0x2f80acu;
    // NOP
label_2f80b0:
    // 0x2f80b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f80b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f80b4: 0x0  nop
    ctx->pc = 0x2f80b4u;
    // NOP
    // 0x2f80b8: 0x0  nop
    ctx->pc = 0x2f80b8u;
    // NOP
    // 0x2f80bc: 0x0  nop
    ctx->pc = 0x2f80bcu;
    // NOP
    // 0x2f80c0: 0x0  nop
    ctx->pc = 0x2f80c0u;
    // NOP
    // 0x2f80c4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F80C4u;
    {
        const bool branch_taken_0x2f80c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f80c4) {
            ctx->pc = 0x2F80B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f80b0;
        }
    }
    ctx->pc = 0x2F80CCu;
label_2f80cc:
    // 0x2f80cc: 0x263056c0  addiu       $s0, $s1, 0x56C0
    ctx->pc = 0x2f80ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 22208));
    // 0x2f80d0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f80d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f80d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f80d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80d8: 0x34a51300  ori         $a1, $a1, 0x1300
    ctx->pc = 0x2f80d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4864);
    // 0x2f80dc: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x2F80DCu;
    SET_GPR_U32(ctx, 31, 0x2F80E4u);
    ctx->pc = 0x2F80E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F80DCu;
    // 0x2f80e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x2F80DCu, 0x2F80E4u)) {
        return;
    }
    ctx->pc = 0x2F80E4u;
label_2f80e4:
    // 0x2f80e4: 0x440005a  bltz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2F80E4u;
    {
        const bool branch_taken_0x2f80e4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F80E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80E4u;
        // 0x2f80e8: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80e4) {
            ctx->pc = 0x2F8250u;
            goto label_2f8250;
        }
    }
    ctx->pc = 0x2F80ECu;
    // 0x2f80ec: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2f80ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f80f0: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F80F0u;
    {
        const bool branch_taken_0x2f80f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F80F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80F0u;
        // 0x2f80f4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80f0) {
            ctx->pc = 0x2F80A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f80a8;
        }
    }
    ctx->pc = 0x2F80F8u;
    // 0x2f80f8: 0xc0bdffc  jal         func_2F7FF0
    ctx->pc = 0x2F80F8u;
    SET_GPR_U32(ctx, 31, 0x2F8100u);
    ctx->pc = 0x2F7FF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F7FF0u, 0x2F80F8u, 0x2F8100u)) {
        return;
    }
    ctx->pc = 0x2F8100u;
label_2f8100:
    // 0x2f8100: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f8100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8104: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x2f8104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2f8108: 0x101103  sra         $v0, $s0, 4
    ctx->pc = 0x2f8108u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 4));
    // 0x2f810c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2F810Cu;
    {
        const bool branch_taken_0x2f810c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F810Cu;
        // 0x2f8110: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f810c) {
            ctx->pc = 0x2F8140u;
            goto label_2f8140;
        }
    }
    ctx->pc = 0x2F8114u;
    // 0x2f8114: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F8114u;
    SET_GPR_U32(ctx, 31, 0x2F811Cu);
    ctx->pc = 0x2F8118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8114u;
    // 0x2f8118: 0x24840238  addiu       $a0, $a0, 0x238 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F8114u, 0x2F811Cu)) {
        return;
    }
    ctx->pc = 0x2F811Cu;
label_2f811c:
    // 0x2f811c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f811cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f8120: 0x320800ff  andi        $t0, $s0, 0xFF
    ctx->pc = 0x2f8120u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2f8124: 0x24840260  addiu       $a0, $a0, 0x260
    ctx->pc = 0x2f8124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
    // 0x2f8128: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2f8128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f812c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2f812cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2f8130: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F8130u;
    SET_GPR_U32(ctx, 31, 0x2F8138u);
    ctx->pc = 0x2F8134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8130u;
    // 0x2f8134: 0x103a03  sra         $a3, $s0, 8 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F8130u, 0x2F8138u)) {
        return;
    }
    ctx->pc = 0x2F8138u;
label_2f8138:
    // 0x2f8138: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2F8138u;
    {
        const bool branch_taken_0x2f8138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8138u;
        // 0x2f813c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8138) {
            ctx->pc = 0x2F82B8u;
            goto label_2f82b8;
        }
    }
    ctx->pc = 0x2F8140u;
label_2f8140:
    // 0x2f8140: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2F8140u;
    {
        const bool branch_taken_0x2f8140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8140u;
        // 0x2f8144: 0x3c110072  lui         $s1, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8140) {
            ctx->pc = 0x2F816Cu;
            goto label_2f816c;
        }
    }
    ctx->pc = 0x2F8148u;
label_2f8148:
    // 0x2f8148: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2f8148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2f814c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f814cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8150:
    // 0x2f8150: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f8150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f8154: 0x0  nop
    ctx->pc = 0x2f8154u;
    // NOP
    // 0x2f8158: 0x0  nop
    ctx->pc = 0x2f8158u;
    // NOP
    // 0x2f815c: 0x0  nop
    ctx->pc = 0x2f815cu;
    // NOP
    // 0x2f8160: 0x0  nop
    ctx->pc = 0x2f8160u;
    // NOP
    // 0x2f8164: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F8164u;
    {
        const bool branch_taken_0x2f8164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f8164) {
            ctx->pc = 0x2F8150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8150;
        }
    }
    ctx->pc = 0x2F816Cu;
label_2f816c:
    // 0x2f816c: 0x26305710  addiu       $s0, $s1, 0x5710
    ctx->pc = 0x2f816cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 22288));
    // 0x2f8170: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f8170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f8174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8178: 0x34a5131c  ori         $a1, $a1, 0x131C
    ctx->pc = 0x2f8178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4892);
    // 0x2f817c: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x2F817Cu;
    SET_GPR_U32(ctx, 31, 0x2F8184u);
    ctx->pc = 0x2F8180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F817Cu;
    // 0x2f8180: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x2F817Cu, 0x2F8184u)) {
        return;
    }
    ctx->pc = 0x2F8184u;
label_2f8184:
    // 0x2f8184: 0x4400032  bltz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2F8184u;
    {
        const bool branch_taken_0x2f8184 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F8188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8184u;
        // 0x2f8188: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8184) {
            ctx->pc = 0x2F8250u;
            goto label_2f8250;
        }
    }
    ctx->pc = 0x2F818Cu;
    // 0x2f818c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2f818cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2f8190: 0x1040ffed  beqz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2F8190u;
    {
        const bool branch_taken_0x2f8190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8190u;
        // 0x2f8194: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8190) {
            ctx->pc = 0x2F8148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8148;
        }
    }
    ctx->pc = 0x2F8198u;
    // 0x2f8198: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2f8198u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x2f819c: 0x24565738  addiu       $s6, $v0, 0x5738
    ctx->pc = 0x2f819cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 22328));
    // 0x2f81a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2f81a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f81a4: 0x3673131e  ori         $s3, $s3, 0x131E
    ctx->pc = 0x2f81a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4894);
    // 0x2f81a8: 0x26d50024  addiu       $s5, $s6, 0x24
    ctx->pc = 0x2f81a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 36));
    // 0x2f81ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2f81acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f81b0:
    // 0x2f81b0: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x2f81b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f81b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F81B4u;
    {
        const bool branch_taken_0x2f81b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F81B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81B4u;
        // 0x2f81b8: 0x2a0802d  daddu       $s0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81b4) {
            ctx->pc = 0x2F81E4u;
            goto label_2f81e4;
        }
    }
    ctx->pc = 0x2F81BCu;
    // 0x2f81bc: 0x0  nop
    ctx->pc = 0x2f81bcu;
    // NOP
label_2f81c0:
    // 0x2f81c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f81c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f81c4: 0x0  nop
    ctx->pc = 0x2f81c4u;
    // NOP
label_2f81c8:
    // 0x2f81c8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f81c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f81cc: 0x0  nop
    ctx->pc = 0x2f81ccu;
    // NOP
    // 0x2f81d0: 0x0  nop
    ctx->pc = 0x2f81d0u;
    // NOP
    // 0x2f81d4: 0x0  nop
    ctx->pc = 0x2f81d4u;
    // NOP
    // 0x2f81d8: 0x0  nop
    ctx->pc = 0x2f81d8u;
    // NOP
    // 0x2f81dc: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F81DCu;
    {
        const bool branch_taken_0x2f81dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f81dc) {
            ctx->pc = 0x2F81C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f81c8;
        }
    }
    ctx->pc = 0x2F81E4u;
label_2f81e4:
    // 0x2f81e4: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x2f81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x2f81e8: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x2f81ec: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x2F81ECu;
    SET_GPR_U32(ctx, 31, 0x2F81F4u);
    ctx->pc = 0x2F81F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F81ECu;
    // 0x2f81f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x2F81ECu, 0x2F81F4u)) {
        return;
    }
    ctx->pc = 0x2F81F4u;
label_2f81f4:
    // 0x2f81f4: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F81F4u;
    {
        const bool branch_taken_0x2f81f4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2F81F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F81F4u;
        // 0x2f81f8: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f81f4) {
            ctx->pc = 0x2F8250u;
            goto label_2f8250;
        }
    }
    ctx->pc = 0x2F81FCu;
    // 0x2f81fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f81fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f8200: 0x1040ffef  beqz        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2F8200u;
    {
        const bool branch_taken_0x2f8200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8200u;
        // 0x2f8204: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8200) {
            ctx->pc = 0x2F81C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f81c0;
        }
    }
    ctx->pc = 0x2F8208u;
    // 0x2f8208: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2f8208u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2f820c: 0x26b50028  addiu       $s5, $s5, 0x28
    ctx->pc = 0x2f820cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 40));
    // 0x2f8210: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x2f8210u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f8214: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2F8214u;
    {
        const bool branch_taken_0x2f8214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8214u;
        // 0x2f8218: 0x26940028  addiu       $s4, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8214) {
            ctx->pc = 0x2F81B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f81b0;
        }
    }
    ctx->pc = 0x2F821Cu;
    // 0x2f821c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2f821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2f8220: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f8220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f8224: 0x24420290  addiu       $v0, $v0, 0x290
    ctx->pc = 0x2f8224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 656));
    // 0x2f8228: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x2f8228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x2f822c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2f822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x2f8230: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f8230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8234: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x2f8234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x2f8238: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x2F8238u;
    SET_GPR_U32(ctx, 31, 0x2F8240u);
    ctx->pc = 0x2F823Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8238u;
    // 0x2f823c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x2F8238u, 0x2F8240u)) {
        return;
    }
    ctx->pc = 0x2F8240u;
label_2f8240:
    // 0x2f8240: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F8240u;
    {
        const bool branch_taken_0x2f8240 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2F8244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8240u;
        // 0x2f8244: 0xaee27b80  sw          $v0, 0x7B80($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 31616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8240) {
            ctx->pc = 0x2F8260u;
            goto label_2f8260;
        }
    }
    ctx->pc = 0x2F8248u;
    // 0x2f8248: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F8248u;
    {
        const bool branch_taken_0x2f8248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8248u;
        // 0x2f824c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8248) {
            ctx->pc = 0x2F82B8u;
            goto label_2f82b8;
        }
    }
    ctx->pc = 0x2F8250u;
label_2f8250:
    // 0x2f8250: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F8250u;
    SET_GPR_U32(ctx, 31, 0x2F8258u);
    ctx->pc = 0x2F8254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8250u;
    // 0x2f8254: 0x24840220  addiu       $a0, $a0, 0x220 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F8250u, 0x2F8258u)) {
        return;
    }
    ctx->pc = 0x2F8258u;
label_2f8258:
    // 0x2f8258: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F8258u;
    {
        const bool branch_taken_0x2f8258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8258u;
        // 0x2f825c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8258) {
            ctx->pc = 0x2F82B8u;
            goto label_2f82b8;
        }
    }
    ctx->pc = 0x2F8260u;
label_2f8260:
    // 0x2f8260: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f8260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f8264: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2f8264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2f8268: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x2f8268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
    // 0x2f826c: 0x2442003c  addiu       $v0, $v0, 0x3C
    ctx->pc = 0x2f826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2f8270:
    // 0x2f8270: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2f8270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2f8274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2f8274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2f8278: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2f8278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2f827c: 0x0  nop
    ctx->pc = 0x2f827cu;
    // NOP
    // 0x2f8280: 0x0  nop
    ctx->pc = 0x2f8280u;
    // NOP
    // 0x2f8284: 0x461fffa  bgez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F8284u;
    {
        const bool branch_taken_0x2f8284 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2f8284) {
            ctx->pc = 0x2F8270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8270;
        }
    }
    ctx->pc = 0x2F828Cu;
    // 0x2f828c: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f828cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f8290: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f8290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2f8294: 0x26107ac0  addiu       $s0, $s0, 0x7AC0
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31424));
    // 0x2f8298: 0x248402a0  addiu       $a0, $a0, 0x2A0
    ctx->pc = 0x2f8298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 672));
    // 0x2f829c: 0xc0be1f2  jal         func_2F87C8
    ctx->pc = 0x2F829Cu;
    SET_GPR_U32(ctx, 31, 0x2F82A4u);
    ctx->pc = 0x2F82A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F829Cu;
    // 0x2f82a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F87C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F87C8u, 0x2F829Cu, 0x2F82A4u)) {
        return;
    }
    ctx->pc = 0x2F82A4u;
label_2f82a4:
    // 0x2f82a4: 0xc0be0ba  jal         func_2F82E8
    ctx->pc = 0x2F82A4u;
    SET_GPR_U32(ctx, 31, 0x2F82ACu);
    ctx->pc = 0x2F82A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82A4u;
    // 0x2f82a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F82E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F82E8u, 0x2F82A4u, 0x2F82ACu)) {
        return;
    }
    ctx->pc = 0x2F82ACu;
label_2f82ac:
    // 0x2f82ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f82acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f82b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f82b4: 0xafc36660  sw          $v1, 0x6660($fp)
    ctx->pc = 0x2f82b4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 26208), GPR_U32(ctx, 3));
label_2f82b8:
    // 0x2f82b8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2f82b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2f82bc: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2f82bcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2f82c0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2f82c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f82c4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2f82c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2f82c8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2f82c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f82cc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2f82ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f82d0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2f82d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f82d4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f82d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f82d8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2f82d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f82dc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2f82dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f82e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F82E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F82E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82E0u;
        // 0x2f82e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F82E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F82E8u;
}
