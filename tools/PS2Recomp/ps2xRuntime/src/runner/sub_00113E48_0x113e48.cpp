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

// Function: sub_00113E48
// Address: 0x113e48 - 0x113eb0
void sub_00113E48_0x113e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113E48_0x113e48");
#endif

    switch (ctx->pc) {
        case 0x113e9cu: goto label_113e9c;
        default: break;
    }

    ctx->pc = 0x113e48u;

    // 0x113e48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113e4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x113e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x113e50: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x113e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x113e54: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x113e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x113e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x113e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113e60: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x113e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x113e64: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x113e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x113e68: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x113e68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x113e6c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x113e6cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x113e70: 0x460c1036  c.le.s      $f2, $f12
    ctx->pc = 0x113e70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113e74: 0x0  nop
    ctx->pc = 0x113e74u;
    // NOP
    // 0x113e78: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x113E78u;
    {
        const bool branch_taken_0x113e78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E78u;
        // 0x113e7c: 0xe60c0004  swc1        $f12, 0x4($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e78) {
            ctx->pc = 0x113E8Cu;
            goto label_113e8c;
        }
    }
    ctx->pc = 0x113E80u;
    // 0x113e80: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x113e80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x113e84: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x113E84u;
    {
        const bool branch_taken_0x113e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E84u;
        // 0x113e88: 0xe6020004  swc1        $f2, 0x4($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x113e84) {
            ctx->pc = 0x113EA0u;
            goto label_113ea0;
        }
    }
    ctx->pc = 0x113E8Cu;
label_113e8c:
    // 0x113e8c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x113e8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x113e90: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x113e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x113e94: 0xc0593ca  jal         func_164F28
    ctx->pc = 0x113E94u;
    SET_GPR_U32(ctx, 31, 0x113E9Cu);
    ctx->pc = 0x113E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E94u;
    // 0x113e98: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x164F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164F28u, 0x113E94u, 0x113E9Cu)) {
        return;
    }
    ctx->pc = 0x113E9Cu;
label_113e9c:
    // 0x113e9c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x113e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_113ea0:
    // 0x113ea0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x113ea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x113ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x113EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EA8u;
        // 0x113eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113EB0u;
}
