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

// Function: sub_00307280
// Address: 0x307280 - 0x307310
void sub_00307280_0x307280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307280_0x307280");
#endif

    switch (ctx->pc) {
        case 0x3072b4u: goto label_3072b4;
        case 0x3072c0u: goto label_3072c0;
        default: break;
    }

    ctx->pc = 0x307280u;

    // 0x307280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x307280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x307284: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x307284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x307288: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x307288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30728c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x30728cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307290: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307294: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x307294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307298: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x307298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30729c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30729cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072a0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3072a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3072a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3072a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3072a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3072ac: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x3072ACu;
    SET_GPR_U32(ctx, 31, 0x3072B4u);
    ctx->pc = 0x3072B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072ACu;
    // 0x3072b0: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x3072ACu, 0x3072B4u)) {
        return;
    }
    ctx->pc = 0x3072B4u;
label_3072b4:
    // 0x3072b4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x3072b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3072b8: 0xc08bdde  jal         func_22F778
    ctx->pc = 0x3072B8u;
    SET_GPR_U32(ctx, 31, 0x3072C0u);
    ctx->pc = 0x3072BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3072B8u;
    // 0x3072bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22F778u, 0x3072B8u, 0x3072C0u)) {
        return;
    }
    ctx->pc = 0x3072C0u;
label_3072c0:
    // 0x3072c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3072c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3072c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3072c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3072c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3072c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3072cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3072ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3072d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3072d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3072d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3072d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3072d8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x3072d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3072dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3072dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3072e0: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x3072e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x3072e4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3072e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3072e8: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x3072e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x3072ec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3072ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3072f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3072f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3072f4: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3072f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x3072f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3072f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3072fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3072fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307300: 0xac730014  sw          $s3, 0x14($v1)
    ctx->pc = 0x307300u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 19));
    // 0x307304: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x307304u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x307308: 0x3e00008  jr          $ra
    ctx->pc = 0x307308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307308u;
        // 0x30730c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x307308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307310u;
}
