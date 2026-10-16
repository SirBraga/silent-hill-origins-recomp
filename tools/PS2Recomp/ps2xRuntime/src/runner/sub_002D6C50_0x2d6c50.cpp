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

// Function: sub_002D6C50
// Address: 0x2d6c50 - 0x2d6d00
void sub_002D6C50_0x2d6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6C50_0x2d6c50");
#endif

    switch (ctx->pc) {
        case 0x2d6cdcu: goto label_2d6cdc;
        case 0x2d6ce4u: goto label_2d6ce4;
        default: break;
    }

    ctx->pc = 0x2d6c50u;

    // 0x2d6c50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d6c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d6c54: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d6c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d6c58: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d6c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d6c5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6c5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6c60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d6c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d6c64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2d6c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2d6c68: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2d6c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2d6c6c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2d6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6c70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d6c70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6c74: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2d6c74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d6c78: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2d6c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6c7c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2d6c7cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2d6c80: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2d6c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d6c84: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2d6c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6c88: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2d6c88u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2d6c8c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d6c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d6c90: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x2d6c90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2d6c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d6c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6c98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d6c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6c9c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d6c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ca0: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2d6ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2d6ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ca8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2d6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2d6cac: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x2d6cacu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
    // 0x2d6cb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d6cb4: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2d6cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2d6cb8: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x2d6cb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2d6cbc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x2d6cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x2d6cc0: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x2d6cc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x2d6cc4: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x2d6cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
    // 0x2d6cc8: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x2d6cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x2d6ccc: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x2d6cccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x2d6cd0: 0x78e30030  lq          $v1, 0x30($a3)
    ctx->pc = 0x2d6cd0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x2d6cd4: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2D6CD4u;
    SET_GPR_U32(ctx, 31, 0x2D6CDCu);
    ctx->pc = 0x2D6CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6CD4u;
    // 0x2d6cd8: 0x7e030030  sq          $v1, 0x30($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2D6CD4u, 0x2D6CDCu)) {
        return;
    }
    ctx->pc = 0x2D6CDCu;
label_2d6cdc:
    // 0x2d6cdc: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2D6CDCu;
    SET_GPR_U32(ctx, 31, 0x2D6CE4u);
    ctx->pc = 0x2D6CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6CDCu;
    // 0x2d6ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x2D6CDCu, 0x2D6CE4u)) {
        return;
    }
    ctx->pc = 0x2D6CE4u;
label_2d6ce4:
    // 0x2d6ce4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d6ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ce8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d6ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6cec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d6cecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6cf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6CF4u;
        // 0x2d6cf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6CFCu;
    // 0x2d6cfc: 0x0  nop
    ctx->pc = 0x2d6cfcu;
    // NOP
    ctx->pc = 0x2d6d00u;
}
