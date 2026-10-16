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

// Function: sub_00282790
// Address: 0x282790 - 0x2828d8
void sub_00282790_0x282790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282790_0x282790");
#endif

    switch (ctx->pc) {
        case 0x2827d4u: goto label_2827d4;
        case 0x282804u: goto label_282804;
        case 0x28281cu: goto label_28281c;
        case 0x282834u: goto label_282834;
        case 0x282848u: goto label_282848;
        case 0x282864u: goto label_282864;
        case 0x282874u: goto label_282874;
        case 0x282890u: goto label_282890;
        case 0x2828a4u: goto label_2828a4;
        default: break;
    }

    ctx->pc = 0x282790u;

    // 0x282790: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x282790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x282794: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x282794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x282798: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x282798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x28279c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x28279cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2827a0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2827a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2827a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2827a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2827a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2827ac: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2827acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2827b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2827b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2827b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2827b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2827b8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2827b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x2827bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2827bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2827c0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2827C0u;
    {
        const bool branch_taken_0x2827c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2827C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827C0u;
        // 0x2827c4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827c0) {
            ctx->pc = 0x282898u;
            goto label_282898;
        }
    }
    ctx->pc = 0x2827C8u;
    // 0x2827c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2827c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827cc: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x2827CCu;
    SET_GPR_U32(ctx, 31, 0x2827D4u);
    ctx->pc = 0x2827D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2827CCu;
    // 0x2827d0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x2827CCu, 0x2827D4u)) {
        return;
    }
    ctx->pc = 0x2827D4u;
label_2827d4:
    // 0x2827d4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2827D4u;
    {
        const bool branch_taken_0x2827d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2827D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2827D4u;
        // 0x2827d8: 0x93b20001  lbu         $s2, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2827d4) {
            ctx->pc = 0x282880u;
            goto label_282880;
        }
    }
    ctx->pc = 0x2827DCu;
    // 0x2827dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2827dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827e0: 0x93b50002  lbu         $s5, 0x2($sp)
    ctx->pc = 0x2827e0u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2827e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2827e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827e8: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x2827e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x2827ec: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2827ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827f0: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x2827f0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2827f4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2827f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2827f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2827fc: 0xc0a081a  jal         func_282068
    ctx->pc = 0x2827FCu;
    SET_GPR_U32(ctx, 31, 0x282804u);
    ctx->pc = 0x282800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2827FCu;
    // 0x282800: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282068u, 0x2827FCu, 0x282804u)) {
        return;
    }
    ctx->pc = 0x282804u;
label_282804:
    // 0x282804: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x282804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282808: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x282808u;
    {
        const bool branch_taken_0x282808 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282808u;
        // 0x28280c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282808) {
            ctx->pc = 0x282880u;
            goto label_282880;
        }
    }
    ctx->pc = 0x282810u;
    // 0x282810: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x282810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x282814: 0xc093546  jal         func_24D518
    ctx->pc = 0x282814u;
    SET_GPR_U32(ctx, 31, 0x28281Cu);
    ctx->pc = 0x282818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282814u;
    // 0x282818: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x282814u, 0x28281Cu)) {
        return;
    }
    ctx->pc = 0x28281Cu;
label_28281c:
    // 0x28281c: 0x14520025  bne         $v0, $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x28281Cu;
    {
        const bool branch_taken_0x28281c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x282820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28281Cu;
        // 0x282820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28281c) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x282824u;
    // 0x282824: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x282824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x282828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28282c: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x28282Cu;
    SET_GPR_U32(ctx, 31, 0x282834u);
    ctx->pc = 0x282830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28282Cu;
    // 0x282830: 0x133080  sll         $a2, $s3, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x28282Cu, 0x282834u)) {
        return;
    }
    ctx->pc = 0x282834u;
label_282834:
    // 0x282834: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x282834u;
    {
        const bool branch_taken_0x282834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282834u;
        // 0x282838: 0x133100  sll         $a2, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282834) {
            ctx->pc = 0x282880u;
            goto label_282880;
        }
    }
    ctx->pc = 0x28283Cu;
    // 0x28283c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x28283cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x282840: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x282840u;
    SET_GPR_U32(ctx, 31, 0x282848u);
    ctx->pc = 0x282844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282840u;
    // 0x282844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x282840u, 0x282848u)) {
        return;
    }
    ctx->pc = 0x282848u;
label_282848:
    // 0x282848: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x282848u;
    {
        const bool branch_taken_0x282848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28284Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282848u;
        // 0x28284c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282848) {
            ctx->pc = 0x282880u;
            goto label_282880;
        }
    }
    ctx->pc = 0x282850u;
    // 0x282850: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x282850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282854: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x282854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x282858: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x282858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28285c: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x28285Cu;
    SET_GPR_U32(ctx, 31, 0x282864u);
    ctx->pc = 0x282860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28285Cu;
    // 0x282860: 0x63180  sll         $a2, $a2, 6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x28285Cu, 0x282864u)) {
        return;
    }
    ctx->pc = 0x282864u;
label_282864:
    // 0x282864: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x282864u;
    {
        const bool branch_taken_0x282864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282864u;
        // 0x282868: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282864) {
            ctx->pc = 0x282880u;
            goto label_282880;
        }
    }
    ctx->pc = 0x28286Cu;
    // 0x28286c: 0xc0a0e9e  jal         func_283A78
    ctx->pc = 0x28286Cu;
    SET_GPR_U32(ctx, 31, 0x282874u);
    ctx->pc = 0x282870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28286Cu;
    // 0x282870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283A78u, 0x28286Cu, 0x282874u)) {
        return;
    }
    ctx->pc = 0x282874u;
label_282874:
    // 0x282874: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282874u;
    {
        const bool branch_taken_0x282874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x282878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282874u;
        // 0x282878: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282874) {
            ctx->pc = 0x282888u;
            goto label_282888;
        }
    }
    ctx->pc = 0x28287Cu;
    // 0x28287c: 0x0  nop
    ctx->pc = 0x28287cu;
    // NOP
label_282880:
    // 0x282880: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x282880u;
    {
        const bool branch_taken_0x282880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282880u;
        // 0x282884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282880) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x282888u;
label_282888:
    // 0x282888: 0xc0a0b7a  jal         func_282DE8
    ctx->pc = 0x282888u;
    SET_GPR_U32(ctx, 31, 0x282890u);
    ctx->pc = 0x28288Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x282888u;
    // 0x28288c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282DE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282DE8u, 0x282888u, 0x282890u)) {
        return;
    }
    ctx->pc = 0x282890u;
label_282890:
    // 0x282890: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x282890u;
    {
        const bool branch_taken_0x282890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282890u;
        // 0x282894: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282890) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x282898u;
label_282898:
    // 0x282898: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x282898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28289c: 0xc0a0dda  jal         func_283768
    ctx->pc = 0x28289Cu;
    SET_GPR_U32(ctx, 31, 0x2828A4u);
    ctx->pc = 0x2828A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28289Cu;
    // 0x2828a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x283768u, 0x28289Cu, 0x2828A4u)) {
        return;
    }
    ctx->pc = 0x2828A4u;
label_2828a4:
    // 0x2828a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2828a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2828a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2828A8u;
    {
        const bool branch_taken_0x2828a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2828ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828A8u;
        // 0x2828ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2828a8) {
            ctx->pc = 0x2828B4u;
            goto label_2828b4;
        }
    }
    ctx->pc = 0x2828B0u;
    // 0x2828b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2828b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2828b4:
    // 0x2828b4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2828b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2828b8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2828b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2828bc: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2828bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2828c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2828c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2828c4: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2828c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2828c8: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2828c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2828cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2828ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2828d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2828D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2828D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2828D0u;
        // 0x2828d4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2828D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2828D8u;
}
