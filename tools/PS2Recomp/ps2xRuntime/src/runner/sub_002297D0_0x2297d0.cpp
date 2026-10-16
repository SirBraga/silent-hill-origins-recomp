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

// Function: sub_002297D0
// Address: 0x2297d0 - 0x2299d8
void sub_002297D0_0x2297d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002297D0_0x2297d0");
#endif

    switch (ctx->pc) {
        case 0x229828u: goto label_229828;
        case 0x229848u: goto label_229848;
        case 0x2298ccu: goto label_2298cc;
        case 0x2298dcu: goto label_2298dc;
        case 0x2298f8u: goto label_2298f8;
        case 0x229910u: goto label_229910;
        case 0x22992cu: goto label_22992c;
        case 0x229938u: goto label_229938;
        case 0x22994cu: goto label_22994c;
        case 0x229960u: goto label_229960;
        case 0x22997cu: goto label_22997c;
        case 0x229990u: goto label_229990;
        case 0x2299a8u: goto label_2299a8;
        default: break;
    }

    ctx->pc = 0x2297d0u;

    // 0x2297d0: 0x27bdbf60  addiu       $sp, $sp, -0x40A0
    ctx->pc = 0x2297d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294950752));
    // 0x2297d4: 0x7fb14080  sq          $s1, 0x4080($sp)
    ctx->pc = 0x2297d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16512), GPR_VEC(ctx, 17));
    // 0x2297d8: 0x7fb44050  sq          $s4, 0x4050($sp)
    ctx->pc = 0x2297d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16464), GPR_VEC(ctx, 20));
    // 0x2297dc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2297dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297e0: 0x7fb54040  sq          $s5, 0x4040($sp)
    ctx->pc = 0x2297e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16448), GPR_VEC(ctx, 21));
    // 0x2297e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2297e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297e8: 0x7fb64030  sq          $s6, 0x4030($sp)
    ctx->pc = 0x2297e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16432), GPR_VEC(ctx, 22));
    // 0x2297ec: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2297ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297f0: 0x7fb74020  sq          $s7, 0x4020($sp)
    ctx->pc = 0x2297f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16416), GPR_VEC(ctx, 23));
    // 0x2297f4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2297f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2297f8: 0x7fb04090  sq          $s0, 0x4090($sp)
    ctx->pc = 0x2297f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16528), GPR_VEC(ctx, 16));
    // 0x2297fc: 0x7fb24070  sq          $s2, 0x4070($sp)
    ctx->pc = 0x2297fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16496), GPR_VEC(ctx, 18));
    // 0x229800: 0x7fb34060  sq          $s3, 0x4060($sp)
    ctx->pc = 0x229800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16480), GPR_VEC(ctx, 19));
    // 0x229804: 0xffbf4010  sd          $ra, 0x4010($sp)
    ctx->pc = 0x229804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16400), GPR_U64(ctx, 31));
    // 0x229808: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x229808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22980c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x22980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x229810: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x229810u;
    {
        const bool branch_taken_0x229810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229810u;
        // 0x229814: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229810) {
            ctx->pc = 0x2298D4u;
            goto label_2298d4;
        }
    }
    ctx->pc = 0x229818u;
    // 0x229818: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x229818u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22981c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22981Cu;
    {
        const bool branch_taken_0x22981c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22981Cu;
        // 0x229820: 0x2b24804  sllv        $t1, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 21) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22981c) {
            ctx->pc = 0x229874u;
            goto label_229874;
        }
    }
    ctx->pc = 0x229824u;
    // 0x229824: 0x0  nop
    ctx->pc = 0x229824u;
    // NOP
label_229828:
    // 0x229828: 0x19200011  blez        $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x229828u;
    {
        const bool branch_taken_0x229828 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x22982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229828u;
        // 0x22982c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229828) {
            ctx->pc = 0x229870u;
            goto label_229870;
        }
    }
    ctx->pc = 0x229830u;
    // 0x229830: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x229830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x229834: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x229834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x229838: 0x5462000d  bnel        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x229838u;
    {
        const bool branch_taken_0x229838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x229838) {
            ctx->pc = 0x22983Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229838u;
            // 0x22983c: 0x24120040  addiu       $s2, $zero, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229870u;
            goto label_229870;
        }
    }
    ctx->pc = 0x229840u;
    // 0x229840: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x229840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x229844: 0x0  nop
    ctx->pc = 0x229844u;
    // NOP
label_229848:
    // 0x229848: 0xc9102a  slt         $v0, $a2, $t1
    ctx->pc = 0x229848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x22984c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22984Cu;
    {
        const bool branch_taken_0x22984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22984Cu;
        // 0x229850: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22984c) {
            ctx->pc = 0x229870u;
            goto label_229870;
        }
    }
    ctx->pc = 0x229854u;
    // 0x229854: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x229854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x229858: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x229858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x22985c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x22985cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x229860: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x229860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x229864: 0x5083fff8  beql        $a0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x229864u;
    {
        const bool branch_taken_0x229864 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x229864) {
            ctx->pc = 0x229868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229864u;
            // 0x229868: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x229848u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229848;
        }
    }
    ctx->pc = 0x22986Cu;
    // 0x22986c: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x22986cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_229870:
    // 0x229870: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_229874:
    // 0x229874: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x229874u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x229878: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x229878u;
    {
        const bool branch_taken_0x229878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22987Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229878u;
        // 0x22987c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229878) {
            ctx->pc = 0x2298A4u;
            goto label_2298a4;
        }
    }
    ctx->pc = 0x229880u;
    // 0x229880: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x229880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x229884: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x229884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x229888: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x229888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22988c: 0x8c880018  lw          $t0, 0x18($a0)
    ctx->pc = 0x22988cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x229890: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x229890u;
    {
        const bool branch_taken_0x229890 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x229894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229890u;
        // 0x229894: 0x8c670018  lw          $a3, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229890) {
            ctx->pc = 0x2298A0u;
            goto label_2298a0;
        }
    }
    ctx->pc = 0x229898u;
    // 0x229898: 0x14e0ffe3  bnez        $a3, . + 4 + (-0x1D << 2)
    ctx->pc = 0x229898u;
    {
        const bool branch_taken_0x229898 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x229898) {
            ctx->pc = 0x229828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229828;
        }
    }
    ctx->pc = 0x2298A0u;
label_2298a0:
    // 0x2298a0: 0x24120040  addiu       $s2, $zero, 0x40
    ctx->pc = 0x2298a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2298a4:
    // 0x2298a4: 0x1654000b  bne         $s2, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2298A4u;
    {
        const bool branch_taken_0x2298a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x2298A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298A4u;
        // 0x2298a8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298a4) {
            ctx->pc = 0x2298D4u;
            goto label_2298d4;
        }
    }
    ctx->pc = 0x2298ACu;
    // 0x2298ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2298acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2298b0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2298b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298b4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2298b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2298b8: 0x663014  dsllv       $a2, $a2, $v1
    ctx->pc = 0x2298b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x2298bc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2298bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2298c0: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2298c0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2298c4: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x2298C4u;
    SET_GPR_U32(ctx, 31, 0x2298CCu);
    ctx->pc = 0x2298C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298C4u;
    // 0x2298c8: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2298C4u, 0x2298CCu)) {
        return;
    }
    ctx->pc = 0x2298CCu;
label_2298cc:
    // 0x2298cc: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2298CCu;
    {
        const bool branch_taken_0x2298cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298CCu;
        // 0x2298d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298cc) {
            ctx->pc = 0x2299ACu;
            goto label_2299ac;
        }
    }
    ctx->pc = 0x2298D4u;
label_2298d4:
    // 0x2298d4: 0xc08b470  jal         func_22D1C0
    ctx->pc = 0x2298D4u;
    SET_GPR_U32(ctx, 31, 0x2298DCu);
    ctx->pc = 0x2298D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2298D4u;
    // 0x2298d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D1C0u, 0x2298D4u, 0x2298DCu)) {
        return;
    }
    ctx->pc = 0x2298DCu;
label_2298dc:
    // 0x2298dc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2298DCu;
    {
        const bool branch_taken_0x2298dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2298E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298DCu;
        // 0x2298e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298dc) {
            ctx->pc = 0x2299ACu;
            goto label_2299ac;
        }
    }
    ctx->pc = 0x2298E4u;
    // 0x2298e4: 0x1a80000c  blez        $s4, . + 4 + (0xC << 2)
    ctx->pc = 0x2298E4u;
    {
        const bool branch_taken_0x2298e4 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x2298E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2298E4u;
        // 0x2298e8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2298e4) {
            ctx->pc = 0x229918u;
            goto label_229918;
        }
    }
    ctx->pc = 0x2298ECu;
    // 0x2298ec: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x2298ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298f0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2298f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2298f4: 0x0  nop
    ctx->pc = 0x2298f4u;
    // NOP
label_2298f8:
    // 0x2298f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2298f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2298fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2298fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x229900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x229900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x229904: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x229904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x229908: 0xc08afbc  jal         func_22BEF0
    ctx->pc = 0x229908u;
    SET_GPR_U32(ctx, 31, 0x229910u);
    ctx->pc = 0x22990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229908u;
    // 0x22990c: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BEF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22BEF0u, 0x229908u, 0x229910u)) {
        return;
    }
    ctx->pc = 0x229910u;
label_229910:
    // 0x229910: 0x5640fff9  bnel        $s2, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x229910u;
    {
        const bool branch_taken_0x229910 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x229910) {
            ctx->pc = 0x229914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x229910u;
            // 0x229914: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2298F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2298f8;
        }
    }
    ctx->pc = 0x229918u;
label_229918:
    // 0x229918: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x229918u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22991c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22991cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229920: 0x2a52804  sllv        $a1, $a1, $s5
    ctx->pc = 0x229920u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 21) & 0x1F));
    // 0x229924: 0xc08b2c0  jal         func_22CB00
    ctx->pc = 0x229924u;
    SET_GPR_U32(ctx, 31, 0x22992Cu);
    ctx->pc = 0x229928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229924u;
    // 0x229928: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CB00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CB00u, 0x229924u, 0x22992Cu)) {
        return;
    }
    ctx->pc = 0x22992Cu;
label_22992c:
    // 0x22992c: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
    ctx->pc = 0x22992Cu;
    {
        const bool branch_taken_0x22992c = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x229930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22992Cu;
        // 0x229930: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22992c) {
            ctx->pc = 0x2299A0u;
            goto label_2299a0;
        }
    }
    ctx->pc = 0x229934u;
    // 0x229934: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x229934u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229938:
    // 0x229938: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x229938u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x22993c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x22993cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229940: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x229940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x229944: 0xc089b6c  jal         func_226DB0
    ctx->pc = 0x229944u;
    SET_GPR_U32(ctx, 31, 0x22994Cu);
    ctx->pc = 0x229948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229944u;
    // 0x229948: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226DB0u, 0x229944u, 0x22994Cu)) {
        return;
    }
    ctx->pc = 0x22994Cu;
label_22994c:
    // 0x22994c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22994cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229950: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x229950u;
    {
        const bool branch_taken_0x229950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x229954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229950u;
        // 0x229954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229950) {
            ctx->pc = 0x2299ACu;
            goto label_2299ac;
        }
    }
    ctx->pc = 0x229958u;
    // 0x229958: 0xc089bb2  jal         func_226EC8
    ctx->pc = 0x229958u;
    SET_GPR_U32(ctx, 31, 0x229960u);
    ctx->pc = 0x22995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229958u;
    // 0x22995c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226EC8u, 0x229958u, 0x229960u)) {
        return;
    }
    ctx->pc = 0x229960u;
label_229960:
    // 0x229960: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x229960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x229964: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x229964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229968: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x229968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x22996c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x22996cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x229970: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x229970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x229974: 0xc08b374  jal         func_22CDD0
    ctx->pc = 0x229974u;
    SET_GPR_U32(ctx, 31, 0x22997Cu);
    ctx->pc = 0x229978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229974u;
    // 0x229978: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22CDD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22CDD0u, 0x229974u, 0x22997Cu)) {
        return;
    }
    ctx->pc = 0x22997Cu;
label_22997c:
    // 0x22997c: 0xae160018  sw          $s6, 0x18($s0)
    ctx->pc = 0x22997cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 22));
    // 0x229980: 0x12370003  beq         $s1, $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x229980u;
    {
        const bool branch_taken_0x229980 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 23));
        ctx->pc = 0x229984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229980u;
        // 0x229984: 0xae700000  sw          $s0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229980) {
            ctx->pc = 0x229990u;
            goto label_229990;
        }
    }
    ctx->pc = 0x229988u;
    // 0x229988: 0xc089b96  jal         func_226E58
    ctx->pc = 0x229988u;
    SET_GPR_U32(ctx, 31, 0x229990u);
    ctx->pc = 0x22998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229988u;
    // 0x22998c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x229988u, 0x229990u)) {
        return;
    }
    ctx->pc = 0x229990u;
label_229990:
    // 0x229990: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x229990u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x229994: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x229994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x229998: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x229998u;
    {
        const bool branch_taken_0x229998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229998u;
        // 0x22999c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229998) {
            ctx->pc = 0x229938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_229938;
        }
    }
    ctx->pc = 0x2299A0u;
label_2299a0:
    // 0x2299a0: 0xc08b4d2  jal         func_22D348
    ctx->pc = 0x2299A0u;
    SET_GPR_U32(ctx, 31, 0x2299A8u);
    ctx->pc = 0x2299A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2299A0u;
    // 0x2299a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22D348u, 0x2299A0u, 0x2299A8u)) {
        return;
    }
    ctx->pc = 0x2299A8u;
label_2299a8:
    // 0x2299a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2299a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2299ac:
    // 0x2299ac: 0x7bb04090  lq          $s0, 0x4090($sp)
    ctx->pc = 0x2299acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16528)));
    // 0x2299b0: 0x7bb14080  lq          $s1, 0x4080($sp)
    ctx->pc = 0x2299b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16512)));
    // 0x2299b4: 0x7bb24070  lq          $s2, 0x4070($sp)
    ctx->pc = 0x2299b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16496)));
    // 0x2299b8: 0x7bb34060  lq          $s3, 0x4060($sp)
    ctx->pc = 0x2299b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16480)));
    // 0x2299bc: 0x7bb44050  lq          $s4, 0x4050($sp)
    ctx->pc = 0x2299bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16464)));
    // 0x2299c0: 0x7bb54040  lq          $s5, 0x4040($sp)
    ctx->pc = 0x2299c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16448)));
    // 0x2299c4: 0x7bb64030  lq          $s6, 0x4030($sp)
    ctx->pc = 0x2299c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16432)));
    // 0x2299c8: 0x7bb74020  lq          $s7, 0x4020($sp)
    ctx->pc = 0x2299c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16416)));
    // 0x2299cc: 0xdfbf4010  ld          $ra, 0x4010($sp)
    ctx->pc = 0x2299ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16400)));
    // 0x2299d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2299D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2299D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2299D0u;
        // 0x2299d4: 0x27bd40a0  addiu       $sp, $sp, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2299D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2299D8u;
}
