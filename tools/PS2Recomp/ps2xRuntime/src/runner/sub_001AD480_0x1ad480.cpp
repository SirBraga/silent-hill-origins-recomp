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

// Function: sub_001AD480
// Address: 0x1ad480 - 0x1ad510
void sub_001AD480_0x1ad480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD480_0x1ad480");
#endif

    switch (ctx->pc) {
        case 0x1ad480u: goto label_1ad480;
        case 0x1ad484u: goto label_1ad484;
        case 0x1ad488u: goto label_1ad488;
        case 0x1ad48cu: goto label_1ad48c;
        case 0x1ad490u: goto label_1ad490;
        case 0x1ad494u: goto label_1ad494;
        case 0x1ad498u: goto label_1ad498;
        case 0x1ad49cu: goto label_1ad49c;
        case 0x1ad4a0u: goto label_1ad4a0;
        case 0x1ad4a4u: goto label_1ad4a4;
        case 0x1ad4a8u: goto label_1ad4a8;
        case 0x1ad4acu: goto label_1ad4ac;
        case 0x1ad4b0u: goto label_1ad4b0;
        case 0x1ad4b4u: goto label_1ad4b4;
        case 0x1ad4b8u: goto label_1ad4b8;
        case 0x1ad4bcu: goto label_1ad4bc;
        case 0x1ad4c0u: goto label_1ad4c0;
        case 0x1ad4c4u: goto label_1ad4c4;
        case 0x1ad4c8u: goto label_1ad4c8;
        case 0x1ad4ccu: goto label_1ad4cc;
        case 0x1ad4d0u: goto label_1ad4d0;
        case 0x1ad4d4u: goto label_1ad4d4;
        case 0x1ad4d8u: goto label_1ad4d8;
        case 0x1ad4dcu: goto label_1ad4dc;
        case 0x1ad4e0u: goto label_1ad4e0;
        case 0x1ad4e4u: goto label_1ad4e4;
        case 0x1ad4e8u: goto label_1ad4e8;
        case 0x1ad4ecu: goto label_1ad4ec;
        case 0x1ad4f0u: goto label_1ad4f0;
        case 0x1ad4f4u: goto label_1ad4f4;
        case 0x1ad4f8u: goto label_1ad4f8;
        case 0x1ad4fcu: goto label_1ad4fc;
        case 0x1ad500u: goto label_1ad500;
        case 0x1ad504u: goto label_1ad504;
        case 0x1ad508u: goto label_1ad508;
        case 0x1ad50cu: goto label_1ad50c;
        default: break;
    }

    ctx->pc = 0x1ad480u;

label_1ad480:
    // 0x1ad480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ad480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1ad484:
    // 0x1ad484: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ad484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1ad488:
    // 0x1ad488: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ad488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ad48c:
    // 0x1ad48c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ad48cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ad490:
    // 0x1ad490: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ad494:
    // 0x1ad494: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
label_1ad498:
    if (ctx->pc == 0x1AD498u) {
        ctx->pc = 0x1AD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD494u;
        // 0x1ad498: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD49Cu;
        goto label_1ad49c;
    }
    ctx->pc = 0x1AD494u;
    {
        const bool branch_taken_0x1ad494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad494) {
            ctx->pc = 0x1AD498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD494u;
            // 0x1ad498: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD504u;
            goto label_1ad504;
        }
    }
    ctx->pc = 0x1AD49Cu;
label_1ad49c:
    // 0x1ad49c: 0xc06b906  jal         func_1AE418
label_1ad4a0:
    if (ctx->pc == 0x1AD4A0u) {
        ctx->pc = 0x1AD4A4u;
        goto label_1ad4a4;
    }
    ctx->pc = 0x1AD49Cu;
    SET_GPR_U32(ctx, 31, 0x1AD4A4u);
    ctx->pc = 0x1AE418u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE418u, 0x1AD49Cu, 0x1AD4A4u)) {
        return;
    }
    ctx->pc = 0x1AD4A4u;
label_1ad4a4:
    // 0x1ad4a4: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1ad4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad4a8:
    // 0x1ad4a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1ad4a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ad4ac:
    // 0x1ad4ac: 0x0  nop
    ctx->pc = 0x1ad4acu;
    // NOP
label_1ad4b0:
    // 0x1ad4b0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1ad4b4:
    if (ctx->pc == 0x1AD4B4u) {
        ctx->pc = 0x1AD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4B0u;
        // 0x1ad4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4B8u;
        goto label_1ad4b8;
    }
    ctx->pc = 0x1AD4B0u;
    {
        const bool branch_taken_0x1ad4b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AD4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4B0u;
        // 0x1ad4b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4b0) {
            ctx->pc = 0x1AD4BCu;
            goto label_1ad4bc;
        }
    }
    ctx->pc = 0x1AD4B8u;
label_1ad4b8:
    // 0x1ad4b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad4bc:
    // 0x1ad4bc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1ad4c0:
    if (ctx->pc == 0x1AD4C0u) {
        ctx->pc = 0x1AD4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4BCu;
        // 0x1ad4c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4C4u;
        goto label_1ad4c4;
    }
    ctx->pc = 0x1AD4BCu;
    {
        const bool branch_taken_0x1ad4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad4bc) {
            ctx->pc = 0x1AD4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD4BCu;
            // 0x1ad4c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD504u;
            goto label_1ad504;
        }
    }
    ctx->pc = 0x1AD4C4u;
label_1ad4c4:
    // 0x1ad4c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad4c8:
    // 0x1ad4c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ad4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1ad4cc:
    // 0x1ad4cc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ad4ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1ad4d0:
    // 0x1ad4d0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1ad4d4:
    if (ctx->pc == 0x1AD4D4u) {
        ctx->pc = 0x1AD4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4D0u;
        // 0x1ad4d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4D8u;
        goto label_1ad4d8;
    }
    ctx->pc = 0x1AD4D0u;
    {
        const bool branch_taken_0x1ad4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad4d0) {
            ctx->pc = 0x1AD4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD4D0u;
            // 0x1ad4d4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD504u;
            goto label_1ad504;
        }
    }
    ctx->pc = 0x1AD4D8u;
label_1ad4d8:
    // 0x1ad4d8: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x1ad4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_1ad4dc:
    // 0x1ad4dc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_1ad4e0:
    if (ctx->pc == 0x1AD4E0u) {
        ctx->pc = 0x1AD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4DCu;
        // 0x1ad4e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4E4u;
        goto label_1ad4e4;
    }
    ctx->pc = 0x1AD4DCu;
    {
        const bool branch_taken_0x1ad4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4DCu;
        // 0x1ad4e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4dc) {
            ctx->pc = 0x1AD4FCu;
            goto label_1ad4fc;
        }
    }
    ctx->pc = 0x1AD4E4u;
label_1ad4e4:
    // 0x1ad4e4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x1ad4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_1ad4e8:
    // 0x1ad4e8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1ad4ec:
    if (ctx->pc == 0x1AD4ECu) {
        ctx->pc = 0x1AD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4E8u;
        // 0x1ad4ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4F0u;
        goto label_1ad4f0;
    }
    ctx->pc = 0x1AD4E8u;
    {
        const bool branch_taken_0x1ad4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4E8u;
        // 0x1ad4ec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad4e8) {
            ctx->pc = 0x1AD4FCu;
            goto label_1ad4fc;
        }
    }
    ctx->pc = 0x1AD4F0u;
label_1ad4f0:
    // 0x1ad4f0: 0x60f809  jalr        $v1
label_1ad4f4:
    if (ctx->pc == 0x1AD4F4u) {
        ctx->pc = 0x1AD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4F0u;
        // 0x1ad4f4: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD4F8u;
        goto label_1ad4f8;
    }
    ctx->pc = 0x1AD4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AD4F8u);
        ctx->pc = 0x1AD4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD4F0u;
        // 0x1ad4f4: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD4F0u, 0x1AD4F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD4F8u;
label_1ad4f8:
    // 0x1ad4f8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ad4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ad4fc:
    // 0x1ad4fc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1ad4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1ad500:
    // 0x1ad500: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ad500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ad504:
    // 0x1ad504: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ad504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ad508:
    // 0x1ad508: 0x3e00008  jr          $ra
label_1ad50c:
    if (ctx->pc == 0x1AD50Cu) {
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD510u;
        goto label_fallthrough_0x1ad508;
    }
    ctx->pc = 0x1AD508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD508u;
        // 0x1ad50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ad508:
    ctx->pc = 0x1AD510u;
}
