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

// Function: sub_001A5758
// Address: 0x1a5758 - 0x1a57c0
void sub_001A5758_0x1a5758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5758_0x1a5758");
#endif

    switch (ctx->pc) {
        case 0x1a5774u: goto label_1a5774;
        default: break;
    }

    ctx->pc = 0x1a5758u;

    // 0x1a5758: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a575c: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a575cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a5760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a5760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a5764: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a5764u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1a5768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a5768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a576c: 0xc06960a  jal         func_1A5828
    ctx->pc = 0x1A576Cu;
    SET_GPR_U32(ctx, 31, 0x1A5774u);
    ctx->pc = 0x1A5770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A576Cu;
    // 0x1a5770: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A5828u, 0x1A576Cu, 0x1A5774u)) {
        return;
    }
    ctx->pc = 0x1A5774u;
label_1a5774:
    // 0x1a5774: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1a5774u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1a5778: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1a5778u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a577c: 0x0  nop
    ctx->pc = 0x1a577cu;
    // NOP
    // 0x1a5780: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5780u;
    {
        const bool branch_taken_0x1a5780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5780) {
            ctx->pc = 0x1A5784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5780u;
            // 0x1a5784: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A5790u;
            goto label_1a5790;
        }
    }
    ctx->pc = 0x1A5788u;
    // 0x1a5788: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A5788u;
    {
        const bool branch_taken_0x1a5788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A578Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5788u;
        // 0x1a578c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5788) {
            ctx->pc = 0x1A57A0u;
            goto label_1a57a0;
        }
    }
    ctx->pc = 0x1A5790u;
label_1a5790:
    // 0x1a5790: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a5790u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a5794: 0x0  nop
    ctx->pc = 0x1a5794u;
    // NOP
    // 0x1a5798: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1A5798u;
    {
        const bool branch_taken_0x1a5798 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a5798) {
            ctx->pc = 0x1A579Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A5798u;
            // 0x1a579c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A57A0u;
            goto label_1a57a0;
        }
    }
    ctx->pc = 0x1A57A0u;
label_1a57a0:
    // 0x1a57a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a57a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a57a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a57a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a57a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a57a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a57ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a57acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a57b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A57B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A57B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A57B0u;
        // 0x1a57b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A57B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A57B8u;
    // 0x1a57b8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a57b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a57bc: 0x0  nop
    ctx->pc = 0x1a57bcu;
    // NOP
    ctx->pc = 0x1a57c0u;
}
