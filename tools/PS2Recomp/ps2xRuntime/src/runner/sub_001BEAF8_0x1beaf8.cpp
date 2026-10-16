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

// Function: sub_001BEAF8
// Address: 0x1beaf8 - 0x1beba8
void sub_001BEAF8_0x1beaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEAF8_0x1beaf8");
#endif

    switch (ctx->pc) {
        case 0x1beb48u: goto label_1beb48;
        default: break;
    }

    ctx->pc = 0x1beaf8u;

    // 0x1beaf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1beaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1beafc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1beafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1beb00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1beb00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb04: 0xe7b70038  swc1        $f23, 0x38($sp)
    ctx->pc = 0x1beb04u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1beb08: 0xe7b60030  swc1        $f22, 0x30($sp)
    ctx->pc = 0x1beb08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1beb0c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1beb0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb10: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x1beb10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1beb14: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x1beb14u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
    // 0x1beb18: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1beb18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1beb1c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x1beb1cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x1beb20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1beb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1beb24: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x1beb24u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x1beb28: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x1beb28u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x1beb2c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BEB2Cu;
    {
        const bool branch_taken_0x1beb2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB2Cu;
        // 0x1beb30: 0xae040038  sw          $a0, 0x38($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb2c) {
            ctx->pc = 0x1BEB54u;
            goto label_1beb54;
        }
    }
    ctx->pc = 0x1BEB34u;
    // 0x1beb34: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1beb34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1beb38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BEB38u;
    {
        const bool branch_taken_0x1beb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beb38) {
            ctx->pc = 0x1BEB54u;
            goto label_1beb54;
        }
    }
    ctx->pc = 0x1BEB40u;
    // 0x1beb40: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1BEB40u;
    SET_GPR_U32(ctx, 31, 0x1BEB48u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BEB40u, 0x1BEB48u)) {
        return;
    }
    ctx->pc = 0x1BEB48u;
label_1beb48:
    // 0x1beb48: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1beb48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1beb4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1beb50: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1beb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_1beb54:
    // 0x1beb54: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x1beb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x1beb58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1beb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1beb5c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1beb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1beb60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1beb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1beb64: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x1beb64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x1beb68: 0xe6160000  swc1        $f22, 0x0($s0)
    ctx->pc = 0x1beb68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1beb6c: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x1beb6cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
    // 0x1beb70: 0xe6170008  swc1        $f23, 0x8($s0)
    ctx->pc = 0x1beb70u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1beb74: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1beb74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1beb78: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1beb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1beb7c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1beb7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1beb80: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1beb80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1beb84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1beb84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1beb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beb8c: 0xc7b70038  lwc1        $f23, 0x38($sp)
    ctx->pc = 0x1beb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1beb90: 0xc7b60030  lwc1        $f22, 0x30($sp)
    ctx->pc = 0x1beb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1beb94: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x1beb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1beb98: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1beb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1beb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB9Cu;
        // 0x1beba0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEBA4u;
    // 0x1beba4: 0x0  nop
    ctx->pc = 0x1beba4u;
    // NOP
    ctx->pc = 0x1beba8u;
}
