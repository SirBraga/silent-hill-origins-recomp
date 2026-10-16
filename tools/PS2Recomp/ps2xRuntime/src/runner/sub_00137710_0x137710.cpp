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

// Function: sub_00137710
// Address: 0x137710 - 0x137788
void sub_00137710_0x137710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137710_0x137710");
#endif

    switch (ctx->pc) {
        case 0x137734u: goto label_137734;
        case 0x137768u: goto label_137768;
        default: break;
    }

    ctx->pc = 0x137710u;

    // 0x137710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x137710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x137714: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x137714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x137718: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x137718u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13771c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13771cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x137720: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x137720u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x137724: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x137724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x137728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13772c: 0xc049108  jal         func_124420
    ctx->pc = 0x13772Cu;
    SET_GPR_U32(ctx, 31, 0x137734u);
    ctx->pc = 0x137730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13772Cu;
    // 0x137730: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124420u, 0x13772Cu, 0x137734u)) {
        return;
    }
    ctx->pc = 0x137734u;
label_137734:
    // 0x137734: 0xc6008370  lwc1        $f0, -0x7C90($s0)
    ctx->pc = 0x137734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294935408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137738: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x137738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x13773c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13773cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137740: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x137740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x137744: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x137744u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137748: 0x0  nop
    ctx->pc = 0x137748u;
    // NOP
    // 0x13774c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x13774Cu;
    {
        const bool branch_taken_0x13774c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13774Cu;
        // 0x137750: 0xe6008370  swc1        $f0, -0x7C90($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294935408), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13774c) {
            ctx->pc = 0x13776Cu;
            goto label_13776c;
        }
    }
    ctx->pc = 0x137754u;
    // 0x137754: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x137754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x137758: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x137758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x13775c: 0x24a5c250  addiu       $a1, $a1, -0x3DB0
    ctx->pc = 0x13775cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951504));
    // 0x137760: 0xc09545a  jal         func_255168
    ctx->pc = 0x137760u;
    SET_GPR_U32(ctx, 31, 0x137768u);
    ctx->pc = 0x137764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137760u;
    // 0x137764: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x137760u, 0x137768u)) {
        return;
    }
    ctx->pc = 0x137768u;
label_137768:
    // 0x137768: 0xae008370  sw          $zero, -0x7C90($s0)
    ctx->pc = 0x137768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294935408), GPR_U32(ctx, 0));
label_13776c:
    // 0x13776c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13776cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x137770: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x137770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x137774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137778: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x137778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13777c: 0x3e00008  jr          $ra
    ctx->pc = 0x13777Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13777Cu;
        // 0x137780: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13777Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137784u;
    // 0x137784: 0x0  nop
    ctx->pc = 0x137784u;
    // NOP
    ctx->pc = 0x137788u;
}
