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

// Function: sub_0012BB50
// Address: 0x12bb50 - 0x12bba0
void sub_0012BB50_0x12bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BB50_0x12bb50");
#endif

    switch (ctx->pc) {
        case 0x12bb88u: goto label_12bb88;
        case 0x12bb90u: goto label_12bb90;
        default: break;
    }

    ctx->pc = 0x12bb50u;

    // 0x12bb50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12bb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12bb54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12bb54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12bb58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12bb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12bb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bb60: 0xc4800c1c  lwc1        $f0, 0xC1C($a0)
    ctx->pc = 0x12bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12bb64: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x12bb64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12bb68: 0x0  nop
    ctx->pc = 0x12bb68u;
    // NOP
    // 0x12bb6c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12BB6Cu;
    {
        const bool branch_taken_0x12bb6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB6Cu;
        // 0x12bb70: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bb6c) {
            ctx->pc = 0x12BB7Cu;
            goto label_12bb7c;
        }
    }
    ctx->pc = 0x12BB74u;
    // 0x12bb74: 0xac800f04  sw          $zero, 0xF04($a0)
    ctx->pc = 0x12bb74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3844), GPR_U32(ctx, 0));
    // 0x12bb78: 0xac800f00  sw          $zero, 0xF00($a0)
    ctx->pc = 0x12bb78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3840), GPR_U32(ctx, 0));
label_12bb7c:
    // 0x12bb7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12bb80: 0xc049a8a  jal         func_126A28
    ctx->pc = 0x12BB80u;
    SET_GPR_U32(ctx, 31, 0x12BB88u);
    ctx->pc = 0x12BB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB80u;
    // 0x12bb84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126A28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126A28u, 0x12BB80u, 0x12BB88u)) {
        return;
    }
    ctx->pc = 0x12BB88u;
label_12bb88:
    // 0x12bb88: 0xc04067c  jal         func_1019F0
    ctx->pc = 0x12BB88u;
    SET_GPR_U32(ctx, 31, 0x12BB90u);
    ctx->pc = 0x12BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB88u;
    // 0x12bb8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019F0u, 0x12BB88u, 0x12BB90u)) {
        return;
    }
    ctx->pc = 0x12BB90u;
label_12bb90:
    // 0x12bb90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12bb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12bb94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb98: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB98u;
        // 0x12bb9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BBA0u;
}
