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

// Function: sub_00191E60
// Address: 0x191e60 - 0x191ed8
void sub_00191E60_0x191e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191E60_0x191e60");
#endif

    switch (ctx->pc) {
        case 0x191e88u: goto label_191e88;
        case 0x191eacu: goto label_191eac;
        case 0x191ec4u: goto label_191ec4;
        default: break;
    }

    ctx->pc = 0x191e60u;

    // 0x191e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191e64: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x191e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x191e68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191e6c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191E6Cu;
    {
        const bool branch_taken_0x191e6c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x191E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E6Cu;
        // 0x191e70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e6c) {
            ctx->pc = 0x191EC4u;
            goto label_191ec4;
        }
    }
    ctx->pc = 0x191E74u;
    // 0x191e74: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x191E74u;
    {
        const bool branch_taken_0x191e74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191E74u;
        // 0x191e78: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191e74) {
            ctx->pc = 0x191EB4u;
            goto label_191eb4;
        }
    }
    ctx->pc = 0x191E7Cu;
    // 0x191e7c: 0x261096b8  addiu       $s0, $s0, -0x6948
    ctx->pc = 0x191e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940344));
    // 0x191e80: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x191E80u;
    SET_GPR_U32(ctx, 31, 0x191E88u);
    ctx->pc = 0x191E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191E80u;
    // 0x191e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x191E80u, 0x191E88u)) {
        return;
    }
    ctx->pc = 0x191E88u;
label_191e88:
    // 0x191e88: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x191e88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x191e8c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x191e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x191e90: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x191e90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x191e94: 0xac62bd98  sw          $v0, -0x4268($v1)
    ctx->pc = 0x191e94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD98u, _value); } while (0);
    // 0x191e98: 0x2484bda0  addiu       $a0, $a0, -0x4260
    ctx->pc = 0x191e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
    // 0x191e9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ea0: 0x24c61ed8  addiu       $a2, $a2, 0x1ED8
    ctx->pc = 0x191ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7896));
    // 0x191ea4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x191EA4u;
    SET_GPR_U32(ctx, 31, 0x191EACu);
    ctx->pc = 0x191EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EA4u;
    // 0x191ea8: 0x24070120  addiu       $a3, $zero, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x191EA4u, 0x191EACu)) {
        return;
    }
    ctx->pc = 0x191EACu;
label_191eac:
    // 0x191eac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x191EACu;
    {
        const bool branch_taken_0x191eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191EACu;
        // 0x191eb0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191eac) {
            ctx->pc = 0x191EC8u;
            goto label_191ec8;
        }
    }
    ctx->pc = 0x191EB4u;
label_191eb4:
    // 0x191eb4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x191eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x191eb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x191eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x191ebc: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x191EBCu;
    SET_GPR_U32(ctx, 31, 0x191EC4u);
    ctx->pc = 0x191EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191EBCu;
    // 0x191ec0: 0x2484bda0  addiu       $a0, $a0, -0x4260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x191EBCu, 0x191EC4u)) {
        return;
    }
    ctx->pc = 0x191EC4u;
label_191ec4:
    // 0x191ec4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x191ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_191ec8:
    // 0x191ec8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191ecc: 0x3e00008  jr          $ra
    ctx->pc = 0x191ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191ECCu;
        // 0x191ed0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191ED4u;
    // 0x191ed4: 0x0  nop
    ctx->pc = 0x191ed4u;
    // NOP
    ctx->pc = 0x191ed8u;
}
