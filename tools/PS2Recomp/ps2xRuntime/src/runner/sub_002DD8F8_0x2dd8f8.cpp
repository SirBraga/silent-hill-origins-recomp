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

// Function: sub_002DD8F8
// Address: 0x2dd8f8 - 0x2ddac0
void sub_002DD8F8_0x2dd8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD8F8_0x2dd8f8");
#endif

    switch (ctx->pc) {
        case 0x2dd920u: goto label_2dd920;
        case 0x2dd938u: goto label_2dd938;
        case 0x2dd954u: goto label_2dd954;
        case 0x2dd970u: goto label_2dd970;
        case 0x2dd98cu: goto label_2dd98c;
        case 0x2dd9a8u: goto label_2dd9a8;
        case 0x2dd9c0u: goto label_2dd9c0;
        case 0x2dda24u: goto label_2dda24;
        case 0x2dda30u: goto label_2dda30;
        case 0x2dda3cu: goto label_2dda3c;
        case 0x2dda68u: goto label_2dda68;
        case 0x2dda80u: goto label_2dda80;
        case 0x2dda9cu: goto label_2dda9c;
        default: break;
    }

    ctx->pc = 0x2dd8f8u;

label_2dd8f8:
    // 0x2dd8f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2dd8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2dd8fc: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dd8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dd900: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dd900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dd904: 0x24a5f100  addiu       $a1, $a1, -0xF00
    ctx->pc = 0x2dd904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963456));
    // 0x2dd908: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2dd908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2dd90c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2dd90cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd910: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2dd910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2dd914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd918: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD918u;
    SET_GPR_U32(ctx, 31, 0x2DD920u);
    ctx->pc = 0x2DD91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD918u;
    // 0x2dd91c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD918u, 0x2DD920u)) {
        return;
    }
    ctx->pc = 0x2DD920u;
label_2dd920:
    // 0x2dd920: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2DD920u;
    {
        const bool branch_taken_0x2dd920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD920u;
        // 0x2dd924: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd920) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DD928u;
    // 0x2dd928: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dd928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dd92c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd930: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD930u;
    SET_GPR_U32(ctx, 31, 0x2DD938u);
    ctx->pc = 0x2DD934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD930u;
    // 0x2dd934: 0x24a5f0f0  addiu       $a1, $a1, -0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD930u, 0x2DD938u)) {
        return;
    }
    ctx->pc = 0x2DD938u;
label_2dd938:
    // 0x2dd938: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD938u;
    {
        const bool branch_taken_0x2dd938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd938) {
            ctx->pc = 0x2DD93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD938u;
            // 0x2dd93c: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD948u;
            goto label_2dd948;
        }
    }
    ctx->pc = 0x2DD940u;
    // 0x2dd940: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x2DD940u;
    {
        const bool branch_taken_0x2dd940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD940u;
        // 0x2dd944: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd940) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DD948u;
label_2dd948:
    // 0x2dd948: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd94c: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD94Cu;
    SET_GPR_U32(ctx, 31, 0x2DD954u);
    ctx->pc = 0x2DD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD94Cu;
    // 0x2dd950: 0x24a5f110  addiu       $a1, $a1, -0xEF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD94Cu, 0x2DD954u)) {
        return;
    }
    ctx->pc = 0x2DD954u;
label_2dd954:
    // 0x2dd954: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD954u;
    {
        const bool branch_taken_0x2dd954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd954) {
            ctx->pc = 0x2DD958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD954u;
            // 0x2dd958: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD964u;
            goto label_2dd964;
        }
    }
    ctx->pc = 0x2DD95Cu;
    // 0x2dd95c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2DD95Cu;
    {
        const bool branch_taken_0x2dd95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD95Cu;
        // 0x2dd960: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd95c) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DD964u;
label_2dd964:
    // 0x2dd964: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd968: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD968u;
    SET_GPR_U32(ctx, 31, 0x2DD970u);
    ctx->pc = 0x2DD96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD968u;
    // 0x2dd96c: 0x24a5f180  addiu       $a1, $a1, -0xE80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD968u, 0x2DD970u)) {
        return;
    }
    ctx->pc = 0x2DD970u;
label_2dd970:
    // 0x2dd970: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD970u;
    {
        const bool branch_taken_0x2dd970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd970) {
            ctx->pc = 0x2DD974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD970u;
            // 0x2dd974: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD980u;
            goto label_2dd980;
        }
    }
    ctx->pc = 0x2DD978u;
    // 0x2dd978: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2DD978u;
    {
        const bool branch_taken_0x2dd978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD978u;
        // 0x2dd97c: 0x24020600  addiu       $v0, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd978) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DD980u;
label_2dd980:
    // 0x2dd980: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd984: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD984u;
    SET_GPR_U32(ctx, 31, 0x2DD98Cu);
    ctx->pc = 0x2DD988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD984u;
    // 0x2dd988: 0x24a5f120  addiu       $a1, $a1, -0xEE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD984u, 0x2DD98Cu)) {
        return;
    }
    ctx->pc = 0x2DD98Cu;
label_2dd98c:
    // 0x2dd98c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD98Cu;
    {
        const bool branch_taken_0x2dd98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd98c) {
            ctx->pc = 0x2DD990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD98Cu;
            // 0x2dd990: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD99Cu;
            goto label_2dd99c;
        }
    }
    ctx->pc = 0x2DD994u;
    // 0x2dd994: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2DD994u;
    {
        const bool branch_taken_0x2dd994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD994u;
        // 0x2dd998: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd994) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DD99Cu;
label_2dd99c:
    // 0x2dd99c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd9a0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD9A0u;
    SET_GPR_U32(ctx, 31, 0x2DD9A8u);
    ctx->pc = 0x2DD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9A0u;
    // 0x2dd9a4: 0x24a5f130  addiu       $a1, $a1, -0xED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD9A0u, 0x2DD9A8u)) {
        return;
    }
    ctx->pc = 0x2DD9A8u;
label_2dd9a8:
    // 0x2dd9a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DD9A8u;
    {
        const bool branch_taken_0x2dd9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9a8) {
            ctx->pc = 0x2DD9ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD9A8u;
            // 0x2dd9ac: 0x9242000d  lbu         $v0, 0xD($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DD9CCu;
            goto label_2dd9cc;
        }
    }
    ctx->pc = 0x2DD9B0u;
    // 0x2dd9b0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dd9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dd9b4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dd9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dd9b8: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DD9B8u;
    SET_GPR_U32(ctx, 31, 0x2DD9C0u);
    ctx->pc = 0x2DD9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9B8u;
    // 0x2dd9bc: 0x24a5f190  addiu       $a1, $a1, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DD9B8u, 0x2DD9C0u)) {
        return;
    }
    ctx->pc = 0x2DD9C0u;
label_2dd9c0:
    // 0x2dd9c0: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DD9C0u;
    {
        const bool branch_taken_0x2dd9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9c0) {
            ctx->pc = 0x2DD9C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DD9C0u;
            // 0x2dd9c4: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA5Cu;
            goto label_2dda5c;
        }
    }
    ctx->pc = 0x2DD9C8u;
    // 0x2dd9c8: 0x9242000d  lbu         $v0, 0xD($s2)
    ctx->pc = 0x2dd9c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 13)));
label_2dd9cc:
    // 0x2dd9cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dd9d0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DD9D0u;
    {
        const bool branch_taken_0x2dd9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2dd9d0) {
            ctx->pc = 0x2DD9E0u;
            goto label_2dd9e0;
        }
    }
    ctx->pc = 0x2DD9D8u;
    // 0x2dd9d8: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2DD9D8u;
    {
        const bool branch_taken_0x2dd9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD9D8u;
        // 0x2dd9dc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd9d8) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DD9E0u;
label_2dd9e0:
    // 0x2dd9e0: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x2dd9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2dd9e4: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x2dd9e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2dd9e8: 0x6a44000f  ldl         $a0, 0xF($s2)
    ctx->pc = 0x2dd9e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2dd9ec: 0x6e440008  ldr         $a0, 0x8($s2)
    ctx->pc = 0x2dd9ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2dd9f0: 0x6a450017  ldl         $a1, 0x17($s2)
    ctx->pc = 0x2dd9f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2dd9f4: 0x6e450010  ldr         $a1, 0x10($s2)
    ctx->pc = 0x2dd9f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2dd9f8: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x2dd9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2dd9fc: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2dd9fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dda00: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2dda00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dda04: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2dda04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dda08: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2dda08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dda0c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2dda0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dda10: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2dda10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dda14: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x2dda14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x2dda18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dda18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda1c: 0xc0b763e  jal         func_2DD8F8
    ctx->pc = 0x2DDA1Cu;
    SET_GPR_U32(ctx, 31, 0x2DDA24u);
    ctx->pc = 0x2DDA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA1Cu;
    // 0x2dda20: 0xa3a3000d  sb          $v1, 0xD($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 13), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD8F8u;
    goto label_2dd8f8;
    ctx->pc = 0x2DDA24u;
label_2dda24:
    // 0x2dda24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2dda24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda28: 0xc0b751e  jal         func_2DD478
    ctx->pc = 0x2DDA28u;
    SET_GPR_U32(ctx, 31, 0x2DDA30u);
    ctx->pc = 0x2DDA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA28u;
    // 0x2dda2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD478u, 0x2DDA28u, 0x2DDA30u)) {
        return;
    }
    ctx->pc = 0x2DDA30u;
label_2dda30:
    // 0x2dda30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2dda30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dda34: 0xc0b751e  jal         func_2DD478
    ctx->pc = 0x2DDA34u;
    SET_GPR_U32(ctx, 31, 0x2DDA3Cu);
    ctx->pc = 0x2DDA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA34u;
    // 0x2dda38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD478u, 0x2DDA34u, 0x2DDA3Cu)) {
        return;
    }
    ctx->pc = 0x2DDA3Cu;
label_2dda3c:
    // 0x2dda3c: 0x202001b  divu        $zero, $s0, $v0
    ctx->pc = 0x2dda3cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2dda40: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2DDA40u;
    {
        const bool branch_taken_0x2dda40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dda40) {
            ctx->pc = 0x2DDA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA40u;
            // 0x2dda44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA48u;
            goto label_2dda48;
        }
    }
    ctx->pc = 0x2DDA48u;
label_2dda48:
    // 0x2dda48: 0x8012  mflo        $s0
    ctx->pc = 0x2dda48u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2dda4c: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x2dda4cu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x2dda50: 0x8812  mflo        $s1
    ctx->pc = 0x2dda50u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x2dda54: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2DDA54u;
    {
        const bool branch_taken_0x2dda54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA54u;
        // 0x2dda58: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda54) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DDA5Cu;
label_2dda5c:
    // 0x2dda5c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dda5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dda60: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDA60u;
    SET_GPR_U32(ctx, 31, 0x2DDA68u);
    ctx->pc = 0x2DDA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA60u;
    // 0x2dda64: 0x24a5f150  addiu       $a1, $a1, -0xEB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDA60u, 0x2DDA68u)) {
        return;
    }
    ctx->pc = 0x2DDA68u;
label_2dda68:
    // 0x2dda68: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2DDA68u;
    {
        const bool branch_taken_0x2dda68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA68u;
        // 0x2dda6c: 0x24020480  addiu       $v0, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda68) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DDA70u;
    // 0x2dda70: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dda70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dda74: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2dda74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2dda78: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDA78u;
    SET_GPR_U32(ctx, 31, 0x2DDA80u);
    ctx->pc = 0x2DDA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA78u;
    // 0x2dda7c: 0x24a5f160  addiu       $a1, $a1, -0xEA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDA78u, 0x2DDA80u)) {
        return;
    }
    ctx->pc = 0x2DDA80u;
label_2dda80:
    // 0x2dda80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDA80u;
    {
        const bool branch_taken_0x2dda80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dda80) {
            ctx->pc = 0x2DDA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDA80u;
            // 0x2dda84: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DDA90u;
            goto label_2dda90;
        }
    }
    ctx->pc = 0x2DDA88u;
    // 0x2dda88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDA88u;
    {
        const bool branch_taken_0x2dda88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA88u;
        // 0x2dda8c: 0x24020480  addiu       $v0, $zero, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dda88) {
            ctx->pc = 0x2DDAA8u;
            goto label_2ddaa8;
        }
    }
    ctx->pc = 0x2DDA90u;
label_2dda90:
    // 0x2dda90: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dda90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dda94: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DDA94u;
    SET_GPR_U32(ctx, 31, 0x2DDA9Cu);
    ctx->pc = 0x2DDA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA94u;
    // 0x2dda98: 0x24a5f170  addiu       $a1, $a1, -0xE90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DDA94u, 0x2DDA9Cu)) {
        return;
    }
    ctx->pc = 0x2DDA9Cu;
label_2dda9c:
    // 0x2dda9c: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2dda9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x2ddaa0: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2ddaa0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x2ddaa4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2ddaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ddaa8:
    // 0x2ddaa8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2ddaa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ddaac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ddaacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ddab0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ddab0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ddab4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ddab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ddab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDAB8u;
        // 0x2ddabc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDAC0u;
}
