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

// Function: sub_002E07A8
// Address: 0x2e07a8 - 0x2e08f0
void sub_002E07A8_0x2e07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E07A8_0x2e07a8");
#endif

    switch (ctx->pc) {
        case 0x2e07d0u: goto label_2e07d0;
        case 0x2e0890u: goto label_2e0890;
        case 0x2e08bcu: goto label_2e08bc;
        default: break;
    }

    ctx->pc = 0x2e07a8u;

    // 0x2e07a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e07a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e07ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2e07acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e07b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e07b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2e07b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e07b8: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x2e07b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2e07bc: 0x8d070010  lw          $a3, 0x10($t0)
    ctx->pc = 0x2e07bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e07c0: 0x10e90048  beq         $a3, $t1, . + 4 + (0x48 << 2)
    ctx->pc = 0x2E07C0u;
    {
        const bool branch_taken_0x2e07c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        ctx->pc = 0x2E07C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E07C0u;
        // 0x2e07c4: 0x8d0a0008  lw          $t2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e07c0) {
            ctx->pc = 0x2E08E4u;
            goto label_2e08e4;
        }
    }
    ctx->pc = 0x2E07C8u;
    // 0x2e07c8: 0x25420008  addiu       $v0, $t2, 0x8
    ctx->pc = 0x2e07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
    // 0x2e07cc: 0x0  nop
    ctx->pc = 0x2e07ccu;
    // NOP
label_2e07d0:
    // 0x2e07d0: 0xe22821  addu        $a1, $a3, $v0
    ctx->pc = 0x2e07d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2e07d4: 0xc5182b  sltu        $v1, $a2, $a1
    ctx->pc = 0x2e07d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x2e07d8: 0x54600040  bnel        $v1, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x2E07D8u;
    {
        const bool branch_taken_0x2e07d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e07d8) {
            ctx->pc = 0x2E07DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E07D8u;
            // 0x2e07dc: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08DCu;
            goto label_2e08dc;
        }
    }
    ctx->pc = 0x2E07E0u;
    // 0x2e07e0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2e07e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e07e4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2e07e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2e07e8: 0x441818  mult        $v1, $v0, $a0
    ctx->pc = 0x2e07e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2e07ec: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x2e07ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2e07f0: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2e07f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2e07f4: 0x54400039  bnel        $v0, $zero, . + 4 + (0x39 << 2)
    ctx->pc = 0x2E07F4u;
    {
        const bool branch_taken_0x2e07f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e07f4) {
            ctx->pc = 0x2E07F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E07F4u;
            // 0x2e07f8: 0x8ce70000  lw          $a3, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08DCu;
            goto label_2e08dc;
        }
    }
    ctx->pc = 0x2E07FCu;
    // 0x2e07fc: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x2e07fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2e0800: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2e0800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e0804: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x2e0804u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2e0808: 0x24eb0008  addiu       $t3, $a3, 0x8
    ctx->pc = 0x2e0808u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2e080c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E080Cu;
    {
        const bool branch_taken_0x2e080c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e080c) {
            ctx->pc = 0x2E0810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E080Cu;
            // 0x2e0810: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0814u;
            goto label_2e0814;
        }
    }
    ctx->pc = 0x2E0814u;
label_2e0814:
    // 0x2e0814: 0x25090010  addiu       $t1, $t0, 0x10
    ctx->pc = 0x2e0814u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2e0818: 0x1012  mflo        $v0
    ctx->pc = 0x2e0818u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e081c: 0x228c2  srl         $a1, $v0, 3
    ctx->pc = 0x2e081cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x2e0820: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x2e0820u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2e0824: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2e0824u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2e0828: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x2e0828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x2e082c: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x2e082cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x2e0830: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x2e0830u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2e0834: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e0834u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e0838: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2e0838u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x2e083c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2e083cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2e0840: 0xa0a40000  sb          $a0, 0x0($a1)
    ctx->pc = 0x2e0840u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2e0844: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2e0844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e0848: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e084c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2e084cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2e0850: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2e0850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0854: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e0854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e0858: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2e0858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2e085c: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x2e085cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e0860: 0x50690006  beql        $v1, $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0860u;
    {
        const bool branch_taken_0x2e0860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 9));
        if (branch_taken_0x2e0860) {
            ctx->pc = 0x2E0864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0860u;
            // 0x2e0864: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E087Cu;
            goto label_2e087c;
        }
    }
    ctx->pc = 0x2E0868u;
    // 0x2e0868: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x2e0868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2e086c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e086cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e0870: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E0870u;
    {
        const bool branch_taken_0x2e0870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0870u;
        // 0x2e0874: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0870) {
            ctx->pc = 0x2E0884u;
            goto label_2e0884;
        }
    }
    ctx->pc = 0x2E0878u;
    // 0x2e0878: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2e0878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2e087c:
    // 0x2e087c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E087Cu;
    {
        const bool branch_taken_0x2e087c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E087Cu;
        // 0x2e0880: 0xace90004  sw          $t1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e087c) {
            ctx->pc = 0x2E08CCu;
            goto label_2e08cc;
        }
    }
    ctx->pc = 0x2E0884u;
label_2e0884:
    // 0x2e0884: 0x11400009  beqz        $t2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0884u;
    {
        const bool branch_taken_0x2e0884 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0884u;
        // 0x2e0888: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0884) {
            ctx->pc = 0x2E08ACu;
            goto label_2e08ac;
        }
    }
    ctx->pc = 0x2E088Cu;
    // 0x2e088c: 0x0  nop
    ctx->pc = 0x2e088cu;
    // NOP
label_2e0890:
    // 0x2e0890: 0x1651021  addu        $v0, $t3, $a1
    ctx->pc = 0x2e0890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x2e0894: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2e0894u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0898: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2e0898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2e089c: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x2e089cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2e08a0: 0x0  nop
    ctx->pc = 0x2e08a0u;
    // NOP
    // 0x2e08a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E08A4u;
    {
        const bool branch_taken_0x2e08a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E08A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08A4u;
        // 0x2e08a8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08a4) {
            ctx->pc = 0x2E0890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0890;
        }
    }
    ctx->pc = 0x2E08ACu;
label_2e08ac:
    // 0x2e08ac: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E08ACu;
    {
        const bool branch_taken_0x2e08ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e08ac) {
            ctx->pc = 0x2E08B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E08ACu;
            // 0x2e08b0: 0x8d030010  lw          $v1, 0x10($t0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E08C4u;
            goto label_2e08c4;
        }
    }
    ctx->pc = 0x2E08B4u;
    // 0x2e08b4: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E08B4u;
    SET_GPR_U32(ctx, 31, 0x2E08BCu);
    ctx->pc = 0x2E08B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E08B4u;
    // 0x2e08b8: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E08B4u, 0x2E08BCu)) {
        return;
    }
    ctx->pc = 0x2E08BCu;
label_2e08bc:
    // 0x2e08bc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E08BCu;
    {
        const bool branch_taken_0x2e08bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08BCu;
        // 0x2e08c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08bc) {
            ctx->pc = 0x2E08E8u;
            goto label_2e08e8;
        }
    }
    ctx->pc = 0x2E08C4u;
label_2e08c4:
    // 0x2e08c4: 0xace90004  sw          $t1, 0x4($a3)
    ctx->pc = 0x2e08c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 9));
    // 0x2e08c8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2e08c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2e08cc:
    // 0x2e08cc: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x2e08ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e08d0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x2e08d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x2e08d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E08D4u;
    {
        const bool branch_taken_0x2e08d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08D4u;
        // 0x2e08d8: 0xad070010  sw          $a3, 0x10($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08d4) {
            ctx->pc = 0x2E08E4u;
            goto label_2e08e4;
        }
    }
    ctx->pc = 0x2E08DCu;
label_2e08dc:
    // 0x2e08dc: 0x14e9ffbc  bne         $a3, $t1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2E08DCu;
    {
        const bool branch_taken_0x2e08dc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x2E08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08DCu;
        // 0x2e08e0: 0x25420008  addiu       $v0, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e08dc) {
            ctx->pc = 0x2E07D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e07d0;
        }
    }
    ctx->pc = 0x2E08E4u;
label_2e08e4:
    // 0x2e08e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e08e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e08e8:
    // 0x2e08e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E08E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E08E8u;
        // 0x2e08ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E08E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E08F0u;
}
