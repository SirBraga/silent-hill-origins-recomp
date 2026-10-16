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

// Function: sub_001C83E8
// Address: 0x1c83e8 - 0x1c8460
void sub_001C83E8_0x1c83e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C83E8_0x1c83e8");
#endif

    switch (ctx->pc) {
        case 0x1c8408u: goto label_1c8408;
        case 0x1c8444u: goto label_1c8444;
        default: break;
    }

    ctx->pc = 0x1c83e8u;

    // 0x1c83e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c83e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c83ec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c83ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c83f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c83f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c83f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c83f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c83f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c83fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c83fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8400: 0xc072170  jal         func_1C85C0
    ctx->pc = 0x1C8400u;
    SET_GPR_U32(ctx, 31, 0x1C8408u);
    ctx->pc = 0x1C8404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8400u;
    // 0x1c8404: 0xc62c0004  lwc1        $f12, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C85C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C85C0u, 0x1C8400u, 0x1C8408u)) {
        return;
    }
    ctx->pc = 0x1C8408u;
label_1c8408:
    // 0x1c8408: 0x8e02026c  lw          $v0, 0x26C($s0)
    ctx->pc = 0x1c8408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
    // 0x1c840c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C840Cu;
    {
        const bool branch_taken_0x1c840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C840Cu;
        // 0x1c8410: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c840c) {
            ctx->pc = 0x1C8448u;
            goto label_1c8448;
        }
    }
    ctx->pc = 0x1C8414u;
    // 0x1c8414: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1c8414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8418: 0xc6000278  lwc1        $f0, 0x278($s0)
    ctx->pc = 0x1c8418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c841c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c841cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1c8420: 0xe6000278  swc1        $f0, 0x278($s0)
    ctx->pc = 0x1c8420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 632), bits); }
    // 0x1c8424: 0xc4419904  lwc1        $f1, -0x66FC($v0)
    ctx->pc = 0x1c8424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c8428: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1c8428u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c842c: 0x0  nop
    ctx->pc = 0x1c842cu;
    // NOP
    // 0x1c8430: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C8430u;
    {
        const bool branch_taken_0x1c8430 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C8434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8430u;
        // 0x1c8434: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c8430) {
            ctx->pc = 0x1C8448u;
            goto label_1c8448;
        }
    }
    ctx->pc = 0x1C8438u;
    // 0x1c8438: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c8438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c843c: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1C843Cu;
    SET_GPR_U32(ctx, 31, 0x1C8444u);
    ctx->pc = 0x1C8440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C843Cu;
    // 0x1c8440: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C843Cu, 0x1C8444u)) {
        return;
    }
    ctx->pc = 0x1C8444u;
label_1c8444:
    // 0x1c8444: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c8444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
label_1c8448:
    // 0x1c8448: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c8448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c844c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c844cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c8450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c8450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c8454: 0x3e00008  jr          $ra
    ctx->pc = 0x1C8454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C8458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C8454u;
        // 0x1c8458: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C8454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C845Cu;
    // 0x1c845c: 0x0  nop
    ctx->pc = 0x1c845cu;
    // NOP
    ctx->pc = 0x1c8460u;
}
