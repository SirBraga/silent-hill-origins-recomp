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

// Function: sub_00151D7C
// Address: 0x151d7c - 0x151e00
void sub_00151D7C_0x151d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151D7C_0x151d7c");
#endif

    switch (ctx->pc) {
        case 0x151d80u: goto label_151d80;
        case 0x151d88u: goto label_151d88;
        case 0x151de8u: goto label_151de8;
        case 0x151df8u: goto label_151df8;
        default: break;
    }

    ctx->pc = 0x151d7cu;

    // 0x151d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151d80:
    // 0x151d80: 0x3e00008  jr          $ra
    ctx->pc = 0x151D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D80u;
        // 0x151d84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151D88u;
label_151d88:
    // 0x151d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151d8c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x151d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151d94: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x151d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x151d98: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x151D98u;
    {
        const bool branch_taken_0x151d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D98u;
        // 0x151d9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d98) {
            ctx->pc = 0x151E1Cu;
            return;
        }
    }
    ctx->pc = 0x151DA0u;
    // 0x151da0: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x151da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x151da4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x151da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151da8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x151dac: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x151dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151db0: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x151db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x151db4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151db8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151dbc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x151dbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x151dc0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x151DC0u;
    {
        const bool branch_taken_0x151dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DC0u;
        // 0x151dc4: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151dc0) {
            ctx->pc = 0x151E1Cu;
            return;
        }
    }
    ctx->pc = 0x151DC8u;
    // 0x151dc8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151dcc: 0x244224d0  addiu       $v0, $v0, 0x24D0
    ctx->pc = 0x151dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9424));
    // 0x151dd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151dd4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x151dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151dd8: 0x800008  jr          $a0
    ctx->pc = 0x151DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151DE0u: goto label_151de0;
            case 0x151DF0u: goto label_151df0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151DD8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x151DE0u;
label_151de0:
    // 0x151de0: 0xc054650  jal         func_151940
    ctx->pc = 0x151DE0u;
    SET_GPR_U32(ctx, 31, 0x151DE8u);
    ctx->pc = 0x151DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DE0u;
    // 0x151de4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151940u, 0x151DE0u, 0x151DE8u)) {
        return;
    }
    ctx->pc = 0x151DE8u;
label_151de8:
    // 0x151de8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151DE8u;
    {
        const bool branch_taken_0x151de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DE8u;
        // 0x151dec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151de8) {
            ctx->pc = 0x151E1Cu;
            return;
        }
    }
    ctx->pc = 0x151DF0u;
label_151df0:
    // 0x151df0: 0xc0547f8  jal         func_151FE0
    ctx->pc = 0x151DF0u;
    SET_GPR_U32(ctx, 31, 0x151DF8u);
    ctx->pc = 0x151DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151DF0u;
    // 0x151df4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151FE0u, 0x151DF0u, 0x151DF8u)) {
        return;
    }
    ctx->pc = 0x151DF8u;
label_151df8:
    // 0x151df8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151DF8u;
    {
        const bool branch_taken_0x151df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151DF8u;
        // 0x151dfc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151df8) {
            ctx->pc = 0x151E1Cu;
            return;
        }
    }
    ctx->pc = 0x151E00u;
}
