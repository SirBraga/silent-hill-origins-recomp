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

// Function: sub_0013D5B8
// Address: 0x13d5b8 - 0x13d658
void sub_0013D5B8_0x13d5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D5B8_0x13d5b8");
#endif

    switch (ctx->pc) {
        case 0x13d604u: goto label_13d604;
        case 0x13d618u: goto label_13d618;
        case 0x13d630u: goto label_13d630;
        case 0x13d648u: goto label_13d648;
        default: break;
    }

    ctx->pc = 0x13d5b8u;

    // 0x13d5b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13d5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13d5bc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x13d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x13d5c0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13d5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13d5c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13d5c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d5cc: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x13D5CCu;
    {
        const bool branch_taken_0x13d5cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5CCu;
        // 0x13d5d0: 0x8c448bc4  lw          $a0, -0x743C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937540)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5cc) {
            ctx->pc = 0x13D648u;
            goto label_13d648;
        }
    }
    ctx->pc = 0x13D5D4u;
    // 0x13d5d4: 0x8ca5007c  lw          $a1, 0x7C($a1)
    ctx->pc = 0x13d5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x13d5d8: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13D5D8u;
    {
        const bool branch_taken_0x13d5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5d8) {
            ctx->pc = 0x13D5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D5D8u;
            // 0x13d5dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D5E4u;
            goto label_13d5e4;
        }
    }
    ctx->pc = 0x13D5E0u;
    // 0x13d5e0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x13d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13d5e4:
    // 0x13d5e4: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13D5E4u;
    {
        const bool branch_taken_0x13d5e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13d5e4) {
            ctx->pc = 0x13D5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D5E4u;
            // 0x13d5e8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D64Cu;
            goto label_13d64c;
        }
    }
    ctx->pc = 0x13D5ECu;
    // 0x13d5ec: 0x8e020178  lw          $v0, 0x178($s0)
    ctx->pc = 0x13d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 376)));
    // 0x13d5f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D5F0u;
    {
        const bool branch_taken_0x13d5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D5F0u;
        // 0x13d5f4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d5f0) {
            ctx->pc = 0x13D60Cu;
            goto label_13d60c;
        }
    }
    ctx->pc = 0x13D5F8u;
    // 0x13d5f8: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x13d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x13d5fc: 0xc066552  jal         func_199548
    ctx->pc = 0x13D5FCu;
    SET_GPR_U32(ctx, 31, 0x13D604u);
    ctx->pc = 0x13D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D5FCu;
    // 0x13d600: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199548u, 0x13D5FCu, 0x13D604u)) {
        return;
    }
    ctx->pc = 0x13D604u;
label_13d604:
    // 0x13d604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13D604u;
    {
        const bool branch_taken_0x13d604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D604u;
        // 0x13d608: 0x8e020190  lw          $v0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d604) {
            ctx->pc = 0x13D61Cu;
            goto label_13d61c;
        }
    }
    ctx->pc = 0x13D60Cu;
label_13d60c:
    // 0x13d60c: 0x8e0600f4  lw          $a2, 0xF4($s0)
    ctx->pc = 0x13d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x13d610: 0xc066552  jal         func_199548
    ctx->pc = 0x13D610u;
    SET_GPR_U32(ctx, 31, 0x13D618u);
    ctx->pc = 0x13D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D610u;
    // 0x13d614: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199548u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199548u, 0x13D610u, 0x13D618u)) {
        return;
    }
    ctx->pc = 0x13D618u;
label_13d618:
    // 0x13d618: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x13d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_13d61c:
    // 0x13d61c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D61Cu;
    {
        const bool branch_taken_0x13d61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D61Cu;
        // 0x13d620: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d61c) {
            ctx->pc = 0x13D638u;
            goto label_13d638;
        }
    }
    ctx->pc = 0x13D624u;
    // 0x13d624: 0x8e0500f4  lw          $a1, 0xF4($s0)
    ctx->pc = 0x13d624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x13d628: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x13D628u;
    SET_GPR_U32(ctx, 31, 0x13D630u);
    ctx->pc = 0x13D62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D628u;
    // 0x13d62c: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x13D628u, 0x13D630u)) {
        return;
    }
    ctx->pc = 0x13D630u;
label_13d630:
    // 0x13d630: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13D630u;
    {
        const bool branch_taken_0x13d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D630u;
        // 0x13d634: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d630) {
            ctx->pc = 0x13D64Cu;
            goto label_13d64c;
        }
    }
    ctx->pc = 0x13D638u;
label_13d638:
    // 0x13d638: 0x8e0500f4  lw          $a1, 0xF4($s0)
    ctx->pc = 0x13d638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x13d63c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13d63cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13d640: 0xc0ab3b8  jal         func_2ACEE0
    ctx->pc = 0x13D640u;
    SET_GPR_U32(ctx, 31, 0x13D648u);
    ctx->pc = 0x13D644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D640u;
    // 0x13d644: 0x8ca40024  lw          $a0, 0x24($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACEE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ACEE0u, 0x13D640u, 0x13D648u)) {
        return;
    }
    ctx->pc = 0x13D648u;
label_13d648:
    // 0x13d648: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13d648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13d64c:
    // 0x13d64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d650: 0x3e00008  jr          $ra
    ctx->pc = 0x13D650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D650u;
        // 0x13d654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D658u;
}
