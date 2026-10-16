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

// Function: sub_001E3260
// Address: 0x1e3260 - 0x1e3300
void sub_001E3260_0x1e3260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E3260_0x1e3260");
#endif

    switch (ctx->pc) {
        case 0x1e32f0u: goto label_1e32f0;
        default: break;
    }

    ctx->pc = 0x1e3260u;

    // 0x1e3260: 0x3c0244a0  lui         $v0, 0x44A0
    ctx->pc = 0x1e3260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17568 << 16));
    // 0x1e3264: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x1e3264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
    // 0x1e3268: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1e3268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1e326c: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1e326cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1e3270: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1e3270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1e3274: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1e3274u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1e3278: 0x3c09001e  lui         $t1, 0x1E
    ctx->pc = 0x1e3278u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)30 << 16));
    // 0x1e327c: 0x3c0a001e  lui         $t2, 0x1E
    ctx->pc = 0x1e327cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)30 << 16));
    // 0x1e3280: 0x3c0b001e  lui         $t3, 0x1E
    ctx->pc = 0x1e3280u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)30 << 16));
    // 0x1e3284: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e3288: 0x240c0030  addiu       $t4, $zero, 0x30
    ctx->pc = 0x1e3288u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1e328c: 0x24632bb8  addiu       $v1, $v1, 0x2BB8
    ctx->pc = 0x1e328cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11192));
    // 0x1e3290: 0x24a52d20  addiu       $a1, $a1, 0x2D20
    ctx->pc = 0x1e3290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11552));
    // 0x1e3294: 0x24c63300  addiu       $a2, $a2, 0x3300
    ctx->pc = 0x1e3294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13056));
    // 0x1e3298: 0x24e730e0  addiu       $a3, $a3, 0x30E0
    ctx->pc = 0x1e3298u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12512));
    // 0x1e329c: 0x25082f38  addiu       $t0, $t0, 0x2F38
    ctx->pc = 0x1e329cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12088));
    // 0x1e32a0: 0x252933f8  addiu       $t1, $t1, 0x33F8
    ctx->pc = 0x1e32a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 13304));
    // 0x1e32a4: 0x254a3338  addiu       $t2, $t2, 0x3338
    ctx->pc = 0x1e32a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 13112));
    // 0x1e32a8: 0x256b34b8  addiu       $t3, $t3, 0x34B8
    ctx->pc = 0x1e32a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 13496));
    // 0x1e32ac: 0x34427195  ori         $v0, $v0, 0x7195
    ctx->pc = 0x1e32acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29077);
    // 0x1e32b0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e32b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e32b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1e32b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e32b8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1e32b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1e32bc: 0xafac0004  sw          $t4, 0x4($sp)
    ctx->pc = 0x1e32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 12));
    // 0x1e32c0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x1e32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x1e32c4: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1e32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1e32c8: 0xafa60014  sw          $a2, 0x14($sp)
    ctx->pc = 0x1e32c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
    // 0x1e32cc: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x1e32ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x1e32d0: 0xafa8001c  sw          $t0, 0x1C($sp)
    ctx->pc = 0x1e32d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 8));
    // 0x1e32d4: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1e32d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
    // 0x1e32d8: 0xafaa0024  sw          $t2, 0x24($sp)
    ctx->pc = 0x1e32d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 10));
    // 0x1e32dc: 0xafab0028  sw          $t3, 0x28($sp)
    ctx->pc = 0x1e32dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 11));
    // 0x1e32e0: 0xafac0008  sw          $t4, 0x8($sp)
    ctx->pc = 0x1e32e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 12));
    // 0x1e32e4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1e32e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1e32e8: 0xc09d73e  jal         func_275CF8
    ctx->pc = 0x1E32E8u;
    SET_GPR_U32(ctx, 31, 0x1E32F0u);
    ctx->pc = 0x1E32ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E32E8u;
    // 0x1e32ec: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275CF8u, 0x1E32E8u, 0x1E32F0u)) {
        return;
    }
    ctx->pc = 0x1E32F0u;
label_1e32f0:
    // 0x1e32f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e32f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e32f4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1e32f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e32f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E32F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E32FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E32F8u;
        // 0x1e32fc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E32F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3300u;
}
