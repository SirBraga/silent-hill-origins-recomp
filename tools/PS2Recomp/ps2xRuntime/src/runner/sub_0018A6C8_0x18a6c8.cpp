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

// Function: sub_0018A6C8
// Address: 0x18a6c8 - 0x18a8a8
void sub_0018A6C8_0x18a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018A6C8_0x18a6c8");
#endif

    switch (ctx->pc) {
        case 0x18a710u: goto label_18a710;
        case 0x18a724u: goto label_18a724;
        case 0x18a738u: goto label_18a738;
        case 0x18a75cu: goto label_18a75c;
        case 0x18a770u: goto label_18a770;
        case 0x18a780u: goto label_18a780;
        case 0x18a7a0u: goto label_18a7a0;
        case 0x18a7b4u: goto label_18a7b4;
        case 0x18a7d0u: goto label_18a7d0;
        case 0x18a7e8u: goto label_18a7e8;
        case 0x18a804u: goto label_18a804;
        case 0x18a818u: goto label_18a818;
        case 0x18a830u: goto label_18a830;
        default: break;
    }

    ctx->pc = 0x18a6c8u;

    // 0x18a6c8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x18a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x18a6cc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x18a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x18a6d0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x18a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x18a6d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x18a6d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a6d8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x18a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x18a6dc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x18a6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x18a6e0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x18a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x18a6e4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x18a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x18a6e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x18a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x18a6ec: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x18a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x18a6f0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x18a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x18a6f4: 0x10a0005f  beqz        $a1, . + 4 + (0x5F << 2)
    ctx->pc = 0x18A6F4u;
    {
        const bool branch_taken_0x18a6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A6F4u;
        // 0x18a6f8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a6f4) {
            ctx->pc = 0x18A874u;
            goto label_18a874;
        }
    }
    ctx->pc = 0x18A6FCu;
    // 0x18a6fc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x18a6fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x18a700: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x18A700u;
    {
        const bool branch_taken_0x18a700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A700u;
        // 0x18a704: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a700) {
            ctx->pc = 0x18A878u;
            goto label_18a878;
        }
    }
    ctx->pc = 0x18A708u;
    // 0x18a708: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18A708u;
    SET_GPR_U32(ctx, 31, 0x18A710u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18A708u, 0x18A710u)) {
        return;
    }
    ctx->pc = 0x18A710u;
label_18a710:
    // 0x18a710: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18a710u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18a714: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a718: 0x8c658ad0  lw          $a1, -0x7530($v1)
    ctx->pc = 0x18a718u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338AD0u));
    // 0x18a71c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18A71Cu;
    SET_GPR_U32(ctx, 31, 0x18A724u);
    ctx->pc = 0x18A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A71Cu;
    // 0x18a720: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18A71Cu, 0x18A724u)) {
        return;
    }
    ctx->pc = 0x18A724u;
label_18a724:
    // 0x18a724: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x18A724u;
    {
        const bool branch_taken_0x18a724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A724u;
        // 0x18a728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a724) {
            ctx->pc = 0x18A874u;
            goto label_18a874;
        }
    }
    ctx->pc = 0x18A72Cu;
    // 0x18a72c: 0x26850008  addiu       $a1, $s4, 0x8
    ctx->pc = 0x18a72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
    // 0x18a730: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18A730u;
    SET_GPR_U32(ctx, 31, 0x18A738u);
    ctx->pc = 0x18A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A730u;
    // 0x18a734: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18A730u, 0x18A738u)) {
        return;
    }
    ctx->pc = 0x18A738u;
label_18a738:
    // 0x18a738: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x18a738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a73c: 0x12c0004d  beqz        $s6, . + 4 + (0x4D << 2)
    ctx->pc = 0x18A73Cu;
    {
        const bool branch_taken_0x18a73c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A73Cu;
        // 0x18a740: 0x3c05006a  lui         $a1, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a73c) {
            ctx->pc = 0x18A874u;
            goto label_18a874;
        }
    }
    ctx->pc = 0x18A744u;
    // 0x18a744: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x18a744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x18a748: 0x24a58e40  addiu       $a1, $a1, -0x71C0
    ctx->pc = 0x18a748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938176));
    // 0x18a74c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a750: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x18a750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x18a754: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x18A754u;
    SET_GPR_U32(ctx, 31, 0x18A75Cu);
    ctx->pc = 0x18A758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A754u;
    // 0x18a758: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x18A754u, 0x18A75Cu)) {
        return;
    }
    ctx->pc = 0x18A75Cu;
label_18a75c:
    // 0x18a75c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x18a75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18a760: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x18A760u;
    {
        const bool branch_taken_0x18a760 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A760u;
        // 0x18a764: 0x3c1e006a  lui         $fp, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a760) {
            ctx->pc = 0x18A874u;
            goto label_18a874;
        }
    }
    ctx->pc = 0x18A768u;
    // 0x18a768: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x18a768u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x18a76c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x18a76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_18a770:
    // 0x18a770: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x18a770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a774: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x18a774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x18a778: 0xc07d3f4  jal         func_1F4FD0
    ctx->pc = 0x18A778u;
    SET_GPR_U32(ctx, 31, 0x18A780u);
    ctx->pc = 0x18A77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A778u;
    // 0x18a77c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4FD0u, 0x18A778u, 0x18A780u)) {
        return;
    }
    ctx->pc = 0x18A780u;
label_18a780:
    // 0x18a780: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18a780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a784: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
    ctx->pc = 0x18A784u;
    {
        const bool branch_taken_0x18a784 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A784u;
        // 0x18a788: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a784) {
            ctx->pc = 0x18A860u;
            goto label_18a860;
        }
    }
    ctx->pc = 0x18A78Cu;
    // 0x18a78c: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x18a78cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x18a790: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x18a790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x18a794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a798: 0xc07d37e  jal         func_1F4DF8
    ctx->pc = 0x18A798u;
    SET_GPR_U32(ctx, 31, 0x18A7A0u);
    ctx->pc = 0x18A79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A798u;
    // 0x18a79c: 0x27c58e48  addiu       $a1, $fp, -0x71B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294938184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DF8u, 0x18A798u, 0x18A7A0u)) {
        return;
    }
    ctx->pc = 0x18A7A0u;
label_18a7a0:
    // 0x18a7a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18a7a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7a4: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x18a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x18a7a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18a7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7ac: 0xc062aa0  jal         func_18AA80
    ctx->pc = 0x18A7ACu;
    SET_GPR_U32(ctx, 31, 0x18A7B4u);
    ctx->pc = 0x18A7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A7ACu;
    // 0x18a7b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AA80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18AA80u, 0x18A7ACu, 0x18A7B4u)) {
        return;
    }
    ctx->pc = 0x18A7B4u;
label_18a7b4:
    // 0x18a7b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x18a7b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7b8: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x18a7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x18a7bc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x18a7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x18a7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18a7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7c4: 0x26e58e50  addiu       $a1, $s7, -0x71B0
    ctx->pc = 0x18a7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294938192));
    // 0x18a7c8: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x18A7C8u;
    SET_GPR_U32(ctx, 31, 0x18A7D0u);
    ctx->pc = 0x18A7CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A7C8u;
    // 0x18a7cc: 0x27a60038  addiu       $a2, $sp, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x18A7C8u, 0x18A7D0u)) {
        return;
    }
    ctx->pc = 0x18A7D0u;
label_18a7d0:
    // 0x18a7d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x18a7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18a7d4: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x18A7D4u;
    {
        const bool branch_taken_0x18a7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A7D4u;
        // 0x18a7d8: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a7d4) {
            ctx->pc = 0x18A864u;
            goto label_18a864;
        }
    }
    ctx->pc = 0x18A7DCu;
    // 0x18a7dc: 0x24130026  addiu       $s3, $zero, 0x26
    ctx->pc = 0x18a7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x18a7e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18a7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7e4: 0x0  nop
    ctx->pc = 0x18a7e4u;
    // NOP
label_18a7e8:
    // 0x18a7e8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x18a7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x18a7ec: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x18a7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x18a7f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18a7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a7f4: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x18a7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x18a7f8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x18a7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x18a7fc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x18A7FCu;
    SET_GPR_U32(ctx, 31, 0x18A804u);
    ctx->pc = 0x18A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A7FCu;
    // 0x18a800: 0xafb3002c  sw          $s3, 0x2C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x18A7FCu, 0x18A804u)) {
        return;
    }
    ctx->pc = 0x18A804u;
label_18a804:
    // 0x18a804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18a804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a808: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18a808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a80c: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x18a80cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x18a810: 0xc07d39c  jal         func_1F4E70
    ctx->pc = 0x18A810u;
    SET_GPR_U32(ctx, 31, 0x18A818u);
    ctx->pc = 0x18A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A810u;
    // 0x18a814: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E70u, 0x18A810u, 0x18A818u)) {
        return;
    }
    ctx->pc = 0x18A818u;
label_18a818:
    // 0x18a818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18a818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x18a81c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18a81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a820: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18a820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a824: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x18a824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a828: 0xc062b12  jal         func_18AC48
    ctx->pc = 0x18A828u;
    SET_GPR_U32(ctx, 31, 0x18A830u);
    ctx->pc = 0x18A82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A828u;
    // 0x18a82c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AC48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18AC48u, 0x18A828u, 0x18A830u)) {
        return;
    }
    ctx->pc = 0x18A830u;
label_18a830:
    // 0x18a830: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x18a830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18a834: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x18a834u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x18a838: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x18a838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x18a83c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x18a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x18a840: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x18a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18a844: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x18a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x18a848: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x18a848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x18a84c: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x18a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
    // 0x18a850: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x18a850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x18a854: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18a854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a858: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x18A858u;
    {
        const bool branch_taken_0x18a858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A858u;
        // 0x18a85c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a858) {
            ctx->pc = 0x18A7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a7e8;
        }
    }
    ctx->pc = 0x18A860u;
label_18a860:
    // 0x18a860: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x18a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_18a864:
    // 0x18a864: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x18a864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18a868: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x18a868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18a86c: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
    ctx->pc = 0x18A86Cu;
    {
        const bool branch_taken_0x18a86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18A870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A86Cu;
        // 0x18a870: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a86c) {
            ctx->pc = 0x18A770u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18a770;
        }
    }
    ctx->pc = 0x18A874u;
label_18a874:
    // 0x18a874: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x18a874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_18a878:
    // 0x18a878: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x18a878u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x18a87c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x18a87cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x18a880: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x18a880u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x18a884: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x18a884u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x18a888: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x18a888u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x18a88c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x18a88cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18a890: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x18a890u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18a894: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x18a894u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18a898: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x18a898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18a89c: 0x3e00008  jr          $ra
    ctx->pc = 0x18A89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A89Cu;
        // 0x18a8a0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A8A4u;
    // 0x18a8a4: 0x0  nop
    ctx->pc = 0x18a8a4u;
    // NOP
    ctx->pc = 0x18a8a8u;
}
