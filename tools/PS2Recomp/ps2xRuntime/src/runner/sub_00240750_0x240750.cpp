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

// Function: sub_00240750
// Address: 0x240750 - 0x240838
void sub_00240750_0x240750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240750_0x240750");
#endif

    ctx->pc = 0x240750u;

    // 0x240750: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x240750u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240754: 0x30c60f00  andi        $a2, $a2, 0xF00
    ctx->pc = 0x240754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x240758: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x240758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24075c: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24075Cu;
    {
        const bool branch_taken_0x24075c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x240760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24075Cu;
        // 0x240760: 0x8ca70000  lw          $a3, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24075c) {
            ctx->pc = 0x240798u;
            goto label_240798;
        }
    }
    ctx->pc = 0x240764u;
    // 0x240764: 0x28c20101  slti        $v0, $a2, 0x101
    ctx->pc = 0x240764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)257) ? 1 : 0);
    // 0x240768: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x240768u;
    {
        const bool branch_taken_0x240768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240768u;
        // 0x24076c: 0x24020500  addiu       $v0, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240768) {
            ctx->pc = 0x240780u;
            goto label_240780;
        }
    }
    ctx->pc = 0x240770u;
    // 0x240770: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x240770u;
    {
        const bool branch_taken_0x240770 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x240774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240770u;
        // 0x240774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240770) {
            ctx->pc = 0x240798u;
            goto label_240798;
        }
    }
    ctx->pc = 0x240778u;
    // 0x240778: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x240778u;
    {
        const bool branch_taken_0x240778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240778) {
            ctx->pc = 0x240830u;
            goto label_240830;
        }
    }
    ctx->pc = 0x240780u;
label_240780:
    // 0x240780: 0x10c20014  beq         $a2, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x240780u;
    {
        const bool branch_taken_0x240780 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x240784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240780u;
        // 0x240784: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240780) {
            ctx->pc = 0x2407D4u;
            goto label_2407d4;
        }
    }
    ctx->pc = 0x240788u;
    // 0x240788: 0x10c20021  beq         $a2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x240788u;
    {
        const bool branch_taken_0x240788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x24078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240788u;
        // 0x24078c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240788) {
            ctx->pc = 0x240810u;
            goto label_240810;
        }
    }
    ctx->pc = 0x240790u;
    // 0x240790: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x240790u;
    {
        const bool branch_taken_0x240790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x240790) {
            ctx->pc = 0x240830u;
            goto label_240830;
        }
    }
    ctx->pc = 0x240798u;
label_240798:
    // 0x240798: 0x711c2  srl         $v0, $a3, 7
    ctx->pc = 0x240798u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 7));
    // 0x24079c: 0x71882  srl         $v1, $a3, 2
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x2407a0: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x2407a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x2407a4: 0x306300f8  andi        $v1, $v1, 0xF8
    ctx->pc = 0x2407a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)248);
    // 0x2407a8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x2407a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2407ac: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x2407acu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2407b0: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x2407b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2407b4: 0x30e28000  andi        $v0, $a3, 0x8000
    ctx->pc = 0x2407b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32768);
    // 0x2407b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2407B8u;
    {
        const bool branch_taken_0x2407b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B8u;
        // 0x2407bc: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407b8) {
            ctx->pc = 0x2407CCu;
            goto label_2407cc;
        }
    }
    ctx->pc = 0x2407C0u;
    // 0x2407c0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2407c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2407c4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2407C4u;
    {
        const bool branch_taken_0x2407c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407C4u;
        // 0x2407c8: 0xa1020003  sb          $v0, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407c4) {
            ctx->pc = 0x24082Cu;
            goto label_24082c;
        }
    }
    ctx->pc = 0x2407CCu;
label_2407cc:
    // 0x2407cc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2407CCu;
    {
        const bool branch_taken_0x2407cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407CCu;
        // 0x2407d0: 0xa1000003  sb          $zero, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407cc) {
            ctx->pc = 0x24082Cu;
            goto label_24082c;
        }
    }
    ctx->pc = 0x2407D4u;
label_2407d4:
    // 0x2407d4: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x2407d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x2407d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2407d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2407dc: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x2407dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x2407e0: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x2407e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x2407e4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x2407e4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2407e8: 0x72402  srl         $a0, $a3, 16
    ctx->pc = 0x2407e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x2407ec: 0x72a02  srl         $a1, $a3, 8
    ctx->pc = 0x2407ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x2407f0: 0xa1040002  sb          $a0, 0x2($t0)
    ctx->pc = 0x2407f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x2407f4: 0xa1050001  sb          $a1, 0x1($t0)
    ctx->pc = 0x2407f4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x2407f8: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x2407f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x2407fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2407FCu;
    {
        const bool branch_taken_0x2407fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407fc) {
            ctx->pc = 0x240800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2407FCu;
            // 0x240800: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x240804u;
            goto label_240804;
        }
    }
    ctx->pc = 0x240804u;
label_240804:
    // 0x240804: 0x1812  mflo        $v1
    ctx->pc = 0x240804u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x240808: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x240808u;
    {
        const bool branch_taken_0x240808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240808u;
        // 0x24080c: 0xa1030003  sb          $v1, 0x3($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240808) {
            ctx->pc = 0x24082Cu;
            goto label_24082c;
        }
    }
    ctx->pc = 0x240810u;
label_240810:
    // 0x240810: 0x71402  srl         $v0, $a3, 16
    ctx->pc = 0x240810u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 16));
    // 0x240814: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x240814u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x240818: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x240818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x24081c: 0xa1030001  sb          $v1, 0x1($t0)
    ctx->pc = 0x24081cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x240820: 0xa1040003  sb          $a0, 0x3($t0)
    ctx->pc = 0x240820u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x240824: 0xa1020002  sb          $v0, 0x2($t0)
    ctx->pc = 0x240824u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x240828: 0xa1070000  sb          $a3, 0x0($t0)
    ctx->pc = 0x240828u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 7));
label_24082c:
    // 0x24082c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24082cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240830:
    // 0x240830: 0x3e00008  jr          $ra
    ctx->pc = 0x240830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240838u;
}
