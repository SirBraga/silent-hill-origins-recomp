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

// Function: sub_001C15A8
// Address: 0x1c15a8 - 0x1c1608
void sub_001C15A8_0x1c15a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C15A8_0x1c15a8");
#endif

    switch (ctx->pc) {
        case 0x1c15d0u: goto label_1c15d0;
        case 0x1c15ecu: goto label_1c15ec;
        default: break;
    }

    ctx->pc = 0x1c15a8u;

    // 0x1c15a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c15a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c15ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c15acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c15b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1c15b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1c15b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c15b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c15b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c15b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c15bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1c15bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1c15c0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1c15c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c15c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1c15c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1c15c8: 0xc070166  jal         func_1C0598
    ctx->pc = 0x1C15C8u;
    SET_GPR_U32(ctx, 31, 0x1C15D0u);
    ctx->pc = 0x1C15CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15C8u;
    // 0x1c15cc: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0598u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C0598u, 0x1C15C8u, 0x1C15D0u)) {
        return;
    }
    ctx->pc = 0x1C15D0u;
label_1c15d0:
    // 0x1c15d0: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1c15d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1c15d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C15D4u;
    {
        const bool branch_taken_0x1c15d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C15D4u;
        // 0x1c15d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c15d4) {
            ctx->pc = 0x1C15F4u;
            goto label_1c15f4;
        }
    }
    ctx->pc = 0x1C15DCu;
    // 0x1c15dc: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1c15dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c15e0: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c15e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c15e4: 0xc07059c  jal         func_1C1670
    ctx->pc = 0x1C15E4u;
    SET_GPR_U32(ctx, 31, 0x1C15ECu);
    ctx->pc = 0x1C15E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C15E4u;
    // 0x1c15e8: 0xe60002e4  swc1        $f0, 0x2E4($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1670u, 0x1C15E4u, 0x1C15ECu)) {
        return;
    }
    ctx->pc = 0x1C15ECu;
label_1c15ec:
    // 0x1c15ec: 0xc60002e4  lwc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1c15ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c15f0: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x1c15f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
label_1c15f4:
    // 0x1c15f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c15f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c15f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c15f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c15fc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1c15fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c1600: 0x3e00008  jr          $ra
    ctx->pc = 0x1C1600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1600u;
        // 0x1c1604: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C1608u;
}
