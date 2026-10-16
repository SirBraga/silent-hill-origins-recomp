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

// Function: sub_0016B298
// Address: 0x16b298 - 0x16b310
void sub_0016B298_0x16b298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B298_0x16b298");
#endif

    switch (ctx->pc) {
        case 0x16b2c0u: goto label_16b2c0;
        case 0x16b2e4u: goto label_16b2e4;
        case 0x16b2fcu: goto label_16b2fc;
        default: break;
    }

    ctx->pc = 0x16b298u;

    // 0x16b298: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16b298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b29c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x16b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x16b2a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16b2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16b2a4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16B2A4u;
    {
        const bool branch_taken_0x16b2a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x16B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2A4u;
        // 0x16b2a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2a4) {
            ctx->pc = 0x16B2FCu;
            goto label_16b2fc;
        }
    }
    ctx->pc = 0x16B2ACu;
    // 0x16b2ac: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x16B2ACu;
    {
        const bool branch_taken_0x16b2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2ACu;
        // 0x16b2b0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2ac) {
            ctx->pc = 0x16B2ECu;
            goto label_16b2ec;
        }
    }
    ctx->pc = 0x16B2B4u;
    // 0x16b2b4: 0x26104780  addiu       $s0, $s0, 0x4780
    ctx->pc = 0x16b2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18304));
    // 0x16b2b8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x16B2B8u;
    SET_GPR_U32(ctx, 31, 0x16B2C0u);
    ctx->pc = 0x16B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2B8u;
    // 0x16b2bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x16B2B8u, 0x16B2C0u)) {
        return;
    }
    ctx->pc = 0x16B2C0u;
label_16b2c0:
    // 0x16b2c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x16b2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x16b2c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16b2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16b2c8: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x16b2c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x16b2cc: 0xac62f668  sw          $v0, -0x998($v1)
    ctx->pc = 0x16b2ccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF668u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF668u, _value); } while (0);
    // 0x16b2d0: 0x2484f670  addiu       $a0, $a0, -0x990
    ctx->pc = 0x16b2d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964848));
    // 0x16b2d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b2d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b2d8: 0x24c6b310  addiu       $a2, $a2, -0x4CF0
    ctx->pc = 0x16b2d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947600));
    // 0x16b2dc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x16B2DCu;
    SET_GPR_U32(ctx, 31, 0x16B2E4u);
    ctx->pc = 0x16B2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2DCu;
    // 0x16b2e0: 0x2407006c  addiu       $a3, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x16B2DCu, 0x16B2E4u)) {
        return;
    }
    ctx->pc = 0x16B2E4u;
label_16b2e4:
    // 0x16b2e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16B2E4u;
    {
        const bool branch_taken_0x16b2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B2E4u;
        // 0x16b2e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b2e4) {
            ctx->pc = 0x16B300u;
            goto label_16b300;
        }
    }
    ctx->pc = 0x16B2ECu;
label_16b2ec:
    // 0x16b2ec: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16b2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x16b2f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x16b2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b2f4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x16B2F4u;
    SET_GPR_U32(ctx, 31, 0x16B2FCu);
    ctx->pc = 0x16B2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B2F4u;
    // 0x16b2f8: 0x2484f670  addiu       $a0, $a0, -0x990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x16B2F4u, 0x16B2FCu)) {
        return;
    }
    ctx->pc = 0x16B2FCu;
label_16b2fc:
    // 0x16b2fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16b2fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16b300:
    // 0x16b300: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16b300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b304: 0x3e00008  jr          $ra
    ctx->pc = 0x16B304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B304u;
        // 0x16b308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B30Cu;
    // 0x16b30c: 0x0  nop
    ctx->pc = 0x16b30cu;
    // NOP
    ctx->pc = 0x16b310u;
}
