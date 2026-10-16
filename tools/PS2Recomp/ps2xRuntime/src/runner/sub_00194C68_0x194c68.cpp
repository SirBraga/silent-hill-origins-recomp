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

// Function: sub_00194C68
// Address: 0x194c68 - 0x194ce0
void sub_00194C68_0x194c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00194C68_0x194c68");
#endif

    switch (ctx->pc) {
        case 0x194c90u: goto label_194c90;
        case 0x194cb4u: goto label_194cb4;
        case 0x194cccu: goto label_194ccc;
        default: break;
    }

    ctx->pc = 0x194c68u;

    // 0x194c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x194c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x194c6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x194c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x194c70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x194c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x194c74: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x194C74u;
    {
        const bool branch_taken_0x194c74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x194C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C74u;
        // 0x194c78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c74) {
            ctx->pc = 0x194CCCu;
            goto label_194ccc;
        }
    }
    ctx->pc = 0x194C7Cu;
    // 0x194c7c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x194C7Cu;
    {
        const bool branch_taken_0x194c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x194C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194C7Cu;
        // 0x194c80: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194c7c) {
            ctx->pc = 0x194CBCu;
            goto label_194cbc;
        }
    }
    ctx->pc = 0x194C84u;
    // 0x194c84: 0x26109ab8  addiu       $s0, $s0, -0x6548
    ctx->pc = 0x194c84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941368));
    // 0x194c88: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x194C88u;
    SET_GPR_U32(ctx, 31, 0x194C90u);
    ctx->pc = 0x194C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194C88u;
    // 0x194c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x194C88u, 0x194C90u)) {
        return;
    }
    ctx->pc = 0x194C90u;
label_194c90:
    // 0x194c90: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x194c90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x194c94: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x194c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x194c98: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x194c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x194c9c: 0xac62bf40  sw          $v0, -0x40C0($v1)
    ctx->pc = 0x194c9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBF40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBF40u, _value); } while (0);
    // 0x194ca0: 0x2484bf48  addiu       $a0, $a0, -0x40B8
    ctx->pc = 0x194ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950728));
    // 0x194ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x194ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194ca8: 0x24c64ce0  addiu       $a2, $a2, 0x4CE0
    ctx->pc = 0x194ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19680));
    // 0x194cac: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x194CACu;
    SET_GPR_U32(ctx, 31, 0x194CB4u);
    ctx->pc = 0x194CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CACu;
    // 0x194cb0: 0x24070138  addiu       $a3, $zero, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x194CACu, 0x194CB4u)) {
        return;
    }
    ctx->pc = 0x194CB4u;
label_194cb4:
    // 0x194cb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x194CB4u;
    {
        const bool branch_taken_0x194cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x194CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CB4u;
        // 0x194cb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x194cb4) {
            ctx->pc = 0x194CD0u;
            goto label_194cd0;
        }
    }
    ctx->pc = 0x194CBCu;
label_194cbc:
    // 0x194cbc: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x194cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x194cc0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x194cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x194cc4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x194CC4u;
    SET_GPR_U32(ctx, 31, 0x194CCCu);
    ctx->pc = 0x194CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194CC4u;
    // 0x194cc8: 0x2484bf48  addiu       $a0, $a0, -0x40B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x194CC4u, 0x194CCCu)) {
        return;
    }
    ctx->pc = 0x194CCCu;
label_194ccc:
    // 0x194ccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x194cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_194cd0:
    // 0x194cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x194cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x194cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x194CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x194CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x194CD4u;
        // 0x194cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x194CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x194CDCu;
    // 0x194cdc: 0x0  nop
    ctx->pc = 0x194cdcu;
    // NOP
    ctx->pc = 0x194ce0u;
}
