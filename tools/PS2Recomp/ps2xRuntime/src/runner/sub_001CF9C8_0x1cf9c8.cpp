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

// Function: sub_001CF9C8
// Address: 0x1cf9c8 - 0x1cfa38
void sub_001CF9C8_0x1cf9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF9C8_0x1cf9c8");
#endif

    switch (ctx->pc) {
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa14u: goto label_1cfa14;
        default: break;
    }

    ctx->pc = 0x1cf9c8u;

    // 0x1cf9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf9cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1cf9d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1cf9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1cf9d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf9d8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CF9D8u;
    {
        const bool branch_taken_0x1cf9d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9D8u;
        // 0x1cf9dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9d8) {
            ctx->pc = 0x1CFA1Cu;
            goto label_1cfa1c;
        }
    }
    ctx->pc = 0x1CF9E0u;
    // 0x1cf9e0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1cf9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1cf9e4: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1CF9E4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ECu);
    ctx->pc = 0x1CF9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9E4u;
    // 0x1cf9e8: 0x24a508a8  addiu       $a1, $a1, 0x8A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1CF9E4u, 0x1CF9ECu)) {
        return;
    }
    ctx->pc = 0x1CF9ECu;
label_1cf9ec:
    // 0x1cf9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9f0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1CF9F0u;
    {
        const bool branch_taken_0x1cf9f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9F0u;
        // 0x1cf9f4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9f0) {
            ctx->pc = 0x1CFA24u;
            goto label_1cfa24;
        }
    }
    ctx->pc = 0x1CF9F8u;
    // 0x1cf9f8: 0xc06ce26  jal         func_1B3898
    ctx->pc = 0x1CF9F8u;
    SET_GPR_U32(ctx, 31, 0x1CFA00u);
    ctx->pc = 0x1B3898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3898u, 0x1CF9F8u, 0x1CFA00u)) {
        return;
    }
    ctx->pc = 0x1CFA00u;
label_1cfa00:
    // 0x1cfa00: 0x3c06001d  lui         $a2, 0x1D
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
    // 0x1cfa04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cfa04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfa08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa0c: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1CFA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA14u);
    ctx->pc = 0x1CFA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFA0Cu;
    // 0x1cfa10: 0x24c6fa38  addiu       $a2, $a2, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1CFA0Cu, 0x1CFA14u)) {
        return;
    }
    ctx->pc = 0x1CFA14u;
label_1cfa14:
    // 0x1cfa14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CFA14u;
    {
        const bool branch_taken_0x1cfa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA14u;
        // 0x1cfa18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa14) {
            ctx->pc = 0x1CFA24u;
            goto label_1cfa24;
        }
    }
    ctx->pc = 0x1CFA1Cu;
label_1cfa1c:
    // 0x1cfa1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfa1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfa20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1cfa20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa24:
    // 0x1cfa24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1cfa24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cfa28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1cfa28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cfa2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfa2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfa30: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFA30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFA30u;
        // 0x1cfa34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFA30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFA38u;
}
