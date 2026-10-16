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

// Function: sub_001DA998
// Address: 0x1da998 - 0x1daa58
void sub_001DA998_0x1da998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA998_0x1da998");
#endif

    switch (ctx->pc) {
        case 0x1daa48u: goto label_1daa48;
        default: break;
    }

    ctx->pc = 0x1da998u;

    // 0x1da998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1da998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1da99c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1da9a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1da9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1da9a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1da9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1da9a8: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x1da9a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1da9ac: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1DA9ACu;
    {
        const bool branch_taken_0x1da9ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9ACu;
        // 0x1da9b0: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9ac) {
            ctx->pc = 0x1DA9D4u;
            goto label_1da9d4;
        }
    }
    ctx->pc = 0x1DA9B4u;
    // 0x1da9b4: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x1da9b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x1da9b8: 0x3421aaa8  ori         $at, $at, 0xAAA8
    ctx->pc = 0x1da9b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43688);
    // 0x1da9bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1da9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1da9c0: 0x3c013fe3  lui         $at, 0x3FE3
    ctx->pc = 0x1da9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16355 << 16));
    // 0x1da9c4: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x1da9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x1da9c8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1da9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1da9cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1DA9CCu;
    {
        const bool branch_taken_0x1da9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA9CCu;
        // 0x1da9d0: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9cc) {
            ctx->pc = 0x1DAA08u;
            goto label_1daa08;
        }
    }
    ctx->pc = 0x1DA9D4u;
label_1da9d4:
    // 0x1da9d4: 0x46036800  add.s       $f0, $f13, $f3
    ctx->pc = 0x1da9d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[13], ctx->f[3]);
    // 0x1da9d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1da9dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1da9dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1da9e0: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1da9e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1da9e4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1da9e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1da9e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1da9e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1da9ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1da9ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1da9f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1da9f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1da9f4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1da9f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1da9f8: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x1da9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
    // 0x1da9fc: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1da9fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1daa00: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1daa00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1daa04: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1daa04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1daa08:
    // 0x1daa08: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1daa08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1daa0c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1daa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1daa10: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1daa10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1daa14: 0x0  nop
    ctx->pc = 0x1daa14u;
    // NOP
    // 0x1daa18: 0x0  nop
    ctx->pc = 0x1daa18u;
    // NOP
    // 0x1daa1c: 0x46030043  div.s       $f1, $f0, $f3
    ctx->pc = 0x1daa1cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[3]);
    // 0x1daa20: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1daa20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daa24: 0x0  nop
    ctx->pc = 0x1daa24u;
    // NOP
    // 0x1daa28: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1DAA28u;
    {
        const bool branch_taken_0x1daa28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA28u;
        // 0x1daa2c: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa28) {
            ctx->pc = 0x1DAA48u;
            goto label_1daa48;
        }
    }
    ctx->pc = 0x1DAA30u;
    // 0x1daa30: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1daa30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1daa34: 0x0  nop
    ctx->pc = 0x1daa34u;
    // NOP
    // 0x1daa38: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1DAA38u;
    {
        const bool branch_taken_0x1daa38 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA38u;
        // 0x1daa3c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa38) {
            ctx->pc = 0x1DAA48u;
            goto label_1daa48;
        }
    }
    ctx->pc = 0x1DAA40u;
    // 0x1daa40: 0xc089456  jal         func_225158
    ctx->pc = 0x1DAA40u;
    SET_GPR_U32(ctx, 31, 0x1DAA48u);
    ctx->pc = 0x1DAA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAA40u;
    // 0x1daa44: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x1DAA40u, 0x1DAA48u)) {
        return;
    }
    ctx->pc = 0x1DAA48u;
label_1daa48:
    // 0x1daa48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1daa48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1daa4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DAA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAA4Cu;
        // 0x1daa50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DAA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DAA54u;
    // 0x1daa54: 0x0  nop
    ctx->pc = 0x1daa54u;
    // NOP
    ctx->pc = 0x1daa58u;
}
