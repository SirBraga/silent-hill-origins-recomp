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

// Function: sub_002A8AD8
// Address: 0x2a8ad8 - 0x2a8b38
void sub_002A8AD8_0x2a8ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8AD8_0x2a8ad8");
#endif

    switch (ctx->pc) {
        case 0x2a8b08u: goto label_2a8b08;
        case 0x2a8b1cu: goto label_2a8b1c;
        default: break;
    }

    ctx->pc = 0x2a8ad8u;

    // 0x2a8ad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a8ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8adc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x2a8adcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x2a8ae0: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2a8ae0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a8ae4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a8ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2a8ae8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2a8ae8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a8aec: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2a8aecu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2a8af0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a8af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a8af4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2a8af4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a8af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a8af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a8afc: 0x34c60900  ori         $a2, $a2, 0x900
    ctx->pc = 0x2a8afcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2304);
    // 0x2a8b00: 0xc0ad2b4  jal         func_2B4AD0
    ctx->pc = 0x2A8B00u;
    SET_GPR_U32(ctx, 31, 0x2A8B08u);
    ctx->pc = 0x2A8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B00u;
    // 0x2a8b04: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4AD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4AD0u, 0x2A8B00u, 0x2A8B08u)) {
        return;
    }
    ctx->pc = 0x2A8B08u;
label_2a8b08:
    // 0x2a8b08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a8b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a8b0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a8b10: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2a8b10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2a8b14: 0xc0aa2ce  jal         func_2A8B38
    ctx->pc = 0x2A8B14u;
    SET_GPR_U32(ctx, 31, 0x2A8B1Cu);
    ctx->pc = 0x2A8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A8B14u;
    // 0x2a8b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8B38u, 0x2A8B14u, 0x2A8B1Cu)) {
        return;
    }
    ctx->pc = 0x2A8B1Cu;
label_2a8b1c:
    // 0x2a8b1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a8b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a8b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8b24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a8b24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8b28: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2a8b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a8b2c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2a8b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a8b30: 0x3e00008  jr          $ra
    ctx->pc = 0x2A8B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A8B30u;
        // 0x2a8b34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A8B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A8B38u;
}
