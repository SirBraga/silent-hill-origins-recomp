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

// Function: sub_0017B250
// Address: 0x17b250 - 0x17b2f0
void sub_0017B250_0x17b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B250_0x17b250");
#endif

    switch (ctx->pc) {
        case 0x17b280u: goto label_17b280;
        case 0x17b29cu: goto label_17b29c;
        case 0x17b2c0u: goto label_17b2c0;
        case 0x17b2dcu: goto label_17b2dc;
        default: break;
    }

    ctx->pc = 0x17b250u;

    // 0x17b250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17b254: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b258: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17b258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17b25c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b25cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b260: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17b264: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x17b264u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b268: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17b268u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b26c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x17b270: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b270u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b278: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17B278u;
    SET_GPR_U32(ctx, 31, 0x17B280u);
    ctx->pc = 0x17B27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B278u;
    // 0x17b27c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17B278u, 0x17B280u)) {
        return;
    }
    ctx->pc = 0x17B280u;
label_17b280:
    // 0x17b280: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b284: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17b284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x17b288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b294: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17B294u;
    SET_GPR_U32(ctx, 31, 0x17B29Cu);
    ctx->pc = 0x17B298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B294u;
    // 0x17b298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17B294u, 0x17B29Cu)) {
        return;
    }
    ctx->pc = 0x17B29Cu;
label_17b29c:
    // 0x17b29c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B29Cu;
    {
        const bool branch_taken_0x17b29c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B29Cu;
        // 0x17b2a0: 0x3c060069  lui         $a2, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b29c) {
            ctx->pc = 0x17B2C0u;
            goto label_17b2c0;
        }
    }
    ctx->pc = 0x17B2A4u;
    // 0x17b2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2a8: 0x24c66ea8  addiu       $a2, $a2, 0x6EA8
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28328));
    // 0x17b2ac: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x17b2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17b2b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b2b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b2b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2b8: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17B2B8u;
    SET_GPR_U32(ctx, 31, 0x17B2C0u);
    ctx->pc = 0x17B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2B8u;
    // 0x17b2bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17B2B8u, 0x17B2C0u)) {
        return;
    }
    ctx->pc = 0x17B2C0u;
label_17b2c0:
    // 0x17b2c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2c4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x17b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x17b2c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17b2c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b2ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b2d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2d4: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17B2D4u;
    SET_GPR_U32(ctx, 31, 0x17B2DCu);
    ctx->pc = 0x17B2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B2D4u;
    // 0x17b2d8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17B2D4u, 0x17B2DCu)) {
        return;
    }
    ctx->pc = 0x17B2DCu;
label_17b2dc:
    // 0x17b2dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17b2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17b2e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17b2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17b2e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B2E8u;
        // 0x17b2ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B2F0u;
}
