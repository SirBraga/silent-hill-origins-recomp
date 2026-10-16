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

// Function: sub_0011B280
// Address: 0x11b280 - 0x11b380
void sub_0011B280_0x11b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B280_0x11b280");
#endif

    switch (ctx->pc) {
        case 0x11b2d8u: goto label_11b2d8;
        case 0x11b318u: goto label_11b318;
        case 0x11b350u: goto label_11b350;
        case 0x11b36cu: goto label_11b36c;
        default: break;
    }

    ctx->pc = 0x11b280u;

    // 0x11b280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11b280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11b284: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11b288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11b288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11b28c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11b28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11b290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11b290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b294: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x11b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x11b298: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x11b298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x11b29c: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x11B29Cu;
    {
        const bool branch_taken_0x11b29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B29Cu;
        // 0x11b2a0: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b29c) {
            ctx->pc = 0x11B2D8u;
            goto label_11b2d8;
        }
    }
    ctx->pc = 0x11B2A4u;
    // 0x11b2a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11b2a8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x11b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x11b2ac: 0x8c4446c8  lw          $a0, 0x46C8($v0)
    ctx->pc = 0x11b2acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B46C8u));
    // 0x11b2b0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x11b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x11b2b4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B2B4u;
    {
        const bool branch_taken_0x11b2b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2B4u;
        // 0x11b2b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2b4) {
            ctx->pc = 0x11B2D8u;
            goto label_11b2d8;
        }
    }
    ctx->pc = 0x11B2BCu;
    // 0x11b2bc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11b2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b2c0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B2C0u;
    {
        const bool branch_taken_0x11b2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b2c0) {
            ctx->pc = 0x11B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B2C0u;
            // 0x11b2c4: 0x8e020090  lw          $v0, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B2DCu;
            goto label_11b2dc;
        }
    }
    ctx->pc = 0x11B2C8u;
    // 0x11b2c8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11b2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b2d0: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11B2D0u;
    SET_GPR_U32(ctx, 31, 0x11B2D8u);
    ctx->pc = 0x11B2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B2D0u;
    // 0x11b2d4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11B2D0u, 0x11B2D8u)) {
        return;
    }
    ctx->pc = 0x11B2D8u;
label_11b2d8:
    // 0x11b2d8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x11b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_11b2dc:
    // 0x11b2dc: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11B2DCu;
    {
        const bool branch_taken_0x11b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b2dc) {
            ctx->pc = 0x11B2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B2DCu;
            // 0x11b2e0: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B31Cu;
            goto label_11b31c;
        }
    }
    ctx->pc = 0x11B2E4u;
    // 0x11b2e4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x11b2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x11b2e8: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x11b2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x11b2ec: 0x8c4446c0  lw          $a0, 0x46C0($v0)
    ctx->pc = 0x11b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B46C0u));
    // 0x11b2f0: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x11b2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x11b2f4: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11B2F4u;
    {
        const bool branch_taken_0x11b2f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B2F4u;
        // 0x11b2f8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b2f4) {
            ctx->pc = 0x11B318u;
            goto label_11b318;
        }
    }
    ctx->pc = 0x11B2FCu;
    // 0x11b2fc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x11b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11b300: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B300u;
    {
        const bool branch_taken_0x11b300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b300) {
            ctx->pc = 0x11B304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B300u;
            // 0x11b304: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B31Cu;
            goto label_11b31c;
        }
    }
    ctx->pc = 0x11B308u;
    // 0x11b308: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x11b308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x11b30c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11b30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b310: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11B310u;
    SET_GPR_U32(ctx, 31, 0x11B318u);
    ctx->pc = 0x11B314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B310u;
    // 0x11b314: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11B310u, 0x11B318u)) {
        return;
    }
    ctx->pc = 0x11B318u;
label_11b318:
    // 0x11b318: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x11b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_11b31c:
    // 0x11b31c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11B31Cu;
    {
        const bool branch_taken_0x11b31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B31Cu;
        // 0x11b320: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b31c) {
            ctx->pc = 0x11B350u;
            goto label_11b350;
        }
    }
    ctx->pc = 0x11B324u;
    // 0x11b324: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x11b324u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x11b328: 0x8c424548  lw          $v0, 0x4548($v0)
    ctx->pc = 0x11b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17736)));
    // 0x11b32c: 0x8c641a70  lw          $a0, 0x1A70($v1)
    ctx->pc = 0x11b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x701A70u));
    // 0x11b330: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11b330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11b334: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B334u;
    {
        const bool branch_taken_0x11b334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x11B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B334u;
        // 0x11b338: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b334) {
            ctx->pc = 0x11B350u;
            goto label_11b350;
        }
    }
    ctx->pc = 0x11B33Cu;
    // 0x11b33c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x11b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11b340: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11B340u;
    {
        const bool branch_taken_0x11b340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b340) {
            ctx->pc = 0x11B344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B340u;
            // 0x11b344: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B354u;
            goto label_11b354;
        }
    }
    ctx->pc = 0x11B348u;
    // 0x11b348: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x11B348u;
    SET_GPR_U32(ctx, 31, 0x11B350u);
    ctx->pc = 0x11B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B348u;
    // 0x11b34c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x11B348u, 0x11B350u)) {
        return;
    }
    ctx->pc = 0x11B350u;
label_11b350:
    // 0x11b350: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x11b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_11b354:
    // 0x11b354: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B354u;
    {
        const bool branch_taken_0x11b354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11b354) {
            ctx->pc = 0x11B358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B354u;
            // 0x11b358: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B370u;
            goto label_11b370;
        }
    }
    ctx->pc = 0x11B35Cu;
    // 0x11b35c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11b35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11b360: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11b360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11b364: 0xc075d62  jal         func_1D7588
    ctx->pc = 0x11B364u;
    SET_GPR_U32(ctx, 31, 0x11B36Cu);
    ctx->pc = 0x11B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B364u;
    // 0x11b368: 0xc60d011c  lwc1        $f13, 0x11C($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7588u, 0x11B364u, 0x11B36Cu)) {
        return;
    }
    ctx->pc = 0x11B36Cu;
label_11b36c:
    // 0x11b36c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11b36cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11b370:
    // 0x11b370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11b370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11b374: 0x3e00008  jr          $ra
    ctx->pc = 0x11B374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B374u;
        // 0x11b378: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B37Cu;
    // 0x11b37c: 0x0  nop
    ctx->pc = 0x11b37cu;
    // NOP
    ctx->pc = 0x11b380u;
}
