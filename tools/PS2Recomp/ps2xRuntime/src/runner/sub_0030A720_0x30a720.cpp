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

// Function: sub_0030A720
// Address: 0x30a720 - 0x30a878
void sub_0030A720_0x30a720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A720_0x30a720");
#endif

    switch (ctx->pc) {
        case 0x30a754u: goto label_30a754;
        case 0x30a768u: goto label_30a768;
        case 0x30a774u: goto label_30a774;
        case 0x30a798u: goto label_30a798;
        case 0x30a7b4u: goto label_30a7b4;
        case 0x30a7fcu: goto label_30a7fc;
        case 0x30a818u: goto label_30a818;
        default: break;
    }

    ctx->pc = 0x30a720u;

    // 0x30a720: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30a720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30a724: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30a724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30a728: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30a728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30a72c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30a72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a730: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30a730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30a734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x30a734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a738: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x30a738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x30a73c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a73cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a740: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A740u;
    {
        const bool branch_taken_0x30a740 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A740u;
        // 0x30a744: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a740) {
            ctx->pc = 0x30A760u;
            goto label_30a760;
        }
    }
    ctx->pc = 0x30A748u;
    // 0x30a748: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30a748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a74c: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A74Cu;
    SET_GPR_U32(ctx, 31, 0x30A754u);
    ctx->pc = 0x30A750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A74Cu;
    // 0x30a750: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A74Cu, 0x30A754u)) {
        return;
    }
    ctx->pc = 0x30A754u;
label_30a754:
    // 0x30a754: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x30A754u;
    {
        const bool branch_taken_0x30a754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A754u;
        // 0x30a758: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a754) {
            ctx->pc = 0x30A860u;
            goto label_30a860;
        }
    }
    ctx->pc = 0x30A75Cu;
    // 0x30a75c: 0x0  nop
    ctx->pc = 0x30a75cu;
    // NOP
label_30a760:
    // 0x30a760: 0xc0c43f8  jal         func_310FE0
    ctx->pc = 0x30A760u;
    SET_GPR_U32(ctx, 31, 0x30A768u);
    ctx->pc = 0x30A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A760u;
    // 0x30a764: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310FE0u, 0x30A760u, 0x30A768u)) {
        return;
    }
    ctx->pc = 0x30A768u;
label_30a768:
    // 0x30a768: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x30a768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a76c: 0xc0c43fa  jal         func_310FE8
    ctx->pc = 0x30A76Cu;
    SET_GPR_U32(ctx, 31, 0x30A774u);
    ctx->pc = 0x30A770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A76Cu;
    // 0x30a770: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x310FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x310FE8u, 0x30A76Cu, 0x30A774u)) {
        return;
    }
    ctx->pc = 0x30A774u;
label_30a774:
    // 0x30a774: 0x27b10004  addiu       $s1, $sp, 0x4
    ctx->pc = 0x30a774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x30a778: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x30a778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x30a77c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30a780: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a784: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x30A784u;
    {
        const bool branch_taken_0x30a784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A784u;
        // 0x30a788: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a784) {
            ctx->pc = 0x30A7C0u;
            goto label_30a7c0;
        }
    }
    ctx->pc = 0x30A78Cu;
    // 0x30a78c: 0x37a50008  ori         $a1, $sp, 0x8
    ctx->pc = 0x30a78cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x30a790: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A790u;
    SET_GPR_U32(ctx, 31, 0x30A798u);
    ctx->pc = 0x30A794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A790u;
    // 0x30a794: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A790u, 0x30A798u)) {
        return;
    }
    ctx->pc = 0x30A798u;
label_30a798:
    // 0x30a798: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30A798u;
    {
        const bool branch_taken_0x30a798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A798u;
        // 0x30a79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a798) {
            ctx->pc = 0x30A7D8u;
            goto label_30a7d8;
        }
    }
    ctx->pc = 0x30A7A0u;
    // 0x30a7a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a7a4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30A7A4u;
    {
        const bool branch_taken_0x30a7a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7A4u;
        // 0x30a7a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7a4) {
            ctx->pc = 0x30A7C0u;
            goto label_30a7c0;
        }
    }
    ctx->pc = 0x30A7ACu;
    // 0x30a7ac: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30A7ACu;
    SET_GPR_U32(ctx, 31, 0x30A7B4u);
    ctx->pc = 0x30A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7ACu;
    // 0x30a7b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30A7ACu, 0x30A7B4u)) {
        return;
    }
    ctx->pc = 0x30A7B4u;
label_30a7b4:
    // 0x30a7b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x30A7B4u;
    {
        const bool branch_taken_0x30a7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7B4u;
        // 0x30a7b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7b4) {
            ctx->pc = 0x30A7D8u;
            goto label_30a7d8;
        }
    }
    ctx->pc = 0x30A7BCu;
    // 0x30a7bc: 0x0  nop
    ctx->pc = 0x30a7bcu;
    // NOP
label_30a7c0:
    // 0x30a7c0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A7C0u;
    {
        const bool branch_taken_0x30a7c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7C0u;
        // 0x30a7c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7c0) {
            ctx->pc = 0x30A7D8u;
            goto label_30a7d8;
        }
    }
    ctx->pc = 0x30A7C8u;
    // 0x30a7c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a7cc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a7d0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a7d8:
    // 0x30a7d8: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x30A7D8u;
    {
        const bool branch_taken_0x30a7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7D8u;
        // 0x30a7dc: 0x27b1000c  addiu       $s1, $sp, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7d8) {
            ctx->pc = 0x30A840u;
            goto label_30a840;
        }
    }
    ctx->pc = 0x30A7E0u;
    // 0x30a7e0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30a7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30a7e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a7e8: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x30A7E8u;
    {
        const bool branch_taken_0x30a7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7E8u;
        // 0x30a7ec: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7e8) {
            ctx->pc = 0x30A820u;
            goto label_30a820;
        }
    }
    ctx->pc = 0x30A7F0u;
    // 0x30a7f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x30a7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30a7f4: 0xc092782  jal         func_249E08
    ctx->pc = 0x30A7F4u;
    SET_GPR_U32(ctx, 31, 0x30A7FCu);
    ctx->pc = 0x30A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A7F4u;
    // 0x30a7f8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x30A7F4u, 0x30A7FCu)) {
        return;
    }
    ctx->pc = 0x30A7FCu;
label_30a7fc:
    // 0x30a7fc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x30A7FCu;
    {
        const bool branch_taken_0x30a7fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A7FCu;
        // 0x30a800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a7fc) {
            ctx->pc = 0x30A838u;
            goto label_30a838;
        }
    }
    ctx->pc = 0x30A804u;
    // 0x30a804: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x30a804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30a808: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A808u;
    {
        const bool branch_taken_0x30a808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A808u;
        // 0x30a80c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a808) {
            ctx->pc = 0x30A820u;
            goto label_30a820;
        }
    }
    ctx->pc = 0x30A810u;
    // 0x30a810: 0xc09275c  jal         func_249D70
    ctx->pc = 0x30A810u;
    SET_GPR_U32(ctx, 31, 0x30A818u);
    ctx->pc = 0x30A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A810u;
    // 0x30a814: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x30A810u, 0x30A818u)) {
        return;
    }
    ctx->pc = 0x30A818u;
label_30a818:
    // 0x30a818: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30A818u;
    {
        const bool branch_taken_0x30a818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A818u;
        // 0x30a81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a818) {
            ctx->pc = 0x30A838u;
            goto label_30a838;
        }
    }
    ctx->pc = 0x30A820u;
label_30a820:
    // 0x30a820: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A820u;
    {
        const bool branch_taken_0x30a820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A820u;
        // 0x30a824: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a820) {
            ctx->pc = 0x30A838u;
            goto label_30a838;
        }
    }
    ctx->pc = 0x30A828u;
    // 0x30a828: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a82c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x30a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30a830: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a838:
    // 0x30a838: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A838u;
    {
        const bool branch_taken_0x30a838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30a838) {
            ctx->pc = 0x30A848u;
            goto label_30a848;
        }
    }
    ctx->pc = 0x30A840u;
label_30a840:
    // 0x30a840: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x30A840u;
    {
        const bool branch_taken_0x30a840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A840u;
        // 0x30a844: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a840) {
            ctx->pc = 0x30A860u;
            goto label_30a860;
        }
    }
    ctx->pc = 0x30A848u;
label_30a848:
    // 0x30a848: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A848u;
    {
        const bool branch_taken_0x30a848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A848u;
        // 0x30a84c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a848) {
            ctx->pc = 0x30A860u;
            goto label_30a860;
        }
    }
    ctx->pc = 0x30A850u;
    // 0x30a850: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x30a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x30a854: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x30a854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x30a858: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x30a858u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x30a85c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a85cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a860:
    // 0x30a860: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30a860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30a864: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30a864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30a868: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30a868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30a86c: 0x3e00008  jr          $ra
    ctx->pc = 0x30A86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A86Cu;
        // 0x30a870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A874u;
    // 0x30a874: 0x0  nop
    ctx->pc = 0x30a874u;
    // NOP
    ctx->pc = 0x30a878u;
}
