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

// Function: sub_001C1608
// Address: 0x1c1608 - 0x1c1670
void sub_001C1608_0x1c1608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1608_0x1c1608");
#endif

    switch (ctx->pc) {
        case 0x1c1630u: goto label_1c1630;
        case 0x1c164cu: goto label_1c164c;
        default: break;
    }

    ctx->pc = 0x1c1608u;

    // 0x1c1608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c1608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c160c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c1610: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c1610u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c1614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c1618: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c161c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c161cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c1620: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1c1620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1624: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1c1624u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1c1628: 0xc070166  jal         func_1C0598
    ctx->pc = 0x1C1628u;
    SET_GPR_U32(ctx, 31, 0x1C1630u);
    ctx->pc = 0x1C162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1628u;
    // 0x1c162c: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0598u, 0x1C1628u, 0x1C1630u)) {
        return;
    }
    ctx->pc = 0x1C1630u;
label_1c1630:
    // 0x1c1630: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1c1630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1c1634: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C1634u;
    {
        const bool branch_taken_0x1c1634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1634u;
        // 0x1c1638: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1634) {
            ctx->pc = 0x1C1654u;
            goto label_1c1654;
        }
    }
    ctx->pc = 0x1C163Cu;
    // 0x1c163c: 0xc60002e8  lwc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1c163cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1640: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c1640u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c1644: 0xc07059c  jal         func_1C1670
    ctx->pc = 0x1C1644u;
    SET_GPR_U32(ctx, 31, 0x1C164Cu);
    ctx->pc = 0x1C1648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1644u;
    // 0x1c1648: 0xe60002e8  swc1        $f0, 0x2E8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1670u, 0x1C1644u, 0x1C164Cu)) {
        return;
    }
    ctx->pc = 0x1C164Cu;
label_1c164c:
    // 0x1c164c: 0xc60002e8  lwc1        $f0, 0x2E8($s0)
    ctx->pc = 0x1c164cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c1650: 0xe60002f0  swc1        $f0, 0x2F0($s0)
    ctx->pc = 0x1c1650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
label_1c1654:
    // 0x1c1654: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c1654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c1658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c165c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1c165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1660: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1660u;
        // 0x1c1664: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1668u;
    // 0x1c1668: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1c1668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c166c: 0x0  nop
    ctx->pc = 0x1c166cu;
    // NOP
    ctx->pc = 0x1c1670u;
}
