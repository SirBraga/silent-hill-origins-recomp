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

// Function: sub_00119DF0
// Address: 0x119df0 - 0x119e78
void sub_00119DF0_0x119df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119DF0_0x119df0");
#endif

    switch (ctx->pc) {
        case 0x119e08u: goto label_119e08;
        case 0x119e44u: goto label_119e44;
        case 0x119e4cu: goto label_119e4c;
        case 0x119e54u: goto label_119e54;
        case 0x119e5cu: goto label_119e5c;
        case 0x119e64u: goto label_119e64;
        default: break;
    }

    ctx->pc = 0x119df0u;

    // 0x119df0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119df4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x119df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119df8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x119df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x119dfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119e00: 0xc044624  jal         func_111890
    ctx->pc = 0x119E00u;
    SET_GPR_U32(ctx, 31, 0x119E08u);
    ctx->pc = 0x119E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E00u;
    // 0x119e04: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111890u, 0x119E00u, 0x119E08u)) {
        return;
    }
    ctx->pc = 0x119E08u;
label_119e08:
    // 0x119e08: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x119e08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x119e0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x119e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x119e10: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x119e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x119e14: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x119e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x119e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x119e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x119e1c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x119e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x119e20: 0x2463ae90  addiu       $v1, $v1, -0x5170
    ctx->pc = 0x119e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946448));
    // 0x119e24: 0x2442ae70  addiu       $v0, $v0, -0x5190
    ctx->pc = 0x119e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946416));
    // 0x119e28: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x119e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x119e2c: 0x26040098  addiu       $a0, $s0, 0x98
    ctx->pc = 0x119e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
    // 0x119e30: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x119e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x119e34: 0xe6010094  swc1        $f1, 0x94($s0)
    ctx->pc = 0x119e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x119e38: 0xe6010090  swc1        $f1, 0x90($s0)
    ctx->pc = 0x119e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x119e3c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x119E3Cu;
    SET_GPR_U32(ctx, 31, 0x119E44u);
    ctx->pc = 0x119E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E3Cu;
    // 0x119e40: 0xae02003c  sw          $v0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x119E3Cu, 0x119E44u)) {
        return;
    }
    ctx->pc = 0x119E44u;
label_119e44:
    // 0x119e44: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x119E44u;
    SET_GPR_U32(ctx, 31, 0x119E4Cu);
    ctx->pc = 0x119E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E44u;
    // 0x119e48: 0x260400a0  addiu       $a0, $s0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x119E44u, 0x119E4Cu)) {
        return;
    }
    ctx->pc = 0x119E4Cu;
label_119e4c:
    // 0x119e4c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x119E4Cu;
    SET_GPR_U32(ctx, 31, 0x119E54u);
    ctx->pc = 0x119E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E4Cu;
    // 0x119e50: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x119E4Cu, 0x119E54u)) {
        return;
    }
    ctx->pc = 0x119E54u;
label_119e54:
    // 0x119e54: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x119E54u;
    SET_GPR_U32(ctx, 31, 0x119E5Cu);
    ctx->pc = 0x119E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E54u;
    // 0x119e58: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x119E54u, 0x119E5Cu)) {
        return;
    }
    ctx->pc = 0x119E5Cu;
label_119e5c:
    // 0x119e5c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x119E5Cu;
    SET_GPR_U32(ctx, 31, 0x119E64u);
    ctx->pc = 0x119E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119E5Cu;
    // 0x119e60: 0x260400b8  addiu       $a0, $s0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x119E5Cu, 0x119E64u)) {
        return;
    }
    ctx->pc = 0x119E64u;
label_119e64:
    // 0x119e64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x119e64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119e6c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x119e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119e70: 0x3e00008  jr          $ra
    ctx->pc = 0x119E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119E70u;
        // 0x119e74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119E70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119E78u;
}
