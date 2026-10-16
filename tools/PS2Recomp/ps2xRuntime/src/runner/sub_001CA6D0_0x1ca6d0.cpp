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

// Function: sub_001CA6D0
// Address: 0x1ca6d0 - 0x1ca778
void sub_001CA6D0_0x1ca6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA6D0_0x1ca6d0");
#endif

    switch (ctx->pc) {
        case 0x1ca700u: goto label_1ca700;
        case 0x1ca73cu: goto label_1ca73c;
        default: break;
    }

    ctx->pc = 0x1ca6d0u;

    // 0x1ca6d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ca6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ca6d4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ca6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ca6d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ca6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ca6dc: 0x249002ec  addiu       $s0, $a0, 0x2EC
    ctx->pc = 0x1ca6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 748));
    // 0x1ca6e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ca6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ca6e4: 0x24910304  addiu       $s1, $a0, 0x304
    ctx->pc = 0x1ca6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 772));
    // 0x1ca6e8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ca6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ca6ec: 0x24920310  addiu       $s2, $a0, 0x310
    ctx->pc = 0x1ca6ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x1ca6f0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ca6f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ca6f4: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1ca6f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ca6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca6fc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1ca6fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1ca700:
    // 0x1ca700: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1ca700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca704: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CA704u;
    {
        const bool branch_taken_0x1ca704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca704) {
            ctx->pc = 0x1CA708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA704u;
            // 0x1ca708: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA748u;
            goto label_1ca748;
        }
    }
    ctx->pc = 0x1CA70Cu;
    // 0x1ca70c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1ca70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1ca710: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ca710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ca714: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1ca714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1ca718: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1ca718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1ca71c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1ca71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1ca720: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1ca720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1ca724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ca724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca728: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x1ca728u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1ca72c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1ca72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1ca730: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x1ca730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x1ca734: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1CA734u;
    SET_GPR_U32(ctx, 31, 0x1CA73Cu);
    ctx->pc = 0x1CA738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA734u;
    // 0x1ca738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1CA734u, 0x1CA73Cu)) {
        return;
    }
    ctx->pc = 0x1CA73Cu;
label_1ca73c:
    // 0x1ca73c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CA73Cu;
    {
        const bool branch_taken_0x1ca73c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca73c) {
            ctx->pc = 0x1CA740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA73Cu;
            // 0x1ca740: 0xae000018  sw          $zero, 0x18($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA744u;
            goto label_1ca744;
        }
    }
    ctx->pc = 0x1CA744u;
label_1ca744:
    // 0x1ca744: 0x26520028  addiu       $s2, $s2, 0x28
    ctx->pc = 0x1ca744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
label_1ca748:
    // 0x1ca748: 0x26310028  addiu       $s1, $s1, 0x28
    ctx->pc = 0x1ca748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    // 0x1ca74c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1ca74cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1ca750: 0x661ffeb  bgez        $s3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x1CA750u;
    {
        const bool branch_taken_0x1ca750 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x1CA754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA750u;
        // 0x1ca754: 0x26100028  addiu       $s0, $s0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca750) {
            ctx->pc = 0x1CA700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ca700;
        }
    }
    ctx->pc = 0x1CA758u;
    // 0x1ca758: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ca758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ca75c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ca75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ca760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ca760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ca764: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ca764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca76c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ca76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ca770: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA770u;
        // 0x1ca774: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA778u;
}
