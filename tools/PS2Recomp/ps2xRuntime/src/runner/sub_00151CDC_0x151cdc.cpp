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

// Function: sub_00151CDC
// Address: 0x151cdc - 0x151d64
void sub_00151CDC_0x151cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151CDC_0x151cdc");
#endif

    switch (ctx->pc) {
        case 0x151ce4u: goto label_151ce4;
        case 0x151cf8u: goto label_151cf8;
        case 0x151d4cu: goto label_151d4c;
        case 0x151d5cu: goto label_151d5c;
        default: break;
    }

    ctx->pc = 0x151cdcu;

    // 0x151cdc: 0xc07fcc2  jal         func_1FF308
    ctx->pc = 0x151CDCu;
    SET_GPR_U32(ctx, 31, 0x151CE4u);
    ctx->pc = 0x151CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151CDCu;
    // 0x151ce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF308u, 0x151CDCu, 0x151CE4u)) {
        return;
    }
    ctx->pc = 0x151CE4u;
label_151ce4:
    // 0x151ce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x151ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151cec: 0x3e00008  jr          $ra
    ctx->pc = 0x151CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151CECu;
        // 0x151cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151CF4u;
    // 0x151cf4: 0x0  nop
    ctx->pc = 0x151cf4u;
    // NOP
label_151cf8:
    // 0x151cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151cfc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x151cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x151d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x151d04: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x151d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x151d08: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x151d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x151d0c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x151d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x151d10: 0x24428500  addiu       $v0, $v0, -0x7B00
    ctx->pc = 0x151d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935808));
    // 0x151d14: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x151d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x151d18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151d1c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x151d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151d20: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x151d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x151d24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x151D24u;
    {
        const bool branch_taken_0x151d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D24u;
        // 0x151d28: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d24) {
            ctx->pc = 0x151D7Cu;
            return;
        }
    }
    ctx->pc = 0x151D2Cu;
    // 0x151d2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x151d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x151d30: 0x244224b0  addiu       $v0, $v0, 0x24B0
    ctx->pc = 0x151d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9392));
    // 0x151d34: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x151d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x151d38: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x151d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151d3c: 0x800008  jr          $a0
    ctx->pc = 0x151D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x151D44u: goto label_151d44;
            case 0x151D54u: goto label_151d54;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151D3Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x151D44u;
label_151d44:
    // 0x151d44: 0xc0547d4  jal         func_151F50
    ctx->pc = 0x151D44u;
    SET_GPR_U32(ctx, 31, 0x151D4Cu);
    ctx->pc = 0x151D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D44u;
    // 0x151d48: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x151F50u, 0x151D44u, 0x151D4Cu)) {
        return;
    }
    ctx->pc = 0x151D4Cu;
label_151d4c:
    // 0x151d4c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x151D4Cu;
    {
        const bool branch_taken_0x151d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D4Cu;
        // 0x151d50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d4c) {
            ctx->pc = 0x151D80u;
            return;
        }
    }
    ctx->pc = 0x151D54u;
label_151d54:
    // 0x151d54: 0xc054852  jal         func_152148
    ctx->pc = 0x151D54u;
    SET_GPR_U32(ctx, 31, 0x151D5Cu);
    ctx->pc = 0x151D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151D54u;
    // 0x151d58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x152148u, 0x151D54u, 0x151D5Cu)) {
        return;
    }
    ctx->pc = 0x151D5Cu;
label_151d5c:
    // 0x151d5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151D5Cu;
    {
        const bool branch_taken_0x151d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151D5Cu;
        // 0x151d60: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151d5c) {
            ctx->pc = 0x151D80u;
            return;
        }
    }
    ctx->pc = 0x151D64u;
}
