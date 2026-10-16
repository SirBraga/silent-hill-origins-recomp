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

// Function: sub_001DD0A0
// Address: 0x1dd0a0 - 0x1dd138
void sub_001DD0A0_0x1dd0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD0A0_0x1dd0a0");
#endif

    switch (ctx->pc) {
        case 0x1dd0a0u: goto label_1dd0a0;
        case 0x1dd0a4u: goto label_1dd0a4;
        case 0x1dd0a8u: goto label_1dd0a8;
        case 0x1dd0acu: goto label_1dd0ac;
        case 0x1dd0b0u: goto label_1dd0b0;
        case 0x1dd0b4u: goto label_1dd0b4;
        case 0x1dd0b8u: goto label_1dd0b8;
        case 0x1dd0bcu: goto label_1dd0bc;
        case 0x1dd0c0u: goto label_1dd0c0;
        case 0x1dd0c4u: goto label_1dd0c4;
        case 0x1dd0c8u: goto label_1dd0c8;
        case 0x1dd0ccu: goto label_1dd0cc;
        case 0x1dd0d0u: goto label_1dd0d0;
        case 0x1dd0d4u: goto label_1dd0d4;
        case 0x1dd0d8u: goto label_1dd0d8;
        case 0x1dd0dcu: goto label_1dd0dc;
        case 0x1dd0e0u: goto label_1dd0e0;
        case 0x1dd0e4u: goto label_1dd0e4;
        case 0x1dd0e8u: goto label_1dd0e8;
        case 0x1dd0ecu: goto label_1dd0ec;
        case 0x1dd0f0u: goto label_1dd0f0;
        case 0x1dd0f4u: goto label_1dd0f4;
        case 0x1dd0f8u: goto label_1dd0f8;
        case 0x1dd0fcu: goto label_1dd0fc;
        case 0x1dd100u: goto label_1dd100;
        case 0x1dd104u: goto label_1dd104;
        case 0x1dd108u: goto label_1dd108;
        case 0x1dd10cu: goto label_1dd10c;
        case 0x1dd110u: goto label_1dd110;
        case 0x1dd114u: goto label_1dd114;
        case 0x1dd118u: goto label_1dd118;
        case 0x1dd11cu: goto label_1dd11c;
        case 0x1dd120u: goto label_1dd120;
        case 0x1dd124u: goto label_1dd124;
        case 0x1dd128u: goto label_1dd128;
        case 0x1dd12cu: goto label_1dd12c;
        case 0x1dd130u: goto label_1dd130;
        case 0x1dd134u: goto label_1dd134;
        default: break;
    }

    ctx->pc = 0x1dd0a0u;

label_1dd0a0:
    // 0x1dd0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dd0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1dd0a4:
    // 0x1dd0a4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dd0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1dd0a8:
    // 0x1dd0a8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1dd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1dd0ac:
    // 0x1dd0ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dd0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dd0b0:
    // 0x1dd0b0: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1dd0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1dd0b4:
    // 0x1dd0b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dd0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1dd0b8:
    // 0x1dd0b8: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1dd0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1dd0bc:
    // 0x1dd0bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1dd0bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dd0c0:
    // 0x1dd0c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd0c4:
    // 0x1dd0c4: 0x40f809  jalr        $v0
label_1dd0c8:
    if (ctx->pc == 0x1DD0C8u) {
        ctx->pc = 0x1DD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C4u;
        // 0x1dd0c8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0CCu;
        goto label_1dd0cc;
    }
    ctx->pc = 0x1DD0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD0CCu);
        ctx->pc = 0x1DD0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0C4u;
        // 0x1dd0c8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0C4u, 0x1DD0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD0CCu;
label_1dd0cc:
    // 0x1dd0cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1dd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1dd0d0:
    // 0x1dd0d0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1dd0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1dd0d4:
    // 0x1dd0d4: 0x40f809  jalr        $v0
label_1dd0d8:
    if (ctx->pc == 0x1DD0D8u) {
        ctx->pc = 0x1DD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0D4u;
        // 0x1dd0d8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0DCu;
        goto label_1dd0dc;
    }
    ctx->pc = 0x1DD0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD0DCu);
        ctx->pc = 0x1DD0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0D4u;
        // 0x1dd0d8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0D4u, 0x1DD0DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD0DCu;
label_1dd0dc:
    // 0x1dd0dc: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_1dd0e0:
    if (ctx->pc == 0x1DD0E0u) {
        ctx->pc = 0x1DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0DCu;
        // 0x1dd0e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0E4u;
        goto label_1dd0e4;
    }
    ctx->pc = 0x1DD0DCu;
    {
        const bool branch_taken_0x1dd0dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0DCu;
        // 0x1dd0e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0dc) {
            ctx->pc = 0x1DD120u;
            goto label_1dd120;
        }
    }
    ctx->pc = 0x1DD0E4u;
label_1dd0e4:
    // 0x1dd0e4: 0x8c43e664  lw          $v1, -0x199C($v0)
    ctx->pc = 0x1dd0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960740)));
label_1dd0e8:
    // 0x1dd0e8: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x1dd0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1dd0ec:
    // 0x1dd0ec: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1dd0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1dd0f0:
    // 0x1dd0f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1dd0f4:
    if (ctx->pc == 0x1DD0F4u) {
        ctx->pc = 0x1DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F0u;
        // 0x1dd0f4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD0F8u;
        goto label_1dd0f8;
    }
    ctx->pc = 0x1DD0F0u;
    {
        const bool branch_taken_0x1dd0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F0u;
        // 0x1dd0f4: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0f0) {
            ctx->pc = 0x1DD10Cu;
            goto label_1dd10c;
        }
    }
    ctx->pc = 0x1DD0F8u;
label_1dd0f8:
    // 0x1dd0f8: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd0fc:
    // 0x1dd0fc: 0x40f809  jalr        $v0
label_1dd100:
    if (ctx->pc == 0x1DD100u) {
        ctx->pc = 0x1DD100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0FCu;
        // 0x1dd100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD104u;
        goto label_1dd104;
    }
    ctx->pc = 0x1DD0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD104u);
        ctx->pc = 0x1DD100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0FCu;
        // 0x1dd100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0FCu, 0x1DD104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD104u;
label_1dd104:
    // 0x1dd104: 0x10000005  b           . + 4 + (0x5 << 2)
label_1dd108:
    if (ctx->pc == 0x1DD108u) {
        ctx->pc = 0x1DD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD104u;
        // 0x1dd108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD10Cu;
        goto label_1dd10c;
    }
    ctx->pc = 0x1DD104u;
    {
        const bool branch_taken_0x1dd104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD104u;
        // 0x1dd108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd104) {
            ctx->pc = 0x1DD11Cu;
            goto label_1dd11c;
        }
    }
    ctx->pc = 0x1DD10Cu;
label_1dd10c:
    // 0x1dd10c: 0x8c62e670  lw          $v0, -0x1990($v1)
    ctx->pc = 0x1dd10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960752)));
label_1dd110:
    // 0x1dd110: 0x40f809  jalr        $v0
label_1dd114:
    if (ctx->pc == 0x1DD114u) {
        ctx->pc = 0x1DD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD110u;
        // 0x1dd114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD118u;
        goto label_1dd118;
    }
    ctx->pc = 0x1DD110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DD118u);
        ctx->pc = 0x1DD114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD110u;
        // 0x1dd114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD110u, 0x1DD118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1DD118u;
label_1dd118:
    // 0x1dd118: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dd11c:
    // 0x1dd11c: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x1dd11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_1dd120:
    // 0x1dd120: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dd120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dd124:
    // 0x1dd124: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dd124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dd128:
    // 0x1dd128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dd128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1dd12c:
    // 0x1dd12c: 0x3e00008  jr          $ra
label_1dd130:
    if (ctx->pc == 0x1DD130u) {
        ctx->pc = 0x1DD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD12Cu;
        // 0x1dd130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1DD134u;
        goto label_1dd134;
    }
    ctx->pc = 0x1DD12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD12Cu;
        // 0x1dd130: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD134u;
label_1dd134:
    // 0x1dd134: 0x0  nop
    ctx->pc = 0x1dd134u;
    // NOP
    ctx->pc = 0x1dd138u;
}
