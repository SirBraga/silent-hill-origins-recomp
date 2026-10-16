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

// Function: sub_001E05B0
// Address: 0x1e05b0 - 0x1e0628
void sub_001E05B0_0x1e05b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E05B0_0x1e05b0");
#endif

    switch (ctx->pc) {
        case 0x1e05b0u: goto label_1e05b0;
        case 0x1e05b4u: goto label_1e05b4;
        case 0x1e05b8u: goto label_1e05b8;
        case 0x1e05bcu: goto label_1e05bc;
        case 0x1e05c0u: goto label_1e05c0;
        case 0x1e05c4u: goto label_1e05c4;
        case 0x1e05c8u: goto label_1e05c8;
        case 0x1e05ccu: goto label_1e05cc;
        case 0x1e05d0u: goto label_1e05d0;
        case 0x1e05d4u: goto label_1e05d4;
        case 0x1e05d8u: goto label_1e05d8;
        case 0x1e05dcu: goto label_1e05dc;
        case 0x1e05e0u: goto label_1e05e0;
        case 0x1e05e4u: goto label_1e05e4;
        case 0x1e05e8u: goto label_1e05e8;
        case 0x1e05ecu: goto label_1e05ec;
        case 0x1e05f0u: goto label_1e05f0;
        case 0x1e05f4u: goto label_1e05f4;
        case 0x1e05f8u: goto label_1e05f8;
        case 0x1e05fcu: goto label_1e05fc;
        case 0x1e0600u: goto label_1e0600;
        case 0x1e0604u: goto label_1e0604;
        case 0x1e0608u: goto label_1e0608;
        case 0x1e060cu: goto label_1e060c;
        case 0x1e0610u: goto label_1e0610;
        case 0x1e0614u: goto label_1e0614;
        case 0x1e0618u: goto label_1e0618;
        case 0x1e061cu: goto label_1e061c;
        case 0x1e0620u: goto label_1e0620;
        case 0x1e0624u: goto label_1e0624;
        default: break;
    }

    ctx->pc = 0x1e05b0u;

label_1e05b0:
    // 0x1e05b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e05b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e05b4:
    // 0x1e05b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e05b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e05b8:
    // 0x1e05b8: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1e05b8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
label_1e05bc:
    // 0x1e05bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e05bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e05c0:
    // 0x1e05c0: 0x8e22e6d4  lw          $v0, -0x192C($s1)
    ctx->pc = 0x1e05c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960852)));
label_1e05c4:
    // 0x1e05c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e05c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e05c8:
    // 0x1e05c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e05c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e05cc:
    // 0x1e05cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e05ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e05d0:
    // 0x1e05d0: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x1e05d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1e05d4:
    // 0x1e05d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1e05d8:
    if (ctx->pc == 0x1E05D8u) {
        ctx->pc = 0x1E05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D4u;
        // 0x1e05d8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E05DCu;
        goto label_1e05dc;
    }
    ctx->pc = 0x1E05D4u;
    {
        const bool branch_taken_0x1e05d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05D4u;
        // 0x1e05d8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05d4) {
            ctx->pc = 0x1E05E8u;
            goto label_1e05e8;
        }
    }
    ctx->pc = 0x1E05DCu;
label_1e05dc:
    // 0x1e05dc: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x1e05dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_1e05e0:
    // 0x1e05e0: 0x40f809  jalr        $v0
label_1e05e4:
    if (ctx->pc == 0x1E05E4u) {
        ctx->pc = 0x1E05E8u;
        goto label_1e05e8;
    }
    ctx->pc = 0x1E05E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E05E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E05E0u, 0x1E05E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E05E8u;
label_1e05e8:
    // 0x1e05e8: 0x8e22e6d4  lw          $v0, -0x192C($s1)
    ctx->pc = 0x1e05e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960852)));
label_1e05ec:
    // 0x1e05ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e05ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e05f0:
    // 0x1e05f0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1e05f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1e05f4:
    // 0x1e05f4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_1e05f8:
    if (ctx->pc == 0x1E05F8u) {
        ctx->pc = 0x1E05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F4u;
        // 0x1e05f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E05FCu;
        goto label_1e05fc;
    }
    ctx->pc = 0x1E05F4u;
    {
        const bool branch_taken_0x1e05f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E05F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E05F4u;
        // 0x1e05f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e05f4) {
            ctx->pc = 0x1E0614u;
            goto label_1e0614;
        }
    }
    ctx->pc = 0x1E05FCu;
label_1e05fc:
    // 0x1e05fc: 0xc09d90a  jal         func_276428
label_1e0600:
    if (ctx->pc == 0x1E0600u) {
        ctx->pc = 0x1E0604u;
        goto label_1e0604;
    }
    ctx->pc = 0x1E05FCu;
    SET_GPR_U32(ctx, 31, 0x1E0604u);
    ctx->pc = 0x276428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276428u, 0x1E05FCu, 0x1E0604u)) {
        return;
    }
    ctx->pc = 0x1E0604u;
label_1e0604:
    // 0x1e0604: 0x8e22e6d4  lw          $v0, -0x192C($s1)
    ctx->pc = 0x1e0604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960852)));
label_1e0608:
    // 0x1e0608: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1e0608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1e060c:
    // 0x1e060c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1e060cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1e0610:
    // 0x1e0610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e0610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e0614:
    // 0x1e0614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e0614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e0618:
    // 0x1e0618: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1e0618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e061c:
    // 0x1e061c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e061cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0620:
    // 0x1e0620: 0x3e00008  jr          $ra
label_1e0624:
    if (ctx->pc == 0x1E0624u) {
        ctx->pc = 0x1E0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0620u;
        // 0x1e0624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E0628u;
        goto label_fallthrough_0x1e0620;
    }
    ctx->pc = 0x1E0620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0620u;
        // 0x1e0624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1e0620:
    ctx->pc = 0x1E0628u;
}
