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

// Function: sub_00189AF0
// Address: 0x189af0 - 0x189b68
void sub_00189AF0_0x189af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189AF0_0x189af0");
#endif

    switch (ctx->pc) {
        case 0x189b18u: goto label_189b18;
        case 0x189b3cu: goto label_189b3c;
        case 0x189b54u: goto label_189b54;
        default: break;
    }

    ctx->pc = 0x189af0u;

    // 0x189af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x189af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x189af4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x189af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x189af8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x189af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x189afc: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x189AFCu;
    {
        const bool branch_taken_0x189afc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x189B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189AFCu;
        // 0x189b00: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189afc) {
            ctx->pc = 0x189B54u;
            goto label_189b54;
        }
    }
    ctx->pc = 0x189B04u;
    // 0x189b04: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x189B04u;
    {
        const bool branch_taken_0x189b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B04u;
        // 0x189b08: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b04) {
            ctx->pc = 0x189B44u;
            goto label_189b44;
        }
    }
    ctx->pc = 0x189B0Cu;
    // 0x189b0c: 0x26108dd0  addiu       $s0, $s0, -0x7230
    ctx->pc = 0x189b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938064));
    // 0x189b10: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x189B10u;
    SET_GPR_U32(ctx, 31, 0x189B18u);
    ctx->pc = 0x189B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B10u;
    // 0x189b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x189B10u, 0x189B18u)) {
        return;
    }
    ctx->pc = 0x189B18u;
label_189b18:
    // 0x189b18: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x189b18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x189b1c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x189b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x189b20: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x189b20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x189b24: 0xac62bd40  sw          $v0, -0x42C0($v1)
    ctx->pc = 0x189b24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD40u, _value); } while (0);
    // 0x189b28: 0x2484bd48  addiu       $a0, $a0, -0x42B8
    ctx->pc = 0x189b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    // 0x189b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x189b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189b30: 0x24c69b68  addiu       $a2, $a2, -0x6498
    ctx->pc = 0x189b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941544));
    // 0x189b34: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x189B34u;
    SET_GPR_U32(ctx, 31, 0x189B3Cu);
    ctx->pc = 0x189B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B34u;
    // 0x189b38: 0x240700e0  addiu       $a3, $zero, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x189B34u, 0x189B3Cu)) {
        return;
    }
    ctx->pc = 0x189B3Cu;
label_189b3c:
    // 0x189b3c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x189B3Cu;
    {
        const bool branch_taken_0x189b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x189B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B3Cu;
        // 0x189b40: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x189b3c) {
            ctx->pc = 0x189B58u;
            goto label_189b58;
        }
    }
    ctx->pc = 0x189B44u;
label_189b44:
    // 0x189b44: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x189b44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x189b48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x189b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x189b4c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x189B4Cu;
    SET_GPR_U32(ctx, 31, 0x189B54u);
    ctx->pc = 0x189B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x189B4Cu;
    // 0x189b50: 0x2484bd48  addiu       $a0, $a0, -0x42B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x189B4Cu, 0x189B54u)) {
        return;
    }
    ctx->pc = 0x189B54u;
label_189b54:
    // 0x189b54: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x189b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_189b58:
    // 0x189b58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x189B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x189B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189B5Cu;
        // 0x189b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189B64u;
    // 0x189b64: 0x0  nop
    ctx->pc = 0x189b64u;
    // NOP
    ctx->pc = 0x189b68u;
}
