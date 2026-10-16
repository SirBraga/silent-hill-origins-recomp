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

// Function: sub_002860B8
// Address: 0x2860b8 - 0x286128
void sub_002860B8_0x2860b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002860B8_0x2860b8");
#endif

    switch (ctx->pc) {
        case 0x286100u: goto label_286100;
        case 0x28610cu: goto label_28610c;
        default: break;
    }

    ctx->pc = 0x2860b8u;

    // 0x2860b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2860b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2860bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2860bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2860c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2860c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2860c4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2860c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2860c8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2860C8u;
    {
        const bool branch_taken_0x2860c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2860c8) {
            ctx->pc = 0x2860CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2860C8u;
            // 0x2860cc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2860E4u;
            goto label_2860e4;
        }
    }
    ctx->pc = 0x2860D0u;
    // 0x2860d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2860d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2860d4: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2860D4u;
    {
        const bool branch_taken_0x2860d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2860d4) {
            ctx->pc = 0x2860D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2860D4u;
            // 0x2860d8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2860ECu;
            goto label_2860ec;
        }
    }
    ctx->pc = 0x2860DCu;
    // 0x2860dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2860DCu;
    {
        const bool branch_taken_0x2860dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860DCu;
        // 0x2860e0: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860dc) {
            ctx->pc = 0x2860F4u;
            goto label_2860f4;
        }
    }
    ctx->pc = 0x2860E4u;
label_2860e4:
    // 0x2860e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2860E4u;
    {
        const bool branch_taken_0x2860e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860E4u;
        // 0x2860e8: 0x2442fffe  addiu       $v0, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860e4) {
            ctx->pc = 0x286110u;
            goto label_286110;
        }
    }
    ctx->pc = 0x2860ECu;
label_2860ec:
    // 0x2860ec: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2860ECu;
    {
        const bool branch_taken_0x2860ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2860ECu;
        // 0x2860f0: 0x2442fffd  addiu       $v0, $v0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860ec) {
            ctx->pc = 0x286110u;
            goto label_286110;
        }
    }
    ctx->pc = 0x2860F4u;
label_2860f4:
    // 0x2860f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2860f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2860f8: 0xc092848  jal         func_24A120
    ctx->pc = 0x2860F8u;
    SET_GPR_U32(ctx, 31, 0x286100u);
    ctx->pc = 0x2860FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2860F8u;
    // 0x2860fc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2860F8u, 0x286100u)) {
        return;
    }
    ctx->pc = 0x286100u;
label_286100:
    // 0x286100: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x286100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286104: 0xc09281a  jal         func_24A068
    ctx->pc = 0x286104u;
    SET_GPR_U32(ctx, 31, 0x28610Cu);
    ctx->pc = 0x286108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286104u;
    // 0x286108: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x286104u, 0x28610Cu)) {
        return;
    }
    ctx->pc = 0x28610Cu;
label_28610c:
    // 0x28610c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28610cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286110:
    // 0x286110: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286114: 0x3e00008  jr          $ra
    ctx->pc = 0x286114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286114u;
        // 0x286118: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28611Cu;
    // 0x28611c: 0x0  nop
    ctx->pc = 0x28611cu;
    // NOP
    // 0x286120: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x286120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x286124: 0x0  nop
    ctx->pc = 0x286124u;
    // NOP
    ctx->pc = 0x286128u;
}
