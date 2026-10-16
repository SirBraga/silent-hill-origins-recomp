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

// Function: sub_00136EE8
// Address: 0x136ee8 - 0x136f80
void sub_00136EE8_0x136ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136EE8_0x136ee8");
#endif

    switch (ctx->pc) {
        case 0x136f1cu: goto label_136f1c;
        case 0x136f28u: goto label_136f28;
        default: break;
    }

    ctx->pc = 0x136ee8u;

    // 0x136ee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x136ee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x136eec: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x136eecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x136ef0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x136ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x136ef4: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x136ef4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136ef8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x136ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x136efc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x136efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x136f00: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x136f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x136f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x136f08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x136f08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f0c: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x136F0Cu;
    {
        const bool branch_taken_0x136f0c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F0Cu;
        // 0x136f10: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f0c) {
            ctx->pc = 0x136F60u;
            goto label_136f60;
        }
    }
    ctx->pc = 0x136F14u;
    // 0x136f14: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x136F14u;
    SET_GPR_U32(ctx, 31, 0x136F1Cu);
    ctx->pc = 0x136F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F14u;
    // 0x136f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x136F14u, 0x136F1Cu)) {
        return;
    }
    ctx->pc = 0x136F1Cu;
label_136f1c:
    // 0x136f1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x136f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f20: 0xc093abc  jal         func_24EAF0
    ctx->pc = 0x136F20u;
    SET_GPR_U32(ctx, 31, 0x136F28u);
    ctx->pc = 0x136F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136F20u;
    // 0x136f24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EAF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EAF0u, 0x136F20u, 0x136F28u)) {
        return;
    }
    ctx->pc = 0x136F28u;
label_136f28:
    // 0x136f28: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x136f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136f2c: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x136f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136f30: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x136f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f34: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x136f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136f38: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x136f38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x136f3c: 0xc644192c  lwc1        $f4, 0x192C($s2)
    ctx->pc = 0x136f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 6444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136f40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x136f40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x136f44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x136f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x136f48: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x136f48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136f4c: 0x0  nop
    ctx->pc = 0x136f4cu;
    // NOP
    // 0x136f50: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x136F50u;
    {
        const bool branch_taken_0x136f50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F50u;
        // 0x136f54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f50) {
            ctx->pc = 0x136F64u;
            goto label_136f64;
        }
    }
    ctx->pc = 0x136F58u;
    // 0x136f58: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x136F58u;
    {
        const bool branch_taken_0x136f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x136F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F58u;
        // 0x136f5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f58) {
            ctx->pc = 0x136F64u;
            goto label_136f64;
        }
    }
    ctx->pc = 0x136F60u;
label_136f60:
    // 0x136f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x136f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_136f64:
    // 0x136f64: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x136f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x136f68: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x136f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136f6c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x136f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x136f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136f74: 0x3e00008  jr          $ra
    ctx->pc = 0x136F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F74u;
        // 0x136f78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136F74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136F7Cu;
    // 0x136f7c: 0x0  nop
    ctx->pc = 0x136f7cu;
    // NOP
    ctx->pc = 0x136f80u;
}
