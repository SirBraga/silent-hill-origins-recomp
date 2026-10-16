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

// Function: sub_0029E670
// Address: 0x29e670 - 0x29e808
void sub_0029E670_0x29e670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E670_0x29e670");
#endif

    switch (ctx->pc) {
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e708u: goto label_29e708;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e768u: goto label_29e768;
        case 0x29e784u: goto label_29e784;
        case 0x29e7b8u: goto label_29e7b8;
        default: break;
    }

    ctx->pc = 0x29e670u;

    // 0x29e670: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29e670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29e674: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x29e674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x29e678: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x29e678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x29e67c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x29e67cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e680: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x29e680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x29e684: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x29e684u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e688: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x29e688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x29e68c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x29e68cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e690: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x29e690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x29e694: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x29e694u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e698: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29e698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29e69c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29e69cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29e6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29e6a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29e6a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6a8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29e6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x29e6ac: 0x3c0902d  daddu       $s2, $fp, $zero
    ctx->pc = 0x29e6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e6b0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29e6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29e6b4: 0x12c00037  beqz        $s6, . + 4 + (0x37 << 2)
    ctx->pc = 0x29E6B4u;
    {
        const bool branch_taken_0x29e6b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6B4u;
        // 0x29e6b8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6b4) {
            ctx->pc = 0x29E794u;
            goto label_29e794;
        }
    }
    ctx->pc = 0x29E6BCu;
    // 0x29e6bc: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x29E6BCu;
    {
        const bool branch_taken_0x29e6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6BCu;
        // 0x29e6c0: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6bc) {
            ctx->pc = 0x29E794u;
            goto label_29e794;
        }
    }
    ctx->pc = 0x29E6C4u;
    // 0x29e6c4: 0x0  nop
    ctx->pc = 0x29e6c4u;
    // NOP
label_29e6c8:
    // 0x29e6c8: 0x54b7000c  bnel        $a1, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x29E6C8u;
    {
        const bool branch_taken_0x29e6c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 23));
        if (branch_taken_0x29e6c8) {
            ctx->pc = 0x29E6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E6C8u;
            // 0x29e6cc: 0xa2450000  sb          $a1, 0x0($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E6FCu;
            goto label_29e6fc;
        }
    }
    ctx->pc = 0x29E6D0u;
    // 0x29e6d0: 0x1aa00004  blez        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x29E6D0u;
    {
        const bool branch_taken_0x29e6d0 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x29e6d0) {
            ctx->pc = 0x29E6E4u;
            goto label_29e6e4;
        }
    }
    ctx->pc = 0x29E6D8u;
    // 0x29e6d8: 0xa2450000  sb          $a1, 0x0($s2)
    ctx->pc = 0x29e6d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x29e6dc: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x29E6DCu;
    {
        const bool branch_taken_0x29e6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6DCu;
        // 0x29e6e0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6dc) {
            ctx->pc = 0x29E7D0u;
            goto label_29e7d0;
        }
    }
    ctx->pc = 0x29E6E4u;
label_29e6e4:
    // 0x29e6e4: 0x6a1003b  bgez        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x29E6E4u;
    {
        const bool branch_taken_0x29e6e4 = (GPR_S64(ctx, 21) >= 0);
        ctx->pc = 0x29E6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6E4u;
        // 0x29e6e8: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6e4) {
            ctx->pc = 0x29E7D4u;
            goto label_29e7d4;
        }
    }
    ctx->pc = 0x29E6ECu;
    // 0x29e6ec: 0xc0a744c  jal         func_29D130
    ctx->pc = 0x29E6ECu;
    SET_GPR_U32(ctx, 31, 0x29E6F4u);
    ctx->pc = 0x29E6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E6ECu;
    // 0x29e6f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D130u, 0x29E6ECu, 0x29E6F4u)) {
        return;
    }
    ctx->pc = 0x29E6F4u;
label_29e6f4:
    // 0x29e6f4: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x29E6F4u;
    {
        const bool branch_taken_0x29e6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E6F4u;
        // 0x29e6f8: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e6f4) {
            ctx->pc = 0x29E7D4u;
            goto label_29e7d4;
        }
    }
    ctx->pc = 0x29E6FCu;
label_29e6fc:
    // 0x29e6fc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x29e6fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x29e700: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x29E700u;
    {
        const bool branch_taken_0x29e700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E700u;
        // 0x29e704: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e700) {
            ctx->pc = 0x29E794u;
            goto label_29e794;
        }
    }
    ctx->pc = 0x29E708u;
label_29e708:
    // 0x29e708: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x29e708u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29e70c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29e70cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29e710: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x29e710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x29e714: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29E714u;
    {
        const bool branch_taken_0x29e714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E714u;
        // 0x29e718: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e714) {
            ctx->pc = 0x29E724u;
            goto label_29e724;
        }
    }
    ctx->pc = 0x29E71Cu;
    // 0x29e71c: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x29e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x29e720: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x29e720u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
label_29e724:
    // 0x29e724: 0xc0c489e  jal         func_312278
    ctx->pc = 0x29E724u;
    SET_GPR_U32(ctx, 31, 0x29E72Cu);
    ctx->pc = 0x29E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E724u;
    // 0x29e728: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312278u, 0x29E724u, 0x29E72Cu)) {
        return;
    }
    ctx->pc = 0x29E72Cu;
label_29e72c:
    // 0x29e72c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29e72cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e730: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x29E730u;
    {
        const bool branch_taken_0x29e730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E730u;
        // 0x29e734: 0x8e650004  lw          $a1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e730) {
            ctx->pc = 0x29E774u;
            goto label_29e774;
        }
    }
    ctx->pc = 0x29E738u;
    // 0x29e738: 0x25ea023  subu        $s4, $s2, $fp
    ctx->pc = 0x29e738u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
    // 0x29e73c: 0x6a00005  bltz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x29E73Cu;
    {
        const bool branch_taken_0x29e73c = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x29E740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E73Cu;
        // 0x29e740: 0x2253023  subu        $a2, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e73c) {
            ctx->pc = 0x29E754u;
            goto label_29e754;
        }
    }
    ctx->pc = 0x29E744u;
    // 0x29e744: 0x2aa30001  slti        $v1, $s5, 0x1
    ctx->pc = 0x29e744u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x29e748: 0x64c20001  daddiu      $v0, $a2, 0x1
    ctx->pc = 0x29e748u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)1);
    // 0x29e74c: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x29e74cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2));
    // 0x29e750: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29e750u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29e754:
    // 0x29e754: 0x6803c  dsll32      $s0, $a2, 0
    ctx->pc = 0x29e754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29e758: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x29e758u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x29e75c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e760: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29E760u;
    SET_GPR_U32(ctx, 31, 0x29E768u);
    ctx->pc = 0x29E764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E760u;
    // 0x29e764: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29E760u, 0x29E768u)) {
        return;
    }
    ctx->pc = 0x29E768u;
label_29e768:
    // 0x29e768: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x29e768u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x29e76c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29E76Cu;
    {
        const bool branch_taken_0x29e76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E76Cu;
        // 0x29e770: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e76c) {
            ctx->pc = 0x29E7D4u;
            goto label_29e7d4;
        }
    }
    ctx->pc = 0x29E774u;
label_29e774:
    // 0x29e774: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e778: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29e778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e77c: 0xc075fdc  jal         func_1D7F70
    ctx->pc = 0x29E77Cu;
    SET_GPR_U32(ctx, 31, 0x29E784u);
    ctx->pc = 0x29E780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E77Cu;
    // 0x29e780: 0x290a023  subu        $s4, $s4, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x29E77Cu, 0x29E784u)) {
        return;
    }
    ctx->pc = 0x29E784u;
label_29e784:
    // 0x29e784: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x29e784u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x29e788: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x29e788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29e78c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29e78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x29e790: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x29e790u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_29e794:
    // 0x29e794: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x29E794u;
    {
        const bool branch_taken_0x29e794 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E794u;
        // 0x29e798: 0x25e1023  subu        $v0, $s2, $fp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e794) {
            ctx->pc = 0x29E7D4u;
            goto label_29e7d4;
        }
    }
    ctx->pc = 0x29E79Cu;
    // 0x29e79c: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x29e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x29e7a0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x29e7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29e7a4: 0x443023  subu        $a2, $v0, $a0
    ctx->pc = 0x29e7a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29e7a8: 0x1cc0ffd7  bgtz        $a2, . + 4 + (-0x29 << 2)
    ctx->pc = 0x29E7A8u;
    {
        const bool branch_taken_0x29e7a8 = (GPR_S64(ctx, 6) > 0);
        if (branch_taken_0x29e7a8) {
            ctx->pc = 0x29E708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e708;
        }
    }
    ctx->pc = 0x29E7B0u;
    // 0x29e7b0: 0xc0a72a8  jal         func_29CAA0
    ctx->pc = 0x29E7B0u;
    SET_GPR_U32(ctx, 31, 0x29E7B8u);
    ctx->pc = 0x29E7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E7B0u;
    // 0x29e7b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29CAA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29CAA0u, 0x29E7B0u, 0x29E7B8u)) {
        return;
    }
    ctx->pc = 0x29E7B8u;
label_29e7b8:
    // 0x29e7b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29e7b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e7bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29e7c0: 0x14a2ffc1  bne         $a1, $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x29E7C0u;
    {
        const bool branch_taken_0x29e7c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e7c0) {
            ctx->pc = 0x29E6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29e6c8;
        }
    }
    ctx->pc = 0x29E7C8u;
    // 0x29e7c8: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29E7C8u;
    {
        const bool branch_taken_0x29e7c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e7c8) {
            ctx->pc = 0x29E7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29E7C8u;
            // 0x29e7cc: 0xaec50000  sw          $a1, 0x0($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29E7D0u;
            goto label_29e7d0;
        }
    }
    ctx->pc = 0x29E7D0u;
label_29e7d0:
    // 0x29e7d0: 0x25e1023  subu        $v0, $s2, $fp
    ctx->pc = 0x29e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 30)));
label_29e7d4:
    // 0x29e7d4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29e7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e7d8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x29e7d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e7dc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x29e7dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e7e0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x29e7e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e7e4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x29e7e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e7e8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x29e7e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e7ec: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29e7ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29e7f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29e7f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e7f4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29e7f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x29E7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E7FCu;
        // 0x29e800: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E804u;
    // 0x29e804: 0x0  nop
    ctx->pc = 0x29e804u;
    // NOP
    ctx->pc = 0x29e808u;
}
