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

// Function: sub_001F5BF0
// Address: 0x1f5bf0 - 0x1f5d00
void sub_001F5BF0_0x1f5bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5BF0_0x1f5bf0");
#endif

    switch (ctx->pc) {
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c08u: goto label_1f5c08;
        case 0x1f5c10u: goto label_1f5c10;
        case 0x1f5c18u: goto label_1f5c18;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c48u: goto label_1f5c48;
        case 0x1f5c68u: goto label_1f5c68;
        case 0x1f5c88u: goto label_1f5c88;
        case 0x1f5c90u: goto label_1f5c90;
        case 0x1f5ca0u: goto label_1f5ca0;
        case 0x1f5ca8u: goto label_1f5ca8;
        case 0x1f5cc0u: goto label_1f5cc0;
        case 0x1f5cc8u: goto label_1f5cc8;
        case 0x1f5cd0u: goto label_1f5cd0;
        case 0x1f5cd8u: goto label_1f5cd8;
        case 0x1f5ce0u: goto label_1f5ce0;
        case 0x1f5ce8u: goto label_1f5ce8;
        case 0x1f5cf0u: goto label_1f5cf0;
        default: break;
    }

    ctx->pc = 0x1f5bf0u;

    // 0x1f5bf0: 0x27bdfbf0  addiu       $sp, $sp, -0x410
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966256));
    // 0x1f5bf4: 0xffbf0400  sd          $ra, 0x400($sp)
    ctx->pc = 0x1f5bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1024), GPR_U64(ctx, 31));
    // 0x1f5bf8: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x1F5BF8u;
    SET_GPR_U32(ctx, 31, 0x1F5C00u);
    ctx->pc = 0x1F5BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5BF8u;
    // 0x1f5bfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x1F5BF8u, 0x1F5C00u)) {
        return;
    }
    ctx->pc = 0x1F5C00u;
label_1f5c00:
    // 0x1f5c00: 0xc0c998a  jal         func_326628
    ctx->pc = 0x1F5C00u;
    SET_GPR_U32(ctx, 31, 0x1F5C08u);
    ctx->pc = 0x326628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326628u, 0x1F5C00u, 0x1F5C08u)) {
        return;
    }
    ctx->pc = 0x1F5C08u;
label_1f5c08:
    // 0x1f5c08: 0xc0a5976  jal         func_2965D8
    ctx->pc = 0x1F5C08u;
    SET_GPR_U32(ctx, 31, 0x1F5C10u);
    ctx->pc = 0x1F5C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C08u;
    // 0x1f5c0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2965D8u, 0x1F5C08u, 0x1F5C10u)) {
        return;
    }
    ctx->pc = 0x1F5C10u;
label_1f5c10:
    // 0x1f5c10: 0xc0a5b6c  jal         func_296DB0
    ctx->pc = 0x1F5C10u;
    SET_GPR_U32(ctx, 31, 0x1F5C18u);
    ctx->pc = 0x1F5C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C10u;
    // 0x1f5c14: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296DB0u, 0x1F5C10u, 0x1F5C18u)) {
        return;
    }
    ctx->pc = 0x1F5C18u;
label_1f5c18:
    // 0x1f5c18: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x1f5c18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
    // 0x1f5c1c: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1f5c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1f5c20: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f5c24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c28: 0x24a52a38  addiu       $a1, $a1, 0x2A38
    ctx->pc = 0x1f5c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10808));
    // 0x1f5c2c: 0x24c62a20  addiu       $a2, $a2, 0x2A20
    ctx->pc = 0x1f5c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10784));
    // 0x1f5c30: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1F5C30u;
    SET_GPR_U32(ctx, 31, 0x1F5C38u);
    ctx->pc = 0x1F5C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C30u;
    // 0x1f5c34: 0x24e72ae0  addiu       $a3, $a3, 0x2AE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 10976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1F5C30u, 0x1F5C38u)) {
        return;
    }
    ctx->pc = 0x1F5C38u;
label_1f5c38:
    // 0x1f5c38: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1f5c3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5c40: 0xc0c496b  jal         func_3125AC
    ctx->pc = 0x1F5C40u;
    SET_GPR_U32(ctx, 31, 0x1F5C48u);
    ctx->pc = 0x1F5C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C40u;
    // 0x1f5c44: 0x24a52a40  addiu       $a1, $a1, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125ACu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3125ACu, 0x1F5C40u, 0x1F5C48u)) {
        return;
    }
    ctx->pc = 0x1F5C48u;
label_1f5c48:
    // 0x1f5c48: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1f5c48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5c4c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F5C4Cu;
    {
        const bool branch_taken_0x1f5c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C4Cu;
        // 0x1f5c50: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c4c) {
            ctx->pc = 0x1F5C80u;
            goto label_1f5c80;
        }
    }
    ctx->pc = 0x1F5C54u;
    // 0x1f5c54: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x1f5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1f5c58: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5C58u;
    {
        const bool branch_taken_0x1f5c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5C58u;
        // 0x1f5c5c: 0x2403003a  addiu       $v1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c58) {
            ctx->pc = 0x1F5C80u;
            goto label_1f5c80;
        }
    }
    ctx->pc = 0x1F5C60u;
    // 0x1f5c60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f5c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f5c64: 0x0  nop
    ctx->pc = 0x1f5c64u;
    // NOP
label_1f5c68:
    // 0x1f5c68: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1f5c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f5c6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F5C6Cu;
    {
        const bool branch_taken_0x1f5c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c6c) {
            ctx->pc = 0x1F5C80u;
            goto label_1f5c80;
        }
    }
    ctx->pc = 0x1F5C74u;
    // 0x1f5c74: 0x0  nop
    ctx->pc = 0x1f5c74u;
    // NOP
    // 0x1f5c78: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5C78u;
    {
        const bool branch_taken_0x1f5c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5c78) {
            ctx->pc = 0x1F5C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5C78u;
            // 0x1f5c7c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5c68;
        }
    }
    ctx->pc = 0x1F5C80u;
label_1f5c80:
    // 0x1f5c80: 0xc0c5d6c  jal         func_3175B0
    ctx->pc = 0x1F5C80u;
    SET_GPR_U32(ctx, 31, 0x1F5C88u);
    ctx->pc = 0x3175B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3175B0u, 0x1F5C80u, 0x1F5C88u)) {
        return;
    }
    ctx->pc = 0x1F5C88u;
label_1f5c88:
    // 0x1f5c88: 0xc0c9b60  jal         func_326D80
    ctx->pc = 0x1F5C88u;
    SET_GPR_U32(ctx, 31, 0x1F5C90u);
    ctx->pc = 0x1F5C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5C88u;
    // 0x1f5c8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326D80u, 0x1F5C88u, 0x1F5C90u)) {
        return;
    }
    ctx->pc = 0x1F5C90u;
label_1f5c90:
    // 0x1f5c90: 0x0  nop
    ctx->pc = 0x1f5c90u;
    // NOP
    // 0x1f5c94: 0x0  nop
    ctx->pc = 0x1f5c94u;
    // NOP
    // 0x1f5c98: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5C98u;
    {
        const bool branch_taken_0x1f5c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c98) {
            ctx->pc = 0x1F5C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5c88;
        }
    }
    ctx->pc = 0x1F5CA0u;
label_1f5ca0:
    // 0x1f5ca0: 0xc0c9b4c  jal         func_326D30
    ctx->pc = 0x1F5CA0u;
    SET_GPR_U32(ctx, 31, 0x1F5CA8u);
    ctx->pc = 0x326D30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326D30u, 0x1F5CA0u, 0x1F5CA8u)) {
        return;
    }
    ctx->pc = 0x1F5CA8u;
label_1f5ca8:
    // 0x1f5ca8: 0x0  nop
    ctx->pc = 0x1f5ca8u;
    // NOP
    // 0x1f5cac: 0x0  nop
    ctx->pc = 0x1f5cacu;
    // NOP
    // 0x1f5cb0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5CB0u;
    {
        const bool branch_taken_0x1f5cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5cb0) {
            ctx->pc = 0x1F5CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5ca0;
        }
    }
    ctx->pc = 0x1F5CB8u;
    // 0x1f5cb8: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x1F5CB8u;
    SET_GPR_U32(ctx, 31, 0x1F5CC0u);
    ctx->pc = 0x1F5CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CB8u;
    // 0x1f5cbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x1F5CB8u, 0x1F5CC0u)) {
        return;
    }
    ctx->pc = 0x1F5CC0u;
label_1f5cc0:
    // 0x1f5cc0: 0xc0c998a  jal         func_326628
    ctx->pc = 0x1F5CC0u;
    SET_GPR_U32(ctx, 31, 0x1F5CC8u);
    ctx->pc = 0x326628u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326628u, 0x1F5CC0u, 0x1F5CC8u)) {
        return;
    }
    ctx->pc = 0x1F5CC8u;
label_1f5cc8:
    // 0x1f5cc8: 0xc0a5976  jal         func_2965D8
    ctx->pc = 0x1F5CC8u;
    SET_GPR_U32(ctx, 31, 0x1F5CD0u);
    ctx->pc = 0x1F5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CC8u;
    // 0x1f5ccc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2965D8u, 0x1F5CC8u, 0x1F5CD0u)) {
        return;
    }
    ctx->pc = 0x1F5CD0u;
label_1f5cd0:
    // 0x1f5cd0: 0xc0a5b6c  jal         func_296DB0
    ctx->pc = 0x1F5CD0u;
    SET_GPR_U32(ctx, 31, 0x1F5CD8u);
    ctx->pc = 0x1F5CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5CD0u;
    // 0x1f5cd4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296DB0u, 0x1F5CD0u, 0x1F5CD8u)) {
        return;
    }
    ctx->pc = 0x1F5CD8u;
label_1f5cd8:
    // 0x1f5cd8: 0xc0c95e8  jal         func_3257A0
    ctx->pc = 0x1F5CD8u;
    SET_GPR_U32(ctx, 31, 0x1F5CE0u);
    ctx->pc = 0x3257A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3257A0u, 0x1F5CD8u, 0x1F5CE0u)) {
        return;
    }
    ctx->pc = 0x1F5CE0u;
label_1f5ce0:
    // 0x1f5ce0: 0xc07d5a2  jal         func_1F5688
    ctx->pc = 0x1F5CE0u;
    SET_GPR_U32(ctx, 31, 0x1F5CE8u);
    ctx->pc = 0x1F5688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5688u, 0x1F5CE0u, 0x1F5CE8u)) {
        return;
    }
    ctx->pc = 0x1F5CE8u;
label_1f5ce8:
    // 0x1f5ce8: 0xc07d63c  jal         func_1F58F0
    ctx->pc = 0x1F5CE8u;
    SET_GPR_U32(ctx, 31, 0x1F5CF0u);
    ctx->pc = 0x1F58F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F58F0u, 0x1F5CE8u, 0x1F5CF0u)) {
        return;
    }
    ctx->pc = 0x1F5CF0u;
label_1f5cf0:
    // 0x1f5cf0: 0xdfbf0400  ld          $ra, 0x400($sp)
    ctx->pc = 0x1f5cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x1f5cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5CF4u;
        // 0x1f5cf8: 0x27bd0410  addiu       $sp, $sp, 0x410 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5CFCu;
    // 0x1f5cfc: 0x0  nop
    ctx->pc = 0x1f5cfcu;
    // NOP
    ctx->pc = 0x1f5d00u;
}
