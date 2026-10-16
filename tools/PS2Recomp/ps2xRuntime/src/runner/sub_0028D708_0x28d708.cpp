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

// Function: sub_0028D708
// Address: 0x28d708 - 0x28d930
void sub_0028D708_0x28d708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D708_0x28d708");
#endif

    switch (ctx->pc) {
        case 0x28d734u: goto label_28d734;
        case 0x28d740u: goto label_28d740;
        case 0x28d780u: goto label_28d780;
        case 0x28d798u: goto label_28d798;
        case 0x28d7bcu: goto label_28d7bc;
        case 0x28d7d4u: goto label_28d7d4;
        case 0x28d7f8u: goto label_28d7f8;
        case 0x28d810u: goto label_28d810;
        case 0x28d828u: goto label_28d828;
        case 0x28d83cu: goto label_28d83c;
        case 0x28d854u: goto label_28d854;
        case 0x28d870u: goto label_28d870;
        case 0x28d888u: goto label_28d888;
        case 0x28d8a4u: goto label_28d8a4;
        case 0x28d8bcu: goto label_28d8bc;
        case 0x28d8d8u: goto label_28d8d8;
        case 0x28d8f0u: goto label_28d8f0;
        default: break;
    }

    ctx->pc = 0x28d708u;

    // 0x28d708: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28d70c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28d710: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28d714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28d714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d718: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28d718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28d71c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28d71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d720: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28d720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x28d724: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28d724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x28d728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28d728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28d72c: 0xc09294c  jal         func_24A530
    ctx->pc = 0x28D72Cu;
    SET_GPR_U32(ctx, 31, 0x28D734u);
    ctx->pc = 0x28D730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D72Cu;
    // 0x28d730: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x28D72Cu, 0x28D734u)) {
        return;
    }
    ctx->pc = 0x28D734u;
label_28d734:
    // 0x28d734: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x28d734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28d738: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28D738u;
    SET_GPR_U32(ctx, 31, 0x28D740u);
    ctx->pc = 0x28D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28D738u;
    // 0x28d73c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28D738u, 0x28D740u)) {
        return;
    }
    ctx->pc = 0x28D740u;
label_28d740:
    // 0x28d740: 0x1a400071  blez        $s2, . + 4 + (0x71 << 2)
    ctx->pc = 0x28D740u;
    {
        const bool branch_taken_0x28d740 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x28D744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D740u;
        // 0x28d744: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d740) {
            ctx->pc = 0x28D908u;
            goto label_28d908;
        }
    }
    ctx->pc = 0x28D748u;
    // 0x28d748: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x28d748u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d74c: 0x141023  negu        $v0, $s4
    ctx->pc = 0x28d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x28d750: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x28d750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x28d754: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x28D754u;
    {
        const bool branch_taken_0x28d754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D754u;
        // 0x28d758: 0x26720008  addiu       $s2, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d754) {
            ctx->pc = 0x28D824u;
            goto label_28d824;
        }
    }
    ctx->pc = 0x28D75Cu;
    // 0x28d75c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x28d75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28d760: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x28D760u;
    {
        const bool branch_taken_0x28d760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D760u;
        // 0x28d764: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d760) {
            ctx->pc = 0x28D7E4u;
            goto label_28d7e4;
        }
    }
    ctx->pc = 0x28D768u;
    // 0x28d768: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28D768u;
    {
        const bool branch_taken_0x28d768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D768u;
        // 0x28d76c: 0x8e44fffc  lw          $a0, -0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d768) {
            ctx->pc = 0x28D7ACu;
            goto label_28d7ac;
        }
    }
    ctx->pc = 0x28D770u;
    // 0x28d770: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D770u;
    {
        const bool branch_taken_0x28d770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D770u;
        // 0x28d774: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d770) {
            ctx->pc = 0x28D784u;
            goto label_28d784;
        }
    }
    ctx->pc = 0x28D778u;
    // 0x28d778: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D778u;
    SET_GPR_U32(ctx, 31, 0x28D780u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D778u, 0x28D780u)) {
        return;
    }
    ctx->pc = 0x28D780u;
label_28d780:
    // 0x28d780: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d784:
    // 0x28d784: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28d784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28d788: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D788u;
    {
        const bool branch_taken_0x28d788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D788u;
        // 0x28d78c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d788) {
            ctx->pc = 0x28D7A0u;
            goto label_28d7a0;
        }
    }
    ctx->pc = 0x28D790u;
    // 0x28d790: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D790u;
    SET_GPR_U32(ctx, 31, 0x28D798u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D790u, 0x28D798u)) {
        return;
    }
    ctx->pc = 0x28D798u;
label_28d798:
    // 0x28d798: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d79c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28d79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28d7a0:
    // 0x28d7a0: 0x26720014  addiu       $s2, $s3, 0x14
    ctx->pc = 0x28d7a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x28d7a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28d7a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28d7a8: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x28d7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_28d7ac:
    // 0x28d7ac: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D7ACu;
    {
        const bool branch_taken_0x28d7ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7ACu;
        // 0x28d7b0: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7ac) {
            ctx->pc = 0x28D7C0u;
            goto label_28d7c0;
        }
    }
    ctx->pc = 0x28D7B4u;
    // 0x28d7b4: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D7B4u;
    SET_GPR_U32(ctx, 31, 0x28D7BCu);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D7B4u, 0x28D7BCu)) {
        return;
    }
    ctx->pc = 0x28D7BCu;
label_28d7bc:
    // 0x28d7bc: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d7c0:
    // 0x28d7c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d7c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D7C4u;
    {
        const bool branch_taken_0x28d7c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d7c4) {
            ctx->pc = 0x28D7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D7C4u;
            // 0x28d7c8: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D7DCu;
            goto label_28d7dc;
        }
    }
    ctx->pc = 0x28D7CCu;
    // 0x28d7cc: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D7CCu;
    SET_GPR_U32(ctx, 31, 0x28D7D4u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D7CCu, 0x28D7D4u)) {
        return;
    }
    ctx->pc = 0x28D7D4u;
label_28d7d4:
    // 0x28d7d4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d7d8: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d7dc:
    // 0x28d7dc: 0x2652000c  addiu       $s2, $s2, 0xC
    ctx->pc = 0x28d7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x28d7e0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28d7e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28d7e4:
    // 0x28d7e4: 0x8e44fffc  lw          $a0, -0x4($s2)
    ctx->pc = 0x28d7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294967292)));
    // 0x28d7e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D7E8u;
    {
        const bool branch_taken_0x28d7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D7E8u;
        // 0x28d7ec: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d7e8) {
            ctx->pc = 0x28D7FCu;
            goto label_28d7fc;
        }
    }
    ctx->pc = 0x28D7F0u;
    // 0x28d7f0: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D7F0u;
    SET_GPR_U32(ctx, 31, 0x28D7F8u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D7F0u, 0x28D7F8u)) {
        return;
    }
    ctx->pc = 0x28D7F8u;
label_28d7f8:
    // 0x28d7f8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d7fc:
    // 0x28d7fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28d7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d800: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D800u;
    {
        const bool branch_taken_0x28d800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d800) {
            ctx->pc = 0x28D804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D800u;
            // 0x28d804: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D818u;
            goto label_28d818;
        }
    }
    ctx->pc = 0x28D808u;
    // 0x28d808: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D808u;
    SET_GPR_U32(ctx, 31, 0x28D810u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D808u, 0x28D810u)) {
        return;
    }
    ctx->pc = 0x28D810u;
label_28d810:
    // 0x28d810: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d814: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d814u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d818:
    // 0x28d818: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28d818u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28d81c: 0x1280003a  beqz        $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x28D81Cu;
    {
        const bool branch_taken_0x28d81c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D81Cu;
        // 0x28d820: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d81c) {
            ctx->pc = 0x28D908u;
            goto label_28d908;
        }
    }
    ctx->pc = 0x28D824u;
label_28d824:
    // 0x28d824: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28d824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28d828:
    // 0x28d828: 0x8e64fffc  lw          $a0, -0x4($s3)
    ctx->pc = 0x28d828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
    // 0x28d82c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D82Cu;
    {
        const bool branch_taken_0x28d82c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D82Cu;
        // 0x28d830: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d82c) {
            ctx->pc = 0x28D840u;
            goto label_28d840;
        }
    }
    ctx->pc = 0x28D834u;
    // 0x28d834: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D834u;
    SET_GPR_U32(ctx, 31, 0x28D83Cu);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D834u, 0x28D83Cu)) {
        return;
    }
    ctx->pc = 0x28D83Cu;
label_28d83c:
    // 0x28d83c: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d83cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d840:
    // 0x28d840: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28d840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28d844: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D844u;
    {
        const bool branch_taken_0x28d844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d844) {
            ctx->pc = 0x28D848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D844u;
            // 0x28d848: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D85Cu;
            goto label_28d85c;
        }
    }
    ctx->pc = 0x28D84Cu;
    // 0x28d84c: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D84Cu;
    SET_GPR_U32(ctx, 31, 0x28D854u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D84Cu, 0x28D854u)) {
        return;
    }
    ctx->pc = 0x28D854u;
label_28d854:
    // 0x28d854: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d858: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d85c:
    // 0x28d85c: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x28d85cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x28d860: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D860u;
    {
        const bool branch_taken_0x28d860 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D860u;
        // 0x28d864: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d860) {
            ctx->pc = 0x28D874u;
            goto label_28d874;
        }
    }
    ctx->pc = 0x28D868u;
    // 0x28d868: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D868u;
    SET_GPR_U32(ctx, 31, 0x28D870u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D868u, 0x28D870u)) {
        return;
    }
    ctx->pc = 0x28D870u;
label_28d870:
    // 0x28d870: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d874:
    // 0x28d874: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x28d874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x28d878: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D878u;
    {
        const bool branch_taken_0x28d878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d878) {
            ctx->pc = 0x28D87Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D878u;
            // 0x28d87c: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D890u;
            goto label_28d890;
        }
    }
    ctx->pc = 0x28D880u;
    // 0x28d880: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D880u;
    SET_GPR_U32(ctx, 31, 0x28D888u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D880u, 0x28D888u)) {
        return;
    }
    ctx->pc = 0x28D888u;
label_28d888:
    // 0x28d888: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d888u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d88c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d88cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d890:
    // 0x28d890: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x28d890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x28d894: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D894u;
    {
        const bool branch_taken_0x28d894 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D894u;
        // 0x28d898: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d894) {
            ctx->pc = 0x28D8A8u;
            goto label_28d8a8;
        }
    }
    ctx->pc = 0x28D89Cu;
    // 0x28d89c: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D89Cu;
    SET_GPR_U32(ctx, 31, 0x28D8A4u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D89Cu, 0x28D8A4u)) {
        return;
    }
    ctx->pc = 0x28D8A4u;
label_28d8a4:
    // 0x28d8a4: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d8a8:
    // 0x28d8a8: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x28d8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x28d8ac: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D8ACu;
    {
        const bool branch_taken_0x28d8ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8ac) {
            ctx->pc = 0x28D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8ACu;
            // 0x28d8b0: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8C4u;
            goto label_28d8c4;
        }
    }
    ctx->pc = 0x28D8B4u;
    // 0x28d8b4: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D8B4u;
    SET_GPR_U32(ctx, 31, 0x28D8BCu);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D8B4u, 0x28D8BCu)) {
        return;
    }
    ctx->pc = 0x28D8BCu;
label_28d8bc:
    // 0x28d8bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d8c0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d8c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d8c4:
    // 0x28d8c4: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x28d8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x28d8c8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28D8C8u;
    {
        const bool branch_taken_0x28d8c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D8C8u;
        // 0x28d8cc: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d8c8) {
            ctx->pc = 0x28D8DCu;
            goto label_28d8dc;
        }
    }
    ctx->pc = 0x28D8D0u;
    // 0x28d8d0: 0xc0a232a  jal         func_288CA8
    ctx->pc = 0x28D8D0u;
    SET_GPR_U32(ctx, 31, 0x28D8D8u);
    ctx->pc = 0x288CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288CA8u, 0x28D8D0u, 0x28D8D8u)) {
        return;
    }
    ctx->pc = 0x28D8D8u;
label_28d8d8:
    // 0x28d8d8: 0x24500008  addiu       $s0, $v0, 0x8
    ctx->pc = 0x28d8d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_28d8dc:
    // 0x28d8dc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x28d8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x28d8e0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28D8E0u;
    {
        const bool branch_taken_0x28d8e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d8e0) {
            ctx->pc = 0x28D8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28D8E0u;
            // 0x28d8e4: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28D8F8u;
            goto label_28d8f8;
        }
    }
    ctx->pc = 0x28D8E8u;
    // 0x28d8e8: 0xc0a3cce  jal         func_28F338
    ctx->pc = 0x28D8E8u;
    SET_GPR_U32(ctx, 31, 0x28D8F0u);
    ctx->pc = 0x28F338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28F338u, 0x28D8E8u, 0x28D8F0u)) {
        return;
    }
    ctx->pc = 0x28D8F0u;
label_28d8f0:
    // 0x28d8f0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28d8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28d8f4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x28d8f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28d8f8:
    // 0x28d8f8: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x28d8f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x28d8fc: 0x2694fffc  addiu       $s4, $s4, -0x4
    ctx->pc = 0x28d8fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
    // 0x28d900: 0x1680ffc9  bnez        $s4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x28D900u;
    {
        const bool branch_taken_0x28d900 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D900u;
        // 0x28d904: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d900) {
            ctx->pc = 0x28D828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28d828;
        }
    }
    ctx->pc = 0x28D908u;
label_28d908:
    // 0x28d908: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28d908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d90c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28d90cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28d910: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28d910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28d914: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28d914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28d918: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28d918u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d91c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28d91cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28d920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d924: 0x3e00008  jr          $ra
    ctx->pc = 0x28D924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28D924u;
        // 0x28d928: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28D924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28D92Cu;
    // 0x28d92c: 0x0  nop
    ctx->pc = 0x28d92cu;
    // NOP
    ctx->pc = 0x28d930u;
}
