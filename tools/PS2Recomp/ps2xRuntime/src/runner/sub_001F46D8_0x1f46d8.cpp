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

// Function: sub_001F46D8
// Address: 0x1f46d8 - 0x1f48d0
void sub_001F46D8_0x1f46d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F46D8_0x1f46d8");
#endif

    switch (ctx->pc) {
        case 0x1f4760u: goto label_1f4760;
        case 0x1f476cu: goto label_1f476c;
        case 0x1f4798u: goto label_1f4798;
        case 0x1f47e8u: goto label_1f47e8;
        case 0x1f47f0u: goto label_1f47f0;
        case 0x1f4838u: goto label_1f4838;
        case 0x1f4870u: goto label_1f4870;
        case 0x1f4880u: goto label_1f4880;
        default: break;
    }

    ctx->pc = 0x1f46d8u;

label_1f46d8:
    // 0x1f46d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1f46d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1f46dc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1f46dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1f46e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f46e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1f46e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f46e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46e8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1f46e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1f46ec: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1f46ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1f46f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1f46f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f46f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1f46f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1f46f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1f46f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1f46fc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1f46fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1f4700: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1f4700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1f4704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4708: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1f4708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1f470c: 0x8ed20000  lw          $s2, 0x0($s6)
    ctx->pc = 0x1f470cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f4710: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x1f4710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f4714: 0x26550008  addiu       $s5, $s2, 0x8
    ctx->pc = 0x1f4714u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x1f4718: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1f4718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1f471c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1f471cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1f4720: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1f4720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f4724: 0x8e530000  lw          $s3, 0x0($s2)
    ctx->pc = 0x1f4724u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4728: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1f4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f472c: 0x31f02  srl         $v1, $v1, 28
    ctx->pc = 0x1f472cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x1f4730: 0x96570004  lhu         $s7, 0x4($s2)
    ctx->pc = 0x1f4730u;
    SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f4734: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1f4734u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f4738: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x1f4738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
    // 0x1f473c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f4740: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1f4740u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4744: 0x222180a  movz        $v1, $s1, $v0
    ctx->pc = 0x1f4744u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17));
    // 0x1f4748: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f4748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f474c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F474Cu;
    {
        const bool branch_taken_0x1f474c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F474Cu;
        // 0x1f4750: 0x30deffff  andi        $fp, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f474c) {
            ctx->pc = 0x1F4780u;
            goto label_1f4780;
        }
    }
    ctx->pc = 0x1F4754u;
    // 0x1f4754: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4754u;
    {
        const bool branch_taken_0x1f4754 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4754u;
        // 0x1f4758: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4754) {
            ctx->pc = 0x1F4784u;
            goto label_1f4784;
        }
    }
    ctx->pc = 0x1F475Cu;
    // 0x1f475c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1f475cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f4760:
    // 0x1f4760: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f4760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4764: 0xc07d3b8  jal         func_1F4EE0
    ctx->pc = 0x1F4764u;
    SET_GPR_U32(ctx, 31, 0x1F476Cu);
    ctx->pc = 0x1F4768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4764u;
    // 0x1f4768: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4EE0u, 0x1F4764u, 0x1F476Cu)) {
        return;
    }
    ctx->pc = 0x1F476Cu;
label_1f476c:
    // 0x1f476c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f476cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f4770: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F4770u;
    {
        const bool branch_taken_0x1f4770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4770u;
        // 0x1f4774: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4770) {
            ctx->pc = 0x1F4780u;
            goto label_1f4780;
        }
    }
    ctx->pc = 0x1F4778u;
    // 0x1f4778: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F4778u;
    {
        const bool branch_taken_0x1f4778 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f4778) {
            ctx->pc = 0x1F477Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4778u;
            // 0x1f477c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4760;
        }
    }
    ctx->pc = 0x1F4780u;
label_1f4780:
    // 0x1f4780: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f4780u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f4784:
    // 0x1f4784: 0x16800029  bnez        $s4, . + 4 + (0x29 << 2)
    ctx->pc = 0x1F4784u;
    {
        const bool branch_taken_0x1f4784 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4784u;
        // 0x1f4788: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4784) {
            ctx->pc = 0x1F482Cu;
            goto label_1f482c;
        }
    }
    ctx->pc = 0x1F478Cu;
    // 0x1f478c: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x1f478cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1f4790: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x1F4790u;
    SET_GPR_U32(ctx, 31, 0x1F4798u);
    ctx->pc = 0x1F4794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4790u;
    // 0x1f4794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1F4790u, 0x1F4798u)) {
        return;
    }
    ctx->pc = 0x1F4798u;
label_1f4798:
    // 0x1f4798: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x1f4798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x1f479c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1f479cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1f47a0: 0x24842820  addiu       $a0, $a0, 0x2820
    ctx->pc = 0x1f47a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10272));
    // 0x1f47a4: 0x24632808  addiu       $v1, $v1, 0x2808
    ctx->pc = 0x1f47a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10248));
    // 0x1f47a8: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1f47a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x1f47ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f47acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47b0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1f47b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x1f47b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f47b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f47b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f47bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1f47bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47c0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1f47c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47c4: 0xac530010  sw          $s3, 0x10($v0)
    ctx->pc = 0x1f47c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 19));
    // 0x1f47c8: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1f47c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x1f47cc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f47ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f47d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1f47d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1f47d4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1f47d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1f47d8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1f47d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1f47dc: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1f47dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x1f47e0: 0xc07d492  jal         func_1F5248
    ctx->pc = 0x1F47E0u;
    SET_GPR_U32(ctx, 31, 0x1F47E8u);
    ctx->pc = 0x1F47E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47E0u;
    // 0x1f47e4: 0xac510020  sw          $s1, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5248u, 0x1F47E0u, 0x1F47E8u)) {
        return;
    }
    ctx->pc = 0x1F47E8u;
label_1f47e8:
    // 0x1f47e8: 0xc080858  jal         func_202160
    ctx->pc = 0x1F47E8u;
    SET_GPR_U32(ctx, 31, 0x1F47F0u);
    ctx->pc = 0x1F47ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F47E8u;
    // 0x1f47ec: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1F47E8u, 0x1F47F0u)) {
        return;
    }
    ctx->pc = 0x1F47F0u;
label_1f47f0:
    // 0x1f47f0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f47f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f47f4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1f47f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1f47f8: 0xac740000  sw          $s4, 0x0($v1)
    ctx->pc = 0x1f47f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 20));
    // 0x1f47fc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1f47fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1f4800: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4800u;
    {
        const bool branch_taken_0x1f4800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4800u;
        // 0x1f4804: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4800) {
            ctx->pc = 0x1F480Cu;
            goto label_1f480c;
        }
    }
    ctx->pc = 0x1F4808u;
    // 0x1f4808: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1f4808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1f480c:
    // 0x1f480c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f4810: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F4810u;
    {
        const bool branch_taken_0x1f4810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4810) {
            ctx->pc = 0x1F4814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4810u;
            // 0x1f4814: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4818u;
            goto label_1f4818;
        }
    }
    ctx->pc = 0x1F4818u;
label_1f4818:
    // 0x1f4818: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f4818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f481c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f481cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f4820: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f4820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f4824: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F4824u;
    {
        const bool branch_taken_0x1f4824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4824u;
        // 0x1f4828: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4824) {
            ctx->pc = 0x1F4838u;
            goto label_1f4838;
        }
    }
    ctx->pc = 0x1F482Cu;
label_1f482c:
    // 0x1f482c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1f482cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4830: 0xc07d492  jal         func_1F5248
    ctx->pc = 0x1F4830u;
    SET_GPR_U32(ctx, 31, 0x1F4838u);
    ctx->pc = 0x1F4834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4830u;
    // 0x1f4834: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5248u, 0x1F4830u, 0x1F4838u)) {
        return;
    }
    ctx->pc = 0x1F4838u;
label_1f4838:
    // 0x1f4838: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x1f4838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
    // 0x1f483c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F483Cu;
    {
        const bool branch_taken_0x1f483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f483c) {
            ctx->pc = 0x1F4840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F483Cu;
            // 0x1f4840: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F485Cu;
            goto label_1f485c;
        }
    }
    ctx->pc = 0x1F4844u;
    // 0x1f4844: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1f4844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1f4848: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f4848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f484c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1f484cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1f4850: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f4850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4854: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x1f4854u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
    // 0x1f4858: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x1f4858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_1f485c:
    // 0x1f485c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1f485cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1f4860: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F4860u;
    {
        const bool branch_taken_0x1f4860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4860u;
        // 0x1f4864: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4860) {
            ctx->pc = 0x1F4894u;
            goto label_1f4894;
        }
    }
    ctx->pc = 0x1F4868u;
    // 0x1f4868: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f4868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f486c: 0x0  nop
    ctx->pc = 0x1f486cu;
    // NOP
label_1f4870:
    // 0x1f4870: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f4870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4874: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1f4874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4878: 0xc07d1b6  jal         func_1F46D8
    ctx->pc = 0x1F4878u;
    SET_GPR_U32(ctx, 31, 0x1F4880u);
    ctx->pc = 0x1F487Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4878u;
    // 0x1f487c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F46D8u;
    goto label_1f46d8;
    ctx->pc = 0x1F4880u;
label_1f4880:
    // 0x1f4880: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x1f4880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1f4884: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x1f4884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x1f4888: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1f4888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f488c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F488Cu;
    {
        const bool branch_taken_0x1f488c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F488Cu;
        // 0x1f4890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f488c) {
            ctx->pc = 0x1F4870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f4870;
        }
    }
    ctx->pc = 0x1F4894u;
label_1f4894:
    // 0x1f4894: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1f4894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f4898: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1f4898u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f489c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1f489cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f48a0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1f48a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f48a4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1f48a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f48a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f48a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f48ac: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1f48acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f48b0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1f48b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f48b4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1f48b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f48b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f48b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f48bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F48BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F48BCu;
        // 0x1f48c0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F48BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F48C4u;
    // 0x1f48c4: 0x0  nop
    ctx->pc = 0x1f48c4u;
    // NOP
    // 0x1f48c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f48c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f48cc: 0x0  nop
    ctx->pc = 0x1f48ccu;
    // NOP
    ctx->pc = 0x1f48d0u;
}
