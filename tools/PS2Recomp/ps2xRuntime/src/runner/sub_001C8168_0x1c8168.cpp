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

// Function: sub_001C8168
// Address: 0x1c8168 - 0x1c81f0
void sub_001C8168_0x1c8168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C8168_0x1c8168");
#endif

    switch (ctx->pc) {
        case 0x1c819cu: goto label_1c819c;
        case 0x1c81b4u: goto label_1c81b4;
        case 0x1c81ccu: goto label_1c81cc;
        case 0x1c81dcu: goto label_1c81dc;
        default: break;
    }

    ctx->pc = 0x1c8168u;

    // 0x1c8168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c8168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c816c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c8170: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c8170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c8174: 0x2442f5c0  addiu       $v0, $v0, -0xA40
    ctx->pc = 0x1c8174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964672));
    // 0x1c8178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c8178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c817c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c817cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c8180: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c8180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c8184: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c8184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c8188: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1c8188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c818c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C818Cu;
    {
        const bool branch_taken_0x1c818c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C8190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C818Cu;
        // 0x1c8190: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c818c) {
            ctx->pc = 0x1C81A0u;
            goto label_1c81a0;
        }
    }
    ctx->pc = 0x1C8194u;
    // 0x1c8194: 0xc06db5a  jal         func_1B6D68
    ctx->pc = 0x1C8194u;
    SET_GPR_U32(ctx, 31, 0x1C819Cu);
    ctx->pc = 0x1C8198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C8194u;
    // 0x1c8198: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6D68u, 0x1C8194u, 0x1C819Cu)) {
        return;
    }
    ctx->pc = 0x1C819Cu;
label_1c819c:
    // 0x1c819c: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x1c819cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
label_1c81a0:
    // 0x1c81a0: 0x8e04028c  lw          $a0, 0x28C($s0)
    ctx->pc = 0x1c81a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
    // 0x1c81a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C81A4u;
    {
        const bool branch_taken_0x1c81a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81a4) {
            ctx->pc = 0x1C81A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81A4u;
            // 0x1c81a8: 0x8e040294  lw          $a0, 0x294($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81BCu;
            goto label_1c81bc;
        }
    }
    ctx->pc = 0x1C81ACu;
    // 0x1c81ac: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C81ACu;
    SET_GPR_U32(ctx, 31, 0x1C81B4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C81ACu, 0x1C81B4u)) {
        return;
    }
    ctx->pc = 0x1C81B4u;
label_1c81b4:
    // 0x1c81b4: 0xae00028c  sw          $zero, 0x28C($s0)
    ctx->pc = 0x1c81b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 652), GPR_U32(ctx, 0));
    // 0x1c81b8: 0x8e040294  lw          $a0, 0x294($s0)
    ctx->pc = 0x1c81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
label_1c81bc:
    // 0x1c81bc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C81BCu;
    {
        const bool branch_taken_0x1c81bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c81bc) {
            ctx->pc = 0x1C81C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C81BCu;
            // 0x1c81c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C81D4u;
            goto label_1c81d4;
        }
    }
    ctx->pc = 0x1C81C4u;
    // 0x1c81c4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1C81C4u;
    SET_GPR_U32(ctx, 31, 0x1C81CCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1C81C4u, 0x1C81CCu)) {
        return;
    }
    ctx->pc = 0x1C81CCu;
label_1c81cc:
    // 0x1c81cc: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x1c81ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x1c81d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c81d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c81d4:
    // 0x1c81d4: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C81D4u;
    SET_GPR_U32(ctx, 31, 0x1C81DCu);
    ctx->pc = 0x1C81D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C81D4u;
    // 0x1c81d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C81D4u, 0x1C81DCu)) {
        return;
    }
    ctx->pc = 0x1C81DCu;
label_1c81dc:
    // 0x1c81dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c81dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c81e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c81e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c81e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c81e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c81e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C81E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C81ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C81E8u;
        // 0x1c81ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C81E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C81F0u;
}
